#include<cstdio> // C++�����Ƽ�ʹ��cstdio ������stdio.h
int main() {
	int n, step = 0; //������������ǰ�棬һ���������ٴ�������
	scanf_s("%d", &n);//������ĿҪ��  n
	while (n != 1) {//ѭ���жϣ�ֱ����Ŀ������n = 1����ֹ����
		if (n % 2 == 0) n = n / 2; //nΪż������2
		else n = (3 * n + 1) / 2;  // n��������nΪ��3n+1)/2
		step++; //��¼����
	}
	printf("%d", step);  //�������


	return 0;
}