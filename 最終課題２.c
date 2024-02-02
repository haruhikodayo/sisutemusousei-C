#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int main()
{
	srand(time(0));
	int i = (rand() % 100) + 1;

	if (i == 20) {
		printf("こーたろーの生まれた日にちだよ: ");
	}
	else if (i == 2) {
		printf("あつきの生まれた日にちだよ: ");
	}
	else if (i == 25) {
		printf("はまおかのうまれたの日にちだよ: ");
	}
	else if (i == 28) {
		printf("はるひことひろおの生まれた日にちだよ: ");
	}
	else if (i == 29) {
		printf("ふみあきの生まれた日にちだよ: ");
	}
	else if (i == 39) {
		printf("ありがとうってことだよ: ");
	}
	else if (i == 11) {
		printf("ゆうきの生まれた日にちだよ: ");
	}
	else if (i == 66) {
		printf("岸田首相の年齢だよ: ");
	}
	else if (i == 1) {
		printf("元旦だよ: ");
	}
	else if (i == 31) {
		printf("ハロウィーンだよ: ");
	}
	else if (i == 7) {
		printf("るいくんの生まれた日だよ: ");
	}
	else if (i == 9) {
		printf("りくとさんの生まれた日にちだよ: ");
	}
	else if (i == 14) {
		printf("りくまの生まれた日にちだよ: ");
	}
	else if (i == 21) {
		printf("キキの誕生日だよ: ");
	}
	else if (i == 3) {
		printf("素数だよ: ");
	}
	else if (i == 5) {
		printf("素数だよ: ");
	}
	else if (i == 13) {
		printf("素数だよ: ");
	}
	else if (i == 17) {
		printf("素数だよ: ");
	}
	else if (i == 19) {
		printf("素数だよ: ");
	}
	else if (i == 23) {
		printf("素数だよ: ");
	}
	else if (i == 29) {
		printf("素数だよ: ");
	}
	else if (i == 31) {
		printf("素数だよ: ");
	}
	else if (i == 37) {
		printf("素数だよ: ");
	}
	else if (i == 41) {
		printf("素数だよ: ");
	}
	else if (i == 43) {
		printf("素数だよ: ");
	}
	else if (i == 47) {
		printf("素数だよ: ");
	}
	else if (i == 53) {
		printf("素数だよ: ");
	}
	else if (i == 59) {
		printf("素数だよ: ");
	}
	else if (i == 61) {
		printf("素数だよ: ");
	}
	else if (i == 67) {
		printf("素数だよ: ");
	}
	else if (i == 71) {
		printf("素数だよ: ");
	}
	else if (i == 73) {
		printf("素数だよ: ");
	}
	
	else if (i == 83) {
		printf("素数だよ: ");
	}
	else if (i == 89) {
		printf("素数だよ: ");
	}
	else if (i == 79) {
		printf("素数だよ: ");
		}
	else if (i == 97) {
			printf("素数だよ: ");
			}

	else {
		printf("自分で考えな、まあ、素数ではないよ: ");
	}
	int a, b, c, d, e;
	printf("数字をいれてね: ");
	scanf_s("%d", &a);

	if (i < a) {
		printf("大きい！, ");
		printf("数字をいれてね: ");
		scanf_s("%d", &b);
		if (i < b) {
			printf("大きいってば！, ");

			printf("数字をいれてね: ");
			scanf_s("%d", &c);
			if (i < c) {
				printf("大きいってば！次が最後だ！, ");
				printf("数字をいれてね: ");
				scanf_s("%d", &d);
				if (i < d) {
					printf("大きい、見損なったよ, ");
					printf("答えは", i);
					printf("%d", i);
				}
				else if (i > d) {
					printf("今度は小さい、見損なったよ, ");
					printf("答えは", i);
					printf("%d", i);
				}
				else {
					printf("成功, ");
					printf("答えは", i);
					printf("%d", i);
				}
			}
		}

		else if (i > b) {
			printf("今度は小さい, ");
			printf("数字をいれてね: ");
			scanf_s("%d", &c);
			if (i < c) {
				printf("今度は大きい！次で最後だ, ");
				printf("数字をいれてね: ");
				scanf_s("%d", &d);
				if (i < d) {
					printf("大きい、見損なったよ, ");
					printf("答えは", i);
					printf("%d", i);
				}
				else if (i > d) {
					printf("小さい、見損なったよ, ");
					printf("答えは", i);
					printf("%d", i);
				}
				else {
					printf("成功, ");
					printf("答えは", i);
					printf("%d", i);
				}
			}
			else if (i > c) {
				printf("また小さい！次で最後だ, ");
				printf("数字をいれてね: ");
				scanf_s("%d", &d);
				if (i < d) {
					printf("大きい、見損なったよ, ");
					printf("答えは", i);
					printf("%d", i);
				}
				else if (i > d) {
					printf("小さい、見損なったよ, ");
					printf("答えは", i);
					printf("%d", i);
				}
				else {
					printf("成功, ");
					printf("答えは", i);
					printf("%d", i);
				}
			}
			else {
				printf("成功, ");
				printf("答えは", i);
				printf("%d", i);
			}
		}

	}

		
	


	


	else if (i > a) {
		printf("小さい, ");
		printf("数字をいれてね: ");
		scanf_s("%d", &b);
		if (i < b) {
			printf("大きい！！, ");

			printf("数字をいれてね: ");
			scanf_s("%d", &c);
			if (i < c) {
				printf("大きいってば！次が最後だ！, ");
				printf("数字をいれてね: ");
				scanf_s("%d", &d);
				if (i < d) {
					printf("大きい、見損なったよ, ");
					printf("答えは", i);
					printf("%d", i);
				}
				else if (i > d) {
					printf("小さい、見損なったよ, ");
					printf("答えは", i);
					printf("%d", i);
				}
				else {
					printf("成功, ");
				}
			}
		}

			else if (i > b) {
				printf("また小さい, ");
				printf("数字をいれてね: ");
				scanf_s("%d", &c);
				if (i < c) {
					printf("大きい！次が最後だ！, ");
					printf("数字をいれてね: ");
					scanf_s("%d", &d);
					if (i < d) {
						printf("大きい、見損なったよ, ");
						printf("答えは", i);
						printf("%d", i);
					}
					else if (i > d) {
						printf("小さい、見損なったよ, ");
						printf("答えは", i);
						printf("%d", i);
					}
					else {
						printf("成功, ");
					}
				}
				else if (i > c) {
					printf("またまた小さい！次で最後だ, ");
					printf("数字をいれてね: ");
					scanf_s("%d", &d);
					if (i < d) {
						printf("大きい、見損なったよ, ");
						printf("答えは", i);
						printf("%d", i);
					}
					else if (i > d) {
						printf("小さい、見損なったよ, ");
						printf("答えは", i);
						printf("%d", i);
					}
					else {
						printf("成功, ");
						printf("答えは", i);
						printf("%d", i);
					}
				}
			}
			else {
			printf("成功, ");
			printf("答えは", i);
			printf("%d", i);
		}

		}
		else {
			printf("すげえや、天才だよ, ");
			printf("答えは", i);
			printf("%d", i);
		}
		return 0;
	}
