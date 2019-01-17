#include<cstdio> // C++代码推荐使用cstdio 而不是stdio.h
int main() {
	// 变量声明
	long long a, b, da, db;
	long long pa = 0, pb = 0;
	// A,B记录原始数字,Da,Db记录需要提取的数字，Pa,Pb为提取后的数字,out 为要计算的结果

	//读取数据
	scanf_s("%lld %lld %lld %lld", &a, &da, &b, &db);
	while (a != 0) {//处理A,求得Pa，每次取A最后一位，当该位数字与Pa相等时变加入Pa中
		if (a % 10 == da) { //判断末位是否为所求
			pa = pa * 10 + da;  //将末位加入其中
		}
		a = a / 10;             //删去最后一位
	}
	//printf("%d", Pa);//测试代码,测试Pa的结果
	while (b!= 0) {//处理A,求得Pa
		if (b % 10 == db) {
			pb = pb * 10 + db;
		}
		b = b / 10;
	}

	//getchar();
	//getchar();

	//计算并输出结果
	//out = Pa + Pb;

	printf("%d", pa + pb);



	getchar();
	getchar();
	return 0;
}


/*
总结：
1. 本次答题自做与官方答案思路类似，但是答案变量声明更加正确，
2.对于10的19次级别数字应该使用long long 型
3.变量应使用小写，常量使用大写，对于pa+pb的结果可以直接输出，不必专门用一个变量存储


*/