#include<cstdio> // C++�����Ƽ�ʹ�� cstdio ������stdio.h
#include <stdlib.h> 
/*
˼·��
1. ��ȡ��ҳ�ȭ�ַ�
2. �Ƚ϶��ߵ����ݣ��жϼ���˭���ʤ��
3. ��һ�����鱣�洸ͷ��������ʤ������
*/
int change(char c){
	if (c == 'B') return 0;
	if (c == 'C') return 1;
	if (c == 'J') return 2;
}
int main() {
	char mp[3] = { 'B','C','J' };  //һ���ַ��������������ȭ
	int n;
	scanf("%d", &n);
	int times_A[3] = { 0 }, times_B[3] = { 0 };  //�ֱ𱣴�ף��ң�ʤƽ������
	char c1, c2; //�����ȭ��ĸ
	int k1, k2; //�����ȭ��ĸת��������
	int hand_A[3] = { 0 }, hand_B[3] = { 0 };
	while (n--) {
		getchar();//����������n��Ļ��м�
		scanf("%c %c", &c1, &c2);
		k1 = change(c1);//ת��Ϊ��Ӧ����
		k2 = change(c2);
		if ((k1 + 1) % 3 == k2){ //���ݹ��� 0 1 2 ��Ӧ�������ӣ�������0ʤ1��1ʤ2��2ʤ0������ (k1+3) % 3 ==k2 k1ʤ������ͬ��
			times_A[0]++; //��ʤ����++
			times_B[2]++; //�Ҹ�����++
			hand_A[k1]++;  //�׿�k1��Ӧ��ȭʤ������++
		}
		else if ((k2 + 1) % 3 == k1) {
			times_A[2]++; //�׸�����++
			times_B[0]++; //��ʤ����++
			hand_B[k2]++;  //�ҿ�k2��Ӧ��ȭʤ������++
		}
		else if (k1 ==k2) {
			times_A[1]++; //��ƽ����++
			times_B[1]++; //��ƽ����++
		}
	}
	printf("%d %d %d\n", times_A[0], times_A[1], times_A[2]);
	printf("%d %d %d\n", times_B[0], times_B[1], times_B[2]);
	int id1 = 0, id2 = 0;
	for (int i = 0; i < 3; i++) {
		if (hand_A[i] > hand_A[id1]) id1 = i;
		if (hand_B[i] > hand_B[id2]) id2 = i;
	}//���������ʤ���ĳ�ȭ�ַ�����ͬ������ֵ�����С��
	printf("%c %c\n", mp[id1], mp[id2]);

   

	//scanf("%d", &a);
	system("pause");
	return 0;
}


/*
�ܽ᣺
1. ����A2 ��A2==0ʱҲ���ܱ�֤�����ڣ����ܽ������=0�������count���ж��Ƿ����
2. A4���С��������Ϊfloat

*/