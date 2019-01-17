#include<cstdio> // C++代码推荐使用 cstdio 而不是stdio.h
/*
思路：
1. 读取输入数字总数n
2. A1能被5整除的整数即为能被10整除的数 x%10 == 0
3. A2 为 x%5==1 的数 交错求和,通过一个变量sign 每次迭代sign*=-1来控制符号,sum1控制总和
4  A3 用一个count变量统计x%5==2
5. A4 用sum2统计数字的和，count2统计总数，average统计平均数
6. A5 max存储最大的数

1. 用数组count[5]存放个数，初值为0
2. 用ans[5]存放值，初值为0*/
int main() {


	int count[5] = { 0 };
	int ans[5] = { 0 };
	int n, temp;
	scanf("%d", &n);
	while (n--) {
		scanf("%d", &temp);
		if (temp % 5 == 0) {
			if (temp % 2 == 0) {
				ans[0] += temp;
				count[0]++;
			}
		}
		else if (temp % 5 == 1) {
			if (count[1] % 2 == 0) {
				ans[1] += temp;
			}
			else {
				ans[1] -= temp;
			}
			count[1]++;
		}
		else if (temp % 5 == 2) {
			count[2]++;
		}
		else if (temp % 5 == 3) {
			ans[3] += temp;
			count[3]++;
		}
		else if (temp % 5 == 4) {
			if (temp > ans[4]) {
				ans[4] = temp;
			}
			count[4]++;
		}
	}
	if (count[0] == 0) {
		printf("N ");
	}
	else
		printf("%d ", ans[0]);

	if (count[1] == 0) {
		printf("N ");
	}
	else
		printf("%d ", ans[1]);

	if (count[2] == 0) {
		printf("N ");
	}
	else
		printf("%d ", count[2]);

	if (count[3] == 0) {
		printf("N ");
	}
	else
		printf("%.1f ", float(ans[3]) / count[3]);

	if (count[4] == 0) {
		printf("N");
	}
	else
		printf("%d", ans[4]);

	getchar();	getchar();

	return 0;
}


/*
总结：
1. 对于A2 当A2==0时也不能保证不存在，可能交错相加=0，因此用count来判断是否存在
2. A4输出小数，定义为float

*/