#include<cstdio> // C++�����Ƽ�ʹ��cstdio ������stdio.h
int main() {
	int n,i=1;
	long int A, B, C;    //���ڴ�������int���ܻ�Խ�磬ʹ��long int
	scanf_s("%d", &n);
	while (i <=n) {//��������n ��ABC
		//scanf_s("%ld %ld %ld", &A, &B, &C);
		scanf("%ld %ld %ld", &A, &B, &C);
		if (A + B > C) {
			printf("Case #%d: true\n",i);
		}
		else {
			printf("Case #%d: false\n", i);
		}

		i++; //��¼case

	}


	return 0;
}