#include<cstdio> // C++代码推荐使用cstdio 而不是stdio.h
int num[210];
int main() {

	//int num[210];
	int N, M;
	scanf_s("%d %d", &N, &M);
	for (int i = 0; i < N; i++) {
		scanf_s("%d", &num[i]);//将数据读入数组
	}
	int k = M % N;
	for (int i = N-1; i >=0; i--) {//将数组自最后一位依次向前移动
		num[i + k] = num[i];
	}
	for (int i = N; i < (N + k); i++) {//将N位以后的数移回前面来
		num[i - N] = num[i];
	}
	for (int i = 0; i < N; i++) {
		printf("%d", num[i]);//输出数据
		if (i < N - 1) printf(" ");//判断是否到达最后一位，决定是否输出空格
	}



	//getchar();	getchar();

	return 0;
}


/*
总结：
1. 用两个变量来存储甲乙喝酒次数
2. 当玩家胜利时，对方喝酒所以是对方变量++
3. 对于甲乙喝酒次数，官方命名更加合理，failA,failB


*/