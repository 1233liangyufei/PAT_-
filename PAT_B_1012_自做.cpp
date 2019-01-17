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
			count++;//count记录计算次数，判断是否数字存在
		}
		else if (mod == 2) {
			A3++;//A3记录模为2数字个数
		}
		else if (mod == 3) {
			sum2 += x;//记录数字总和
			count2++;//记录数字个数
		}
		else if (mod == 4) {
			if (A5 < x)  A5 = x;//记录最大值
		}

	}
	if(count2!=0)
	A4 = float(sum2) / count2;//计算平均数
	
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
1. 对于A2 当A2==0时也不能保证不存在，可能交错相加=0，因此用count来判断是否存在
2. A4输出小数，定义为float

*/