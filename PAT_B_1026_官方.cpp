#include<cstdio> // C++代码推荐使用cstdio 而不是stdio.h
int main() {

	// 变量声明
	int c1, c2;
	// 常量声明
	//处理数据
	scanf_s("%d %d",&c1,&c2 );
	int ans = c2 - c1;
	if (ans % 100 >= 50) {
		ans = ans / 100 + 1;
	}
	else {
		ans = ans / 100;
	}

	//输出结果
	printf("%02d:%02d:%02d", ans/3600, ans%3600/60, ans%60);


	//getchar();	getchar();

	return 0;
}


/*
总结：
1. 变量类型与输出格式要对应，int %d  long int %ld,long long %lld
2. 三种实现四舍五入的方法：
		(1):(C2-C1)% 100,如果大于50进位，小于50舍入
		(2);C2 - C1 转化为浮点数，/100，  +0.5再转换为整型
		(3):C2 - C1 转化为浮点数，/100，  (ans*2+1)/2 再转换为浮点数
3. 前导0，print%02d
4  限制位数，print%2d
5  官方答案更简洁但是过于简陋，可读性较差


*/