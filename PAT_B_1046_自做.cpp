#include<cstdio> // C++代码推荐使用cstdio 而不是stdio.h
int main() {

	// 变量声明
	int N,a1,a2,b1,b2,i=0,j=0;/*T记录总轮数
							  a1记录甲喊
							  a2记录甲划拳数量
							  b1记录乙喊
							  b2记录乙划拳数量
							  i记录甲喝酒次数
							  j记录乙喝酒次数*/
	//输入数据
	scanf_s("%d", &N);
	while (N--) {
		scanf_s("%d %d %d %d", &a1, &a2, &b1, &b2);
		if ((a2 == a1 + b1 && b2 != a2)) {//甲划==甲喊+乙喊 && 乙没有赢
			j++;  //甲胜利，乙喝酒
		}
		if((b2 == a1 + b1 && b2 != a2)) {//乙划==乙喊+甲喊 && 甲没有赢
			i++;  //乙胜利，甲喝酒
		}
	}
	
	//输出结果
	printf("%d %d",i,j);


	getchar();	getchar();

	return 0;
}


/*
总结：
1. 用两个变量来存储甲乙喝酒次数
2. 当玩家胜利时，对方喝酒所以是对方变量++


*/