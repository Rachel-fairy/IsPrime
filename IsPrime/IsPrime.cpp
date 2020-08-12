#include<stdio.h>
int main() {
	const int n = 101;
	int IsPrime[n] ;
	int i, j, count = 0;
	for (i = 0;i < n;i++) {
		IsPrime[i] = 1;
	}
	for (i = 2;i < n;i++) {		//从2开始是因为2是最小的数
		if (IsPrime[i]) {
			for (j = 2;j * i < n;j++) {		//从2开始是因为不包括本身
				IsPrime[j * i] = 0;		//去除倍数
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