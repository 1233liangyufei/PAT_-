#include<cstdio> // C++�����Ƽ�ʹ��cstdio ������stdio.h
int main() {
	// ��������
	int A, Da, B, Db, out, Pa=0, Pb=0;
	// A,B��¼ԭʼ����,Da,Db��¼��Ҫ��ȡ�����֣�Pa,PbΪ��ȡ�������,out ΪҪ����Ľ��

	//��ȡ����
	scanf_s("%d %d %d %d", &A, &Da, &B, &Db);
	while (A != 0) {//����A,���Pa��ÿ��ȡA���һλ������λ������Pa���ʱ�����Pa��
		if (A % 10 == Da) { //�ж�ĩλ�Ƿ�Ϊ����
			Pa = Pa * 10 + Da;  //��ĩλ��������
		}
		A = A / 10;             //ɾȥ���һλ
	}
	//printf("%d", Pa);//���Դ���,����Pa�Ľ��
	while (B != 0) {//����A,���Pa
		if (B % 10 == Db) {
			Pb = Pb * 10 + Db;
		}
		B = B / 10;
	}

	//getchar();
	//getchar();

	//���㲢������
	out = Pa + Pb;

	printf("%d", out);




	return 0;
}