#include<cstdio> // C++代码推荐使用 cstdio 而不是stdio.h
#include <stdlib.h> 
/*
思路：
1. 读取玩家出拳字符
2. 比较二者的内容，判断甲乙谁获得胜利
3. 用一个数组保存锤头剪刀布的胜利次数
*/
int main() {

	// 声明变量
	int n,A=0,B=0,P=0;//n记录比赛次数，A,B,P记录甲，乙胜利次数和平局次数
	char a, b;
	int a1[3] = { 0 }, b1[3] = {0};//a1,b1用来保存甲乙各种出拳胜利次数，根据字典序，a1[0],a1[1],a1[2]
	/*scanf("%c %c", &a, &b);
	printf("%c %c ", a, b);
	printf("%d %d\n", a == 'C', b == 'C');*/
	scanf("%d\n",&n);//读取出拳总轮次数  需要\n 否则换行符会读取到下一个scanf中，后面的\n同理

	//读取并处理变量
	for (int i = 0; i < n;i++) {
		if (i < n - 1) {
			scanf("%c %c\n", &a, &b);
		}
		else scanf("%c %c", &a, &b);
		/*printf("%c %c ", a, b);
		printf("%d %d\n", a == 'C', b == 'C');*/

		// 统计每个出拳胜利次数
		if ((a == 'C'&&b == 'J') || (a == 'B'&&b == 'C') || (a == 'J'&&b == 'B')) {
			if (a == 'B') {
				a1[0]++;
			}
			if (a == 'C') {
				a1[1]++;
			}
			if (a == 'J') {

				a1[2]++;
			}
			A++;
		}
		if ((b == 'C'&&a == 'J') || (b == 'B'&&a == 'C') || (b == 'J'&&a == 'B')) {
			B++;
			if (b == 'B') {
				b1[0]++;
			}
			if (b == 'C') {
				b1[1]++;
			}
			if (b == 'J') {
				b1[2]++;
			}
		}
		if (a == b) {
			P++;
		}
	}


	//输出结果
	printf("%d %d %d\n", A, P ,B);
	printf("%d %d %d\n", B, P, A);
	if (a1[0] >= a1[1] && a1[0] >= a1[2]) {
		printf("%c ",'B');
	}
	else if(a1[1] >= a1[0] && a1[1] >= a1[2]){
		printf("%c ", 'C');
	}
	else if (a1[2] >= a1[0] && a1[2] >= a1[1]) {
		printf("%c ", 'J');
	}

	if (b1[0] >= b1[1] && b1[0] >= b1[2]) {
		printf("%c", 'B');
	}
	else if (b1[1] >= b1[0] && b1[1] >= b1[2]) {
		printf("%c", 'C');
	}
	else if (b1[2] >= b1[0] && b1[2] >= b1[1]) {
		printf("%c", 'J');
	}
	//scanf("%d", &a);
	system("pause");
	return 0;
}


/*
总结：
1. 对于A2 当A2==0时也不能保证不存在，可能交错相加=0，因此用count来判断是否存在
2. A4输出小数，定义为float

*/