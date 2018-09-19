#include"haderfile.h"

void draw(int a);
void standard_grade();
void Sign_in();
void UserRegister(int chkP);

int main() {
	int chk_sign = 0;
	int chk_professr = 0;

	while (1) {
	main:
		chk_pf = 0;
		printf("로그인은 1, 회원가입은 2, 종료는 3");
		scanf("%d", &chk_sign);
		if (chk_sign == 1) {
			draw(1);
			printf("------------------------------------\n");
			printf("              로그인\n");
			printf("------------------------------------\n");
			Sign_in();
			if (chk_pf == 1)
				standard_grade();
			else if (chk_pf == 0) {};
		}
		else if (chk_sign == 2) {
			while (1) {
				printf("교수용 가입은 1, 학생용 가입은 2, 종료는 3, 메인화면은 4");
				scanf("%d", &chk_professr);
				if (chk_professr == 1) {
					UserRegister(chk_professr);
				}
				else if (chk_professr == 2) {
					UserRegister(chk_professr);
				}
				else if (chk_professr == 3) {
					return 0;
				}
				else if (chk_professr == 4) 
					goto main;
			}
		}
		else if (chk_sign == 3) {
			return 0;
		}
	}
}
