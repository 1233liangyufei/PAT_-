#include<cstdio> // C++�����Ƽ�ʹ��cstdio ������stdio.h
int main() {
	// ��������
	long long a, b, da, db;
	long long pa = 0, pb = 0;
	// A,B��¼ԭʼ����,Da,Db��¼��Ҫ��ȡ�����֣�Pa,PbΪ��ȡ�������,out ΪҪ����Ľ��

	//��ȡ����
	scanf_s("%lld %lld %lld %lld", &a, &da, &b, &db);
	while (a != 0) {//����A,���Pa��ÿ��ȡA���һλ������λ������Pa���ʱ�����Pa��
		if (a % 10 == da) { //�ж�ĩλ�Ƿ�Ϊ����
			pa = pa * 10 + da;  //��ĩλ��������
		}
		a = a / 10;             //ɾȥ���һλ
	}
	//printf("%d", Pa);//���Դ���,����Pa�Ľ��
	while (b!= 0) {//����A,���Pa
		if (b % 10 == db) {
			pb = pb * 10 + db;
		}
		b = b / 10;
	}

	//getchar();
	//getchar();

	//���㲢������
	//out = Pa + Pb;

	printf("%d", pa + pb);



	getchar();
	getchar();
	return 0;
}


/*
�ܽ᣺
1. ���δ���������ٷ���˼·���ƣ����Ǵ𰸱�������������ȷ��
2.����10��19�μ�������Ӧ��ʹ��long long ��
3.����Ӧʹ��Сд������ʹ�ô�д������pa+pb�Ľ������ֱ�����������ר����һ�������洢


*/