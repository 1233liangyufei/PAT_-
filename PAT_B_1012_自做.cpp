#include<cstdio> // C++�����Ƽ�ʹ�� cstdio ������stdio.h
/*
˼·��
1. ��ȡ������������n
2. A1�ܱ�5������������Ϊ�ܱ�10�������� x%10 == 0
3. A2 Ϊ x%5==1 ���� �������,ͨ��һ������sign ÿ�ε���sign*=-1�����Ʒ���,sum1�����ܺ�
4  A3 ��һ��count����ͳ��x%5==2
5. A4 ��sum2ͳ�����ֵĺͣ�count2ͳ��������averageͳ��ƽ����
6. A5 max�洢������*/
int main() {
	int n, x, A1=0, A2=0, A3=0, A5=0, sign = 1, sum1 = 0,sum2=0,count=0,count2 = 0, average;
	float A4= 0;
	scanf_s("%d", &n);
	while(n--){
		scanf_s("%d", &x);
		int mod = x % 5;
		/*if (x % 10 == 0) {
			A1++;
		}
		*/
		//д��2��
		if(mod == 0){
			if(x % 2 == 0) {
				A1+=x;
			}
		}
		else if(mod == 1) {
			A2 += (sign*x);
			sign = -sign;
			count++;//count��¼����������ж��Ƿ����ִ���
		}
		else if (mod == 2) {
			A3++;//A3��¼ģΪ2���ָ���
		}
		else if (mod == 3) {
			sum2 += x;//��¼�����ܺ�
			count2++;//��¼���ָ���
		}
		else if (mod == 4) {
			if (A5 < x)  A5 = x;//��¼���ֵ
		}

	}
	if(count2!=0)
	A4 = float(sum2) / count2;//����ƽ����
	
	if (A1 != 0) {
		printf("%d ", A1);
	}
	else printf("N ");
	if (count!=0) {
		printf("%d ", A2);
	}
	else printf("N ");
	if (A3 != 0) {
		printf("%d ", A3);
	}
	else {
		printf("N ");
	}

	if (A4 != 0) {
		printf("%.1f ", A4);
	}
	else printf("N ");
	if (A5 != 0) {
		printf("%d", A5);
	}
	else printf("N");
	


	getchar();	getchar();

	return 0;
}


/*
�ܽ᣺
1. ����A2 ��A2==0ʱҲ���ܱ�֤�����ڣ����ܽ������=0�������count���ж��Ƿ����
2. A4���С��������Ϊfloat

*/