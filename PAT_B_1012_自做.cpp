#include<cstdio> // C++代码推荐使用 cstdio 而不是stdio.h
/*
思路：
1. 读取输入数字总数n
2. A1能被5整除的整数即为能被10整除的数 x%10 == 0
3. A2 为 x%5==1 的数 交错求和,通过一个变量sign 每次迭代sign*=-1来控制符号,sum1控制总和
4  A3 用一个count变量统计x%5==2
5. A4 用sum2统计数字的和，count2统计总数，average统计平均数
6. A5 max存储最大的数*/
int main() {
	int n, x, A1=0, A2=0, A3=0, A5=0, sign = 1, sum1 = 0,sum2=0,count=0,count2 = 0, average;
	float A4= 0;
	scanf_s("%d", &n);
	while(n--){
		scanf_s("%d", &x);
		int mod = x % 5;
		/*if (x % 10 == 0) {
			A1++;
		}
		*/
		//写法2：
		if(mod == 0){
			if(x % 2 == 0) {
				A1+=x;
			}
		}
		else if(mod == 1) {
			A2 += (sign*x);
			sign = -sign;
			count++;//count记录计算次数
		}
		else if (mod == 2) {
			A3++;//A3记录模为2数字个数
		}
		else if (mod == 3) {
			sum2 += x;
			count2++;
		}
		else if (mod == 4) {
			if (A5 < x)  A5 = x;
		}

	}
	if(count2!=0)
	A4 = float(sum2) / count2;
	
	//printf("%d %d %d %.1f %d",  A2, A3, A4, A5);
	if (A1 != 0) {
		printf("%d ", A1);
	}
	else printf("N ");
	if (count!=0) {
		printf("%d ", A2);
	}
	else printf("N ");
	if (A3 != 0) {
		printf("%d ", A3);
	}
	else {
		printf("N ");
	}

	if (A4 != 0) {
		printf("%.1f ", A4);
	}
	else printf("N ");
	if (A5 != 0) {
		printf("%d", A5);
	}
	else printf("N");
	


	getchar();	getchar();

	return 0;
}


/*
总结：
1. 对数组的循环左移，通过先将数组整体右移，再将超出部分移动胡来
2. 将数据超出部分再移动回来
3. 因为移动M位与移动M%N位是一样的，通过M = M%N减少操作次数
4. 官方解答比较取巧，他并没有对数组进行操作，而是通过改变输出方式来达到循环左移，他先输出后几位，再输出前几位


*/