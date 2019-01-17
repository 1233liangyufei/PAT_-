#include<cstdio> // C++代码推荐使用 cstdio 而不是stdio.h
int main() {

	int a[110];
	int n, m, count = 0; //count记录输出数的个数
	scanf_s("%d%d", &n, &m);
	m = m % n;   //修正m减少次数
	for (int i = 0; i < n; i++) {
		scanf_s("%d", &a[i]);
	}
	for (int i = n - m; i < n; i++) { //输出n-m到n号
		printf("%d", a[i]);
		count++; //已经输出count个
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
总结：
1. 对数组的循环左移，通过先将数组整体右移，再将超出部分移动胡来
2. 将数据超出部分再移动回来
3. 因为移动M位与移动M%N位是一样的，通过M = M%N减少操作次数
4. 官方解答比较取巧，他并没有对数组进行操作，而是通过改变输出方式来达到循环左移，他先输出后几位，再输出前几位


*/