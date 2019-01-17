#include<cstdio> // C++代码推荐使用cstdio 而不是stdio.h
int main() {
	int n, step = 0; //变量声明放在前面，一块声明减少代码行数
	scanf_s("%d", &n);//输入题目要求  n
	while (n != 1) {//循环判断，直到题目所给的n = 1的终止条件
		if (n % 2 == 0) n = n / 2; //n为偶数除以2
		else n = (3 * n + 1) / 2;  // n是奇数，n为（3n+1)/2
		step++; //记录步长
	}
	printf("%d", step);  //输出步长


	return 0;
}