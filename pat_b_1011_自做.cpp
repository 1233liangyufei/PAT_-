#include<cstdio> // C++代码推荐使用cstdio 而不是stdio.h
int main() {
	int n,i=1;
	long int A, B, C;    //对于大整数，int可能会越界，使用long int
	scanf_s("%d", &n);
	while (i <=n) {//依次输入n 组ABC
		//scanf_s("%ld %ld %ld", &A, &B, &C);
		scanf("%ld %ld %ld", &A, &B, &C);
		if (A + B > C) {
			printf("Case #%d: true\n",i);
		}
		else {
			printf("Case #%d: false\n", i);
		}

		i++; //记录case

	}


	return 0;
}