#include<stdio.h>
int main() {
	int i = 0; // i ��¼�������
	int n;     // n ��ȡ��������
	scanf_s("%d", &n); //���������ݶ�ȡ��n
	while (n != 1) {
		if (n % 2 == 0) {
			n = n / 2;
		}
		else {
			n = (3 * n + 1) / 2;
		}
		i += 1;
	}
	printf("%d", i);
	//getchar();
	//getchar();
	return 0;
}