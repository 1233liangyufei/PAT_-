#include<cstdio> // C++代码推荐使用cstdio 而不是stdio.h
int main() {

	// 变量声明
	int n, failA = 0, failB = 0;
	scanf_s("%d", &n);
	while (n--) {
		int a1, a2, b1, b2;
		scanf_s("%d %d %d %d", &a1, &a2, &b1, &b2);
		if ((a2 == a1 + b1 && b2 != a1 + b1)) {//甲划==甲喊+乙喊 && 乙没有赢
			failB++;  //甲胜利，乙喝酒
		}
		if ((b2 == a1 + b1 && a2 != a1 + b1)) {//乙划==乙喊+甲喊 && 甲没有赢
			failA++;  //乙胜利，甲喝酒
		}
	}
	//输出结果
	printf("%d %d", failA,failB);


	getchar();	getchar();

	return 0;
}


/*
总结：
1. 用两个变量来存储甲乙喝酒次数
2. 当玩家胜利时，对方喝酒所以是对方变量++
3. 对于甲乙喝酒次数，官方命名更加合理，failA,failB


*/