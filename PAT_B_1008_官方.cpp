#include<cstdio> // C++�����Ƽ�ʹ�� cstdio ������stdio.h
int main() {

	int a[110];
	int n, m, count = 0; //count��¼������ĸ���
	scanf_s("%d%d", &n, &m);
	m = m % n;   //����m���ٴ���
	for (int i = 0; i < n; i++) {
		scanf_s("%d", &a[i]);
	}
	for (int i = n - m; i < n; i++) { //���n-m��n��
		printf("%d", a[i]);
		count++; //�Ѿ����count��
		if (count < n) printf(" ");
	}
	for (int i = 0; i < n - m; i++) {
		printf("%d", a[i]);
		count++;
		if (count < n) printf(" ");

	}
	




	//getchar();	getchar();

	return 0;
}


/*
�ܽ᣺
1. �������ѭ�����ƣ�ͨ���Ƚ������������ƣ��ٽ����������ƶ�����
2. �����ݳ����������ƶ�����
3. ��Ϊ�ƶ�Mλ���ƶ�M%Nλ��һ���ģ�ͨ��M = M%N���ٲ�������
4. �ٷ����Ƚ�ȡ�ɣ�����û�ж�������в���������ͨ���ı������ʽ���ﵽѭ�����ƣ����������λ�������ǰ��λ


*/