#include<cstdio> // C++代码推荐使用cstdio 而不是stdio.h
int main() {
	//int n, i = 1;

	int T, tcase = 1;   //变量命名一般采用小写，见名知意，T用来存放数组组数，tcase用来递增case的值
	//long int A, B, C;    //对于大整数，int可能会越界，使用long int

	scanf_s("%d", &T);
	//scanf_s("%d", &n);
	/*while (i <= n) {//依次输入n 组ABC
		//scanf_s("%ld %ld %ld", &A, &B, &C);
		scanf("%ld %ld %ld", &A, &B, &C);
		if (A + B > C) {
			printf("Case #%d: true\n", i);
		}
		else {
			printf("Case #%d: false\n", i);
		}

		i++; //记录case

	}*/
	//while (--T) {// --T  使得循环刚好T次
	while(T--){   // 注意不要写成--T,循环次数少1    T--执行T次刚好为0，--T则在执行N-1次成为0
		long long a, b, c; //对于大整数使用long long 存储
		scanf_s("%lld%lld%lld", &a, &b, &c);
		if (a + b > c) {
			printf("Case #%d: true\n", tcase++);
		}
		else {
			printf("Case #%d: false\n", tcase++);
		}
	}




	return 0;
}