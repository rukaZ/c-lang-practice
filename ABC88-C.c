#include <stdio.h>

int main(void)
{
	int c[3][3] = { '\0' };
	int i = 0, j = 0;
	int flg = 0;	//フラグをたてる。

	//配列に値を格納していく。
	for (i = 0; i <= 2; i++) {
		for (j = 0; j <= 2; j++) {
			scanf("%d", &c[i][j]);
		}
	}

	//隣同士の行と列それぞれの差を利用し、差が等しいものにはフラグに1ずつ加算していく。
	for (i = 0; i+1 <= 2; i++) {
		for (j = 0; j + 1 <= 2; j++) {
			if (c[i][j] - c[i][j+1]==c[i+1][j]-c[i+1][j+1]) {
				flg = flg + 1;
				if (c[i][j] - c[i + 1][j] == c[i][j + 1] - c[i + 1][j + 1]) {
					flg = flg + 1;
				}
			}
		}
	}

	if (flg == 8) {
		printf("Yes\n");
	}
	else {
		printf("No\n");
	}

	return 0;
}