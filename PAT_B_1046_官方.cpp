#include<cstdio> // C++�����Ƽ�ʹ��cstdio ������stdio.h
int main() {

	// ��������
	int n, failA = 0, failB = 0;
	scanf_s("%d", &n);
	while (n--) {
		int a1, a2, b1, b2;
		scanf_s("%d %d %d %d", &a1, &a2, &b1, &b2);
		if ((a2 == a1 + b1 && b2 != a1 + b1)) {//�׻�==�׺�+�Һ� && ��û��Ӯ
			failB++;  //��ʤ�����ҺȾ�
		}
		if ((b2 == a1 + b1 && a2 != a1 + b1)) {//�һ�==�Һ�+�׺� && ��û��Ӯ
			failA++;  //��ʤ�����׺Ⱦ�
		}
	}
	//������
	printf("%d %d", failA,failB);


	getchar();	getchar();

	return 0;
}


/*
�ܽ᣺
1. �������������洢���ҺȾƴ���
2. �����ʤ��ʱ���Է��Ⱦ������ǶԷ�����++
3. ���ڼ��ҺȾƴ������ٷ��������Ӻ���failA,failB


*/