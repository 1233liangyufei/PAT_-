#include <stdio.h>
//#include <iostream>
#include <string.h>
//#include <string>
//#include <sstream>
//#include <math.h>
int main()
{
	int a[1010] = { 0 };//存储多项式，数组位置保存指数，内容保存系数
	int k, e, count = 0;//k为系数，e为指数，count计数不为零的导数项个数
	while (scanf("%d%d", &k, &e) != EOF) {
		a[e] = k;
	}
	a[0] = 0;//0此项求导直接为0
	for (int i = 1; i <= 1000; i++) {
		a[i - 1] = a[i]*i;
		a[i] = 0;//求导后原系数消失
		if (a[i - 1] != 0)count++;
	}
	if (count == 0)printf("0 0");
	else {
		for (int i = 1000; i >= 0; i--) {
			if (a[i] != 0) {
				printf("%d %d", a[i], i);
				count--;
				if (count != 0)printf(" ");
			}

		}
	}

	return 0;
}
