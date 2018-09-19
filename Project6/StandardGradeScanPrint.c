#include "StandardGradeScanPrint.h"
student std_grd[stdlen];
extern void standard_grade()
{
	int sum[stdlen] = { 0 };
	int average[stdlen] = { 0 };
	char *grade[stdlen] = { 0 }; // 문자열로 받을려고 포인터를 사용.
	int i = 0, j = 0;
	//입력
	printf("다섯명의 이름을 입력해 주시고 그 순서대로 성적을\n옆에 출력되는 글자에 맞게 순서대로 입력해 주세요.\n");
	for (j = 0; j < stdlen; j++) {
		printf("이름:");
		scanf("%s", std_grd[j].name);
	}
	for (j = 0; j < stdlen; j++) {
		printf("학번(최대 10글자):");
		scanf("%d", &std_grd[j].number);
		if (std_grd[j].number < 0 || std_grd[j].number > 9999999999) {
			printf("학번은 0 미만이거나 9999999999 이상일 수 없습니다. 다시 입력해 주세요..\n");
			j--;
		}
	}
	for (j = 0; j < stdlen; j++) {
		printf("국어:");
		scanf("%d", &std_grd[j].korean);
		if (std_grd[j].korean > 100 || std_grd[j].korean < 0) {
			printf("점수는 100점을 초과하거나 0 미만일 수 없습니다. 다시 입력해 주세요.\n");
			j--;
		}
	}
	for (j = 0; j < stdlen; j++) {
		printf("영어:");
		scanf("%d", &std_grd[j].english);
		if (std_grd[j].english > 100 || std_grd[j].english < 0) {
			printf("점수는 100점을 초과하거나 0 미만일 수 없습니다. 다시 입력해 주세요.\n");
			j--;
		}
	}
	for (j = 0; j < stdlen; j++) {
		printf("수학:");
		scanf("%d", &std_grd[j].math);
		if (std_grd[j].math > 100 || std_grd[j].math < 00) {
			printf("점수는 100점을 초과하거나 0 미만일 수 없습니다. 다시 입력해 주세요.\n");
			j--;
		}
	}
	//평균 학점
	for (i = 0; i < stdlen; i++) {
		sum[i] = std_grd[i].korean + std_grd[i].english + std_grd[i].math;
		average[i] = sum[i] / 3;
		if (average[i] >= 95) {
			grade[i] = "A+"; // string은 " " , char는 ' ' 
		}
		else if (average[i] < 95 && average[i] >= 90) {
			grade[i] = "A";
		}
		else if (average[i] < 90 && average[i] >= 85) {
			grade[i] = "B+";
		}
		else if (average[i] < 85 && average[i] >= 80) {
			grade[i] = "B";
		}
		else if (average[i] < 80 && average[i] >= 75) {
			grade[i] = "C+";
		}
		else if (average[i] < 75 && average[i] >= 70) {
			grade[i] = "C";
		}
		else if (average[i] < 70 && average[i] >= 65) {
			grade[i] = "D+";
		}
		else if (average[i] < 65 && average[i] >= 60) {
			grade[i] = "D";
		}
		else if (average[i] < 60) {
			grade[i] = "F";
		}
	}
	//국어 학점
	for (i = 0; i < stdlen; i++) {
		if (std_grd[i].korean >= 95) {
			std_grd[i].korgrd[i] = "A+"; // string은 " " , char는 ' ' 
		}
		else if (std_grd[i].korean < 95 && std_grd[i].korean >= 90) {
			std_grd[i].korgrd[i] = "A";
		}
		else if (std_grd[i].korean < 90 && std_grd[i].korean >= 85) {
			std_grd[i].korgrd[i] = "B+";
		}
		else if (std_grd[i].korean < 85 && std_grd[i].korean >= 80) {
			std_grd[i].korgrd[i] = "B";
		}
		else if (std_grd[i].korean < 80 && std_grd[i].korean >= 75) {
			std_grd[i].korgrd[i] = "C+";
		}
		else if (std_grd[i].korean < 75 && std_grd[i].korean >= 70) {
			std_grd[i].korgrd[i] = "C";
		}
		else if (std_grd[i].korean < 70 && std_grd[i].korean >= 65) {
			std_grd[i].korgrd[i] = "D+";
		}
		else if (std_grd[i].korean < 65 && std_grd[i].korean >= 60) {
			std_grd[i].korgrd[i] = "D";
		}
		else if (std_grd[i].korean < 60) {
			std_grd[i].korgrd[i] = "F";
		}
	}
	//영어 학점
	for (i = 0; i < stdlen; i++) {
		if (std_grd[i].english >= 95) {
			std_grd[i].engrd[i] = "A+"; // string은 " " , char는 ' ' 
		}
		else if (std_grd[i].english < 95 && std_grd[i].english >= 90) {
			std_grd[i].engrd[i] = "A";
		}
		else if (std_grd[i].english < 90 && std_grd[i].english >= 85) {
			std_grd[i].engrd[i] = "B+";
		}
		else if (std_grd[i].english < 85 && std_grd[i].english >= 80) {
			std_grd[i].engrd[i] = "B";
		}
		else if (std_grd[i].english < 80 && std_grd[i].english >= 75) {
			std_grd[i].engrd[i] = "C+";
		}
		else if (std_grd[i].english < 75 && std_grd[i].english >= 70) {
			std_grd[i].engrd[i] = "C";
		}
		else if (std_grd[i].english < 70 && std_grd[i].english >= 65) {
			std_grd[i].engrd[i] = "D+";
		}
		else if (std_grd[i].english < 65 && std_grd[i].english >= 60) {
			std_grd[i].engrd[i] = "D";
		}
		else if (std_grd[i].english < 60) {
			std_grd[i].engrd[i] = "F";
		}
	}
	//수학 학점
	for (i = 0; i < stdlen; i++) {
		if (std_grd[i].math >= 95) {
			std_grd[i].mathgrd[i] = "A+"; // string은 " " , char는 ' ' 
		}
		else if (std_grd[i].math < 95 && std_grd[i].math >= 90) {
			std_grd[i].mathgrd[i] = "A";
		}
		else if (std_grd[i].math < 90 && std_grd[i].math >= 85) {
			std_grd[i].mathgrd[i] = "B+";
		}
		else if (std_grd[i].math < 85 && std_grd[i].math >= 80) {
			std_grd[i].mathgrd[i] = "B";
		}
		else if (std_grd[i].math < 80 && std_grd[i].math >= 75) {
			std_grd[i].mathgrd[i] = "C+";
		}
		else if (std_grd[i].math < 75 && std_grd[i].math >= 70) {
			std_grd[i].mathgrd[i] = "C";
		}
		else if (std_grd[i].math < 70 && std_grd[i].math >= 65) {
			std_grd[i].mathgrd[i] = "D+";
		}
		else if (std_grd[i].math < 65 && std_grd[i].math >= 60) {
			std_grd[i].mathgrd[i] = "D";
		}
		else if (std_grd[i].math < 60) {
			std_grd[i].mathgrd[i] = "F";
		}
	}
	for (i = 0; i < stdlen; i++) {
		printf("이름: %s", std_grd[i].name);
		printf("	학번: %010d\n", std_grd[i].number);
		printf("국어: %d", std_grd[i].korean);
		printf("	국어 학점: %s\n", std_grd[i].korgrd[i]);
		printf("영어: %d", std_grd[i].english);
		printf("	영어 학점: %s\n", std_grd[i].engrd[i]);
		printf("수학: %d", std_grd[i].math);
		printf("	수학 학점: %s\n", std_grd[i].mathgrd[i]);
		printf("총점: %d\n", sum[i]);
		printf("평균: %d", average[i]);
		printf("	평균 학점: %s\n\n", grade[i]); // string으로 값을 출력
	}
}