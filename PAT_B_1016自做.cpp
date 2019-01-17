#include<cstdio> // C++代码推荐使用cstdio 而不是stdio.h
int main() {
	// 变量声明
	int A, Da, B, Db, out, Pa=0, Pb=0;
	// A,B记录原始数字,Da,Db记录需要提取的数字，Pa,Pb为提取后的数字,out 为要计算的结果

	//读取数据
	scanf_s("%d %d %d %d", &A, &Da, &B, &Db);
	while (A != 0) {//处理A,求得Pa，每次取A最后一位，当该位数字与Pa相等时变加入Pa中
		if (A % 10 == Da) { //判断末位是否为所求
			Pa = Pa * 10 + Da;  //将末位加入其中
		}
		A = A / 10;             //删去最后一位
	}
	//printf("%d", Pa);//测试代码,测试Pa的结果
	while (B != 0) {//处理A,求得Pa
		if (B % 10 == Db) {
			Pb = Pb * 10 + Db;
		}
		B = B / 10;
	}

	//getchar();
	//getchar();

	//计算并输出结果
	out = Pa + Pb;

	printf("%d", out);




	return 0;
}