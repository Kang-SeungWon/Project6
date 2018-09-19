#include "StandardGradeScanPrint.h"
student std_grd[stdlen];
extern void standard_grade()
{
	int sum[stdlen] = { 0 };
	int average[stdlen] = { 0 };
	char *grade[stdlen] = { 0 }; // ���ڿ��� �������� �����͸� ���.
	int i = 0, j = 0;
	//�Է�
	printf("�ټ����� �̸��� �Է��� �ֽð� �� ������� ������\n���� ��µǴ� ���ڿ� �°� ������� �Է��� �ּ���.\n");
	for (j = 0; j < stdlen; j++) {
		printf("�̸�:");
		scanf("%s", std_grd[j].name);
	}
	for (j = 0; j < stdlen; j++) {
		printf("�й�(�ִ� 10����):");
		scanf("%d", &std_grd[j].number);
		if (std_grd[j].number < 0 || std_grd[j].number > 9999999999) {
			printf("�й��� 0 �̸��̰ų� 9999999999 �̻��� �� �����ϴ�. �ٽ� �Է��� �ּ���..\n");
			j--;
		}
	}
	for (j = 0; j < stdlen; j++) {
		printf("����:");
		scanf("%d", &std_grd[j].korean);
		if (std_grd[j].korean > 100 || std_grd[j].korean < 0) {
			printf("������ 100���� �ʰ��ϰų� 0 �̸��� �� �����ϴ�. �ٽ� �Է��� �ּ���.\n");
			j--;
		}
	}
	for (j = 0; j < stdlen; j++) {
		printf("����:");
		scanf("%d", &std_grd[j].english);
		if (std_grd[j].english > 100 || std_grd[j].english < 0) {
			printf("������ 100���� �ʰ��ϰų� 0 �̸��� �� �����ϴ�. �ٽ� �Է��� �ּ���.\n");
			j--;
		}
	}
	for (j = 0; j < stdlen; j++) {
		printf("����:");
		scanf("%d", &std_grd[j].math);
		if (std_grd[j].math > 100 || std_grd[j].math < 00) {
			printf("������ 100���� �ʰ��ϰų� 0 �̸��� �� �����ϴ�. �ٽ� �Է��� �ּ���.\n");
			j--;
		}
	}
	//��� ����
	for (i = 0; i < stdlen; i++) {
		sum[i] = std_grd[i].korean + std_grd[i].english + std_grd[i].math;
		average[i] = sum[i] / 3;
		if (average[i] >= 95) {
			grade[i] = "A+"; // string�� " " , char�� ' ' 
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
	//���� ����
	for (i = 0; i < stdlen; i++) {
		if (std_grd[i].korean >= 95) {
			std_grd[i].korgrd[i] = "A+"; // string�� " " , char�� ' ' 
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
	//���� ����
	for (i = 0; i < stdlen; i++) {
		if (std_grd[i].english >= 95) {
			std_grd[i].engrd[i] = "A+"; // string�� " " , char�� ' ' 
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
	//���� ����
	for (i = 0; i < stdlen; i++) {
		if (std_grd[i].math >= 95) {
			std_grd[i].mathgrd[i] = "A+"; // string�� " " , char�� ' ' 
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
		printf("�̸�: %s", std_grd[i].name);
		printf("	�й�: %010d\n", std_grd[i].number);
		printf("����: %d", std_grd[i].korean);
		printf("	���� ����: %s\n", std_grd[i].korgrd[i]);
		printf("����: %d", std_grd[i].english);
		printf("	���� ����: %s\n", std_grd[i].engrd[i]);
		printf("����: %d", std_grd[i].math);
		printf("	���� ����: %s\n", std_grd[i].mathgrd[i]);
		printf("����: %d\n", sum[i]);
		printf("���: %d", average[i]);
		printf("	��� ����: %s\n\n", grade[i]); // string���� ���� ���
	}
}