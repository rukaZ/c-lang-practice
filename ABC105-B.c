#include <stdio.h>

int main(void)
{
	int N,flg=0;	//フラグ作成
	int cake[27] = {'\0'};
	int donut[16] = {'\0'};

	scanf("%d", &N);

	//cakeには4の倍数を、donutには7の倍数をいれる。各々の値同士でNと等しくなるかを見る。
	for (int i = 0; 4*i <= N; i++) {
		cake[i] = 4 * i;
		for (int j = 0; 7 * j <= N; j++) {
			donut[j] = 7 * j;
			if (cake[i] + donut[j] == N) {			
				flg = 1;	//Nと等しくなった時点でフラグに値が入りfor文から抜ける。
				break;
			}
		}
		if (flg == 1) {
			break;

		}
	}

	if (flg == 0) {
		printf("No\n");
	}
	else {
		printf("Yes\n");
	}

	return 0;
}