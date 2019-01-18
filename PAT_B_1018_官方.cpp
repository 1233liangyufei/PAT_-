#include<cstdio> // C++代码推荐使用 cstdio 而不是stdio.h
#include <stdlib.h> 
/*
思路：
1. 读取玩家出拳字符
2. 比较二者的内容，判断甲乙谁获得胜利
3. 用一个数组保存锤头剪刀布的胜利次数
*/
int change(char c){
	if (c == 'B') return 0;
	if (c == 'C') return 1;
	if (c == 'J') return 2;
}
int main() {
	char mp[3] = { 'B','C','J' };  //一个字符数组用来保存出拳
	int n;
	scanf("%d", &n);
	int times_A[3] = { 0 }, times_B[3] = { 0 };  //分别保存甲，乙，胜平负数量
	char c1, c2; //保存出拳字母
	int k1, k2; //保存出拳字母转化的数字
	int hand_A[3] = { 0 }, hand_B[3] = { 0 };
	while (n--) {
		getchar();//吸收输入完n后的换行键
		scanf("%c %c", &c1, &c2);
		k1 = change(c1);//转化为对应数字
		k2 = change(c2);
		if ((k1 + 1) % 3 == k2){ //根据规律 0 1 2 对应布，锤子，剪刀，0胜1，1胜2，2胜0，所以 (k1+3) % 3 ==k2 k1胜利，下同理
			times_A[0]++; //甲胜场数++
			times_B[2]++; //乙负场数++
			hand_A[k1]++;  //甲靠k1对应出拳胜利局数++
		}
		else if ((k2 + 1) % 3 == k1) {
			times_A[2]++; //甲负场数++
			times_B[0]++; //乙胜场数++
			hand_B[k2]++;  //乙靠k2对应出拳胜利局数++
		}
		else if (k1 ==k2) {
			times_A[1]++; //甲平场数++
			times_B[1]++; //乙平场数++
		}
	}
	printf("%d %d %d\n", times_A[0], times_A[1], times_A[2]);
	printf("%d %d %d\n", times_B[0], times_B[1], times_B[2]);
	int id1 = 0, id2 = 0;
	for (int i = 0; i < 3; i++) {
		if (hand_A[i] > hand_A[id1]) id1 = i;
		if (hand_B[i] > hand_B[id2]) id2 = i;
	}//计算获得最多胜利的出拳手法，相同则输出字典序最小的
	printf("%c %c\n", mp[id1], mp[id2]);

   

	//scanf("%d", &a);
	system("pause");
	return 0;
}


/*
总结：
1. 对于A2 当A2==0时也不能保证不存在，可能交错相加=0，因此用count来判断是否存在
2. A4输出小数，定义为float

*/