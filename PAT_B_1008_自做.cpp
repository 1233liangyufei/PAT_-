#include<cstdio> // C++�����Ƽ�ʹ��cstdio ������stdio.h
int num[210];
int main() {

	//int num[210];
	int N, M;
	scanf_s("%d %d", &N, &M);
	for (int i = 0; i < N; i++) {
		scanf_s("%d", &num[i]);//�����ݶ�������
	}
	int k = M % N;
	for (int i = N-1; i >=0; i--) {//�����������һλ������ǰ�ƶ�
		num[i + k] = num[i];
	}
	for (int i = N; i < (N + k); i++) {//��Nλ�Ժ�����ƻ�ǰ����
		num[i - N] = num[i];
	}
	for (int i = 0; i < N; i++) {
		printf("%d", num[i]);//�������
		if (i < N - 1) printf(" ");//�ж��Ƿ񵽴����һλ�������Ƿ�����ո�
	}



	//getchar();	getchar();

	return 0;
}


/*
�ܽ᣺
1. �������������洢���ҺȾƴ���
2. �����ʤ��ʱ���Է��Ⱦ������ǶԷ�����++
3. ���ڼ��ҺȾƴ������ٷ��������Ӻ���failA,failB


*/