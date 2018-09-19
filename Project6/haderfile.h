#pragma once
#include <string.h>
#include <stdio.h>
#include <ctype.h>
#include <windows.h>
/*#include <mysql.h>

#define DB_HOST "127.0.0.1"
#define DB_USER "root"
#define DB_PASS ""
#define DB_NAME "Cdstebase"
#define CHOP(x) x[strlen(x) - 1] = ' '*/
#define stdlen 5
#define MAX_USER_DATA  100 
typedef struct Student {
	char name[11];
	int number;
	int korean;
	int english;
	int math;
	char *korgrd[3];
	char *engrd[3];
	char *mathgrd[3];
}student;
typedef struct UserInformation {
	char id[16];
	char password[16];
	char name[16];
	char phone[24];
	char chk_professr[3];
} UI;

int chk_pf = 0;