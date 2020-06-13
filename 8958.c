#include<stdio.h>

int main(void) {
	char arr[81] = {0, };
	int num;
	int i, j; 
	int cnt = 0;
	int sum, score = 1;
	scanf("%d", &num);

	while (cnt < num) {
		scanf("%c", arr[81]);
		if (arr[0] != 'O') {
			print("0");
			break;
		}
		else {
			for (i = 1; i < 80; i++) {
				if (arr[i] == 'O') {
					score++;
					sum += score;

				}
			}
		}
	}


	for (i = 0; i < num; i++) {

	}




}