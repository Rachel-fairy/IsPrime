#include<stdio.h>
int main() {
	const int n = 101;
	int IsPrime[n] ;
	int i, j, count = 0;
	for (i = 0;i < n;i++) {
		IsPrime[i] = 1;
	}
	for (i = 2;i < n;i++) {		//��2��ʼ����Ϊ2����С����
		if (IsPrime[i]) {
			for (j = 2;j * i < n;j++) {		//��2��ʼ����Ϊ����������
				IsPrime[j * i] = 0;		//ȥ������
			}
		}
	}
	for (i = 2;i < n;i++) {
		if (IsPrime[i]) {
			printf("%d\t", i);
			count++;
			if (count==5) {
				printf("\n");
				count = 0;
			}
		}
	}
	return 0;
}