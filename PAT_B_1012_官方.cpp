#include<cstdio> // C++�����Ƽ�ʹ�� cstdio ������stdio.h
/*
˼·��
1. ��ȡ������������n
2. A1�ܱ�5������������Ϊ�ܱ�10�������� x%10 == 0
3. A2 Ϊ x%5==1 ���� �������,ͨ��һ������sign ÿ�ε���sign*=-1�����Ʒ���,sum1�����ܺ�
4  A3 ��һ��count����ͳ��x%5==2
5. A4 ��sum2ͳ�����ֵĺͣ�count2ͳ��������averageͳ��ƽ����
6. A5 max�洢������

1. ������count[5]��Ÿ�������ֵΪ0
2. ��ans[5]���ֵ����ֵΪ0*/
int main() {


	int count[5] = { 0 };
	int ans[5] = { 0 };
	int n, temp;
	scanf("%d", &n);
	while (n--) {
		scanf("%d", &temp);
		if (temp % 5 == 0) {
			if (temp % 2 == 0) {
				ans[0] += temp;
				count[0]++;
			}
		}
		else if (temp % 5 == 1) {
			if (count[1] % 2 == 0) {
				ans[1] += temp;
			}
			else {
				ans[1] -= temp;
			}
			count[1]++;
		}
		else if (temp % 5 == 2) {
			count[2]++;
		}
		else if (temp % 5 == 3) {
			ans[3] += temp;
			count[3]++;
		}
		else if (temp % 5 == 4) {
			if (temp > ans[4]) {
				ans[4] = temp;
			}
			count[4]++;
		}
	}
	if (count[0] == 0) {
		printf("N ");
	}
	else
		printf("%d ", ans[0]);

	if (count[1] == 0) {
		printf("N ");
	}
	else
		printf("%d ", ans[1]);

	if (count[2] == 0) {
		printf("N ");
	}
	else
		printf("%d ", count[2]);

	if (count[3] == 0) {
		printf("N ");
	}
	else
		printf("%.1f ", float(ans[3]) / count[3]);

	if (count[4] == 0) {
		printf("N");
	}
	else
		printf("%d", ans[4]);

	getchar();	getchar();

	return 0;
}


/*
�ܽ᣺
1. ����A2 ��A2==0ʱҲ���ܱ�֤�����ڣ����ܽ������=0�������count���ж��Ƿ����
2. A4���С��������Ϊfloat

*/