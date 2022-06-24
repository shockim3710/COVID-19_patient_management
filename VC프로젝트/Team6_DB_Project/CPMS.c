
/* Result Sets Interface */
#ifndef SQL_CRSR
#  define SQL_CRSR
  struct sql_cursor
  {
    unsigned int curocn;
    void *ptr1;
    void *ptr2;
    unsigned int magic;
  };
  typedef struct sql_cursor sql_cursor;
  typedef struct sql_cursor SQL_CURSOR;
#endif /* SQL_CRSR */

/* Thread Safety */
typedef void * sql_context;
typedef void * SQL_CONTEXT;

/* Object support */
struct sqltvn
{
  unsigned char *tvnvsn; 
  unsigned short tvnvsnl; 
  unsigned char *tvnnm;
  unsigned short tvnnml; 
  unsigned char *tvnsnm;
  unsigned short tvnsnml;
};
typedef struct sqltvn sqltvn;

struct sqladts
{
  unsigned int adtvsn; 
  unsigned short adtmode; 
  unsigned short adtnum;  
  sqltvn adttvn[1];       
};
typedef struct sqladts sqladts;

static struct sqladts sqladt = {
  1,1,0,
};

/* Binding to PL/SQL Records */
struct sqltdss
{
  unsigned int tdsvsn; 
  unsigned short tdsnum; 
  unsigned char *tdsval[1]; 
};
typedef struct sqltdss sqltdss;
static struct sqltdss sqltds =
{
  1,
  0,
};

/* File name & Package Name */
struct sqlcxp
{
  unsigned short fillen;
           char  filnam[8];
};
static const struct sqlcxp sqlfpn =
{
    7,
    "CPMS.pc"
};


static unsigned int sqlctx = 9155;


static struct sqlexd {
   unsigned int   sqlvsn;
   unsigned int   arrsiz;
   unsigned int   iters;
   unsigned int   offset;
   unsigned short selerr;
   unsigned short sqlety;
   unsigned int   occurs;
      const short *cud;
   unsigned char  *sqlest;
      const char  *stmt;
   sqladts *sqladtp;
   sqltdss *sqltdsp;
            void  **sqphsv;
   unsigned int   *sqphsl;
            int   *sqphss;
            void  **sqpind;
            int   *sqpins;
   unsigned int   *sqparm;
   unsigned int   **sqparc;
   unsigned short  *sqpadto;
   unsigned short  *sqptdso;
   unsigned int   sqlcmax;
   unsigned int   sqlcmin;
   unsigned int   sqlcincr;
   unsigned int   sqlctimeout;
   unsigned int   sqlcnowait;
              int   sqfoff;
   unsigned int   sqcmod;
   unsigned int   sqfmod;
   unsigned int   sqlpfmem;
            void  *sqhstv[12];
   unsigned int   sqhstl[12];
            int   sqhsts[12];
            void  *sqindv[12];
            int   sqinds[12];
   unsigned int   sqharm[12];
   unsigned int   *sqharc[12];
   unsigned short  sqadto[12];
   unsigned short  sqtdso[12];
} sqlstm = {13,12};

/* SQLLIB Prototypes */
extern void sqlcxt (void **, unsigned int *,
                    struct sqlexd *, const struct sqlcxp *);
extern void sqlcx2t(void **, unsigned int *,
                    struct sqlexd *, const struct sqlcxp *);
extern void sqlbuft(void **, char *);
extern void sqlgs2t(void **, char *);
extern void sqlorat(void **, unsigned int *, void *);

/* Forms Interface */
static const int IAPSUCC = 0;
static const int IAPFAIL = 1403;
static const int IAPFTL  = 535;
extern void sqliem(unsigned char *, signed int *);

typedef struct { unsigned short len; unsigned char arr[1]; } VARCHAR;
typedef struct { unsigned short len; unsigned char arr[1]; } varchar;

/* cud (compilation unit data) array */
static const short sqlcud0[] =
{13,4130,1,0,0,
5,0,0,1,0,0,30,248,0,0,0,0,0,1,0,
20,0,0,0,0,0,27,261,0,0,4,4,0,1,0,1,9,0,0,1,9,0,0,1,10,0,0,1,10,0,0,
51,0,0,3,106,0,4,303,0,0,4,2,0,1,0,2,9,0,0,2,97,0,0,1,9,0,0,1,97,0,0,
82,0,0,4,128,0,4,322,0,0,5,2,0,1,0,2,9,0,0,2,97,0,0,2,9,0,0,1,9,0,0,1,97,0,0,
117,0,0,5,122,0,4,340,0,0,5,2,0,1,0,2,9,0,0,2,97,0,0,2,9,0,0,1,9,0,0,1,97,0,0,
152,0,0,6,72,0,4,413,0,0,2,1,0,1,0,2,9,0,0,1,97,0,0,
175,0,0,7,128,0,3,421,0,0,3,3,0,1,0,1,9,0,0,1,9,0,0,1,97,0,0,
202,0,0,8,0,0,29,424,0,0,0,0,0,1,0,
217,0,0,9,72,0,4,480,0,0,2,1,0,1,0,2,9,0,0,1,97,0,0,
240,0,0,10,123,0,3,488,0,0,3,3,0,1,0,1,9,0,0,1,9,0,0,1,97,0,0,
267,0,0,11,0,0,29,491,0,0,0,0,0,1,0,
282,0,0,12,72,0,4,542,0,0,2,1,0,1,0,2,9,0,0,1,97,0,0,
305,0,0,13,68,0,4,560,0,0,2,1,0,1,0,2,9,0,0,1,9,0,0,
328,0,0,14,63,0,3,577,0,0,2,2,0,1,0,1,97,0,0,1,9,0,0,
351,0,0,15,0,0,29,580,0,0,0,0,0,1,0,
366,0,0,16,74,0,4,609,0,0,2,1,0,1,0,2,9,0,0,1,97,0,0,
389,0,0,17,72,0,4,646,0,0,2,1,0,1,0,2,9,0,0,1,97,0,0,
412,0,0,18,98,0,5,654,0,0,4,4,0,1,0,1,9,0,0,1,9,0,0,1,97,0,0,1,97,0,0,
443,0,0,19,0,0,29,658,0,0,0,0,0,1,0,
458,0,0,20,71,0,4,707,0,0,2,1,0,1,0,2,9,0,0,1,97,0,0,
481,0,0,21,72,0,4,744,0,0,2,1,0,1,0,2,9,0,0,1,97,0,0,
504,0,0,22,93,0,5,752,0,0,4,4,0,1,0,1,9,0,0,1,9,0,0,1,97,0,0,1,97,0,0,
535,0,0,23,0,0,29,756,0,0,0,0,0,1,0,
550,0,0,24,74,0,4,806,0,0,2,1,0,1,0,2,9,0,0,1,97,0,0,
573,0,0,25,71,0,4,812,0,0,2,1,0,1,0,2,9,0,0,1,97,0,0,
596,0,0,26,72,0,4,818,0,0,2,1,0,1,0,2,9,0,0,1,97,0,0,
619,0,0,27,44,0,2,838,0,0,1,1,0,1,0,1,97,0,0,
638,0,0,28,0,0,29,841,0,0,0,0,0,1,0,
653,0,0,29,73,0,4,950,0,0,3,1,0,1,0,2,3,0,0,2,3,0,0,1,97,0,0,
680,0,0,30,207,0,3,961,0,0,6,6,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,97,0,0,
1,97,0,0,
719,0,0,31,62,0,5,967,0,0,1,1,0,1,0,1,97,0,0,
738,0,0,32,0,0,29,970,0,0,0,0,0,1,0,
753,0,0,33,69,0,3,1013,0,0,2,2,0,1,0,1,97,0,0,1,3,0,0,
776,0,0,34,0,0,29,1030,0,0,0,0,0,1,0,
791,0,0,35,96,0,4,1060,0,0,4,1,0,1,0,2,9,0,0,2,3,0,0,2,3,0,0,1,97,0,0,
822,0,0,36,69,0,5,1093,0,0,3,3,0,1,0,1,97,0,0,1,3,0,0,1,9,0,0,
849,0,0,37,0,0,29,1108,0,0,0,0,0,1,0,
864,0,0,38,96,0,4,1139,0,0,4,1,0,1,0,2,9,0,0,2,3,0,0,2,3,0,0,1,97,0,0,
895,0,0,39,42,0,2,1171,0,0,1,1,0,1,0,1,9,0,0,
914,0,0,40,0,0,29,1178,0,0,0,0,0,1,0,
929,0,0,41,0,0,17,1230,0,0,1,1,0,1,0,1,97,0,0,
948,0,0,41,0,0,45,1234,0,0,0,0,0,1,0,
963,0,0,41,0,0,13,1241,0,0,9,0,0,1,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,
97,0,0,2,97,0,0,2,9,0,0,2,9,0,0,
1014,0,0,41,0,0,15,1271,0,0,0,0,0,1,0,
1029,0,0,42,203,0,5,1284,0,0,3,3,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,
1056,0,0,43,62,0,5,1290,0,0,1,1,0,1,0,1,97,0,0,
1075,0,0,44,0,0,29,1302,0,0,0,0,0,1,0,
1090,0,0,41,0,0,17,1375,0,0,1,1,0,1,0,1,97,0,0,
1109,0,0,41,0,0,45,1377,0,0,0,0,0,1,0,
1124,0,0,41,0,0,13,1381,0,0,9,0,0,1,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,
2,97,0,0,2,97,0,0,2,9,0,0,2,9,0,0,
1175,0,0,41,0,0,15,1408,0,0,0,0,0,1,0,
1190,0,0,45,73,0,2,1427,0,0,1,1,0,1,0,1,9,0,0,
1209,0,0,46,109,0,2,1430,0,0,2,2,0,1,0,1,9,0,0,1,9,0,0,
1232,0,0,47,144,0,2,1433,0,0,3,3,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,
1259,0,0,48,0,0,29,1436,0,0,0,0,0,1,0,
1274,0,0,41,0,0,17,1477,0,0,1,1,0,1,0,1,97,0,0,
1293,0,0,41,0,0,45,1481,0,0,0,0,0,1,0,
1308,0,0,41,0,0,13,1490,0,0,3,0,0,1,0,2,9,0,0,2,3,0,0,2,3,0,0,
1335,0,0,41,0,0,15,1512,0,0,0,0,0,1,0,
1350,0,0,49,0,0,29,1514,0,0,0,0,0,1,0,
1365,0,0,41,0,0,17,1545,0,0,1,1,0,1,0,1,97,0,0,
1384,0,0,41,0,0,45,1547,0,0,0,0,0,1,0,
1399,0,0,41,0,0,13,1555,0,0,4,0,0,1,0,2,97,0,0,2,9,0,0,2,9,0,0,2,97,0,0,
1430,0,0,41,0,0,15,1586,0,0,0,0,0,1,0,
1445,0,0,50,0,0,29,1587,0,0,0,0,0,1,0,
1460,0,0,41,0,0,17,1616,0,0,1,1,0,1,0,1,97,0,0,
1479,0,0,41,0,0,45,1618,0,0,0,0,0,1,0,
1494,0,0,41,0,0,13,1626,0,0,4,0,0,1,0,2,97,0,0,2,9,0,0,2,9,0,0,2,97,0,0,
1525,0,0,41,0,0,15,1656,0,0,0,0,0,1,0,
1540,0,0,51,0,0,29,1657,0,0,0,0,0,1,0,
1555,0,0,41,0,0,17,1684,0,0,1,1,0,1,0,1,97,0,0,
1574,0,0,41,0,0,45,1686,0,0,0,0,0,1,0,
1589,0,0,41,0,0,13,1694,0,0,2,0,0,1,0,2,97,0,0,2,9,0,0,
1612,0,0,41,0,0,15,1723,0,0,0,0,0,1,0,
1627,0,0,52,0,0,29,1724,0,0,0,0,0,1,0,
1642,0,0,41,0,0,17,1774,0,0,1,1,0,1,0,1,97,0,0,
1661,0,0,41,0,0,45,1778,0,0,0,0,0,1,0,
1676,0,0,41,0,0,13,1789,0,0,9,0,0,1,0,2,97,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,
2,97,0,0,2,97,0,0,2,9,0,0,2,9,0,0,
1727,0,0,41,0,0,15,1821,0,0,0,0,0,1,0,
1742,0,0,53,0,0,29,1823,0,0,0,0,0,1,0,
1757,0,0,54,116,0,4,1873,0,0,11,2,0,1,0,2,97,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,
0,2,97,0,0,2,97,0,0,2,9,0,0,2,9,0,0,1,9,0,0,1,97,0,0,
1816,0,0,55,140,0,4,1879,0,0,12,3,0,1,0,2,97,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,
0,2,97,0,0,2,97,0,0,2,9,0,0,2,9,0,0,1,97,0,0,1,9,0,0,1,97,0,0,
1879,0,0,56,73,0,4,1959,0,0,3,1,0,1,0,2,3,0,0,2,3,0,0,1,97,0,0,
1906,0,0,57,151,0,5,1980,0,0,7,7,0,1,0,1,9,0,0,1,9,0,0,1,9,0,0,1,9,0,0,1,97,0,
0,1,97,0,0,1,97,0,0,
1949,0,0,58,53,0,5,1995,0,0,2,2,0,1,0,1,3,0,0,1,97,0,0,
1972,0,0,59,59,0,4,1997,0,0,2,1,0,1,0,2,3,0,0,1,97,0,0,
1995,0,0,60,53,0,5,2002,0,0,2,2,0,1,0,1,3,0,0,1,97,0,0,
2018,0,0,61,0,0,29,2004,0,0,0,0,0,1,0,
2033,0,0,62,0,0,31,2058,0,0,0,0,0,1,0,
};


// win32 Visual C 2010 이상컴파일시 추가
// 프로그램 가장 첫 줄에 추가할 것
#define _CRT_SECURE_NO_WARNINGS
//-----------------------------------------

#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <conio.h>

/* for oracle */
#include <sqlda.h>
#include <sqlca.h>
#include <sqlcpr.h>


// win32 Visual C 2010 이상컴파일시 추가
#define getch() _getch()
//-----------------------------------------

/*---------------  화면 커서 위치 제어 ----------------------*/
#include < windows.h >
void gotoxy(int x, int y) ;
void getxy(int *x, int *y) ;
/*-----------------------------------------------------------*/
void print_screen(char fname[]);
void DB_connect();
char* login();
int main_menu();
void sql_error();
int patient_management_menu();
int room_management_menu();
void AddPatient();
void update_patient(char userNum[6]);
void select_patient();
void add_room();
void select_room();
void update_room();
void delete_room();
int admin_menu();
void add_doctor_account();
void edit_doctor_account();
void add_nurse_account();
void edit_doctor_account2();
void edit_nurse_account();
void edit_nurse_account2();
void add_department();
void delete_department();
void delete_department2();
void DeletePatient(char userNum[6]);
void goLeave(char userNum[6]);

/* EXEC SQL BEGIN DECLARE SECTION; */ 

   /* VARCHAR uid[80]; */ 
struct { unsigned short len; unsigned char arr[80]; } uid;

   /* VARCHAR pwd[20]; */ 
struct { unsigned short len; unsigned char arr[20]; } pwd;

/* EXEC SQL END DECLARE SECTION; */ 


// win32 Visual C 컴파일시 추가
#define getch() _getch()

void main()
{
   _putenv("NLS_LANG=American_America.KO16KSC5601");
   system("mode con cols=100 lines=30");   // 콘솔창 크기 조절
   static char userNum[6] = "none";

   DB_connect();
   
   do
   {
      strcpy(userNum, login());

      // 로그인 실패
      if (strcmp(userNum, "none")==0)
      {
         gotoxy(33,15);
         printf("로그인에 실패하였습니다.");
         gotoxy(33,17);
         printf("재 입력해 주세요.");
         getch();
         system("cls");
         printf("\n");
      }
   } while(strcmp(userNum, "none")==0);

   // 관리자 메뉴로 이동
   if (userNum[0] == 'M') {
		int choice = 0;
		do
		{
			system("cls");
			printf("\n");
			choice = admin_menu();

			switch (choice) {
			case 1:
				system("cls");
				add_doctor_account();
				getch();
				break;
			case 2:
				system("cls");
				edit_doctor_account();
				getch();
				break;
			case 3:
				system("cls");
				add_nurse_account();
				getch();
				break;
			case 4:
				system("cls");
				edit_nurse_account();
				getch();
				break;
			case 5:
				system("cls");
				add_department();
				getch();
				break;
			case 6:
				system("cls");
				delete_department();
				getch();
				break;
			deafult:
				gotoxy(33,15);
				printf("메뉴를 다시 입력해 주세요.");
				system("cls");
				printf("\n");
				getch();
				break;
			}
			system("mode con cols=100 lines=30");
		} while(choice != 7);
   }

   // 메인 메뉴로 이동
   if (userNum[0] == 'D' || userNum[0] == 'N') {
      int choice = 0;

      do
      {
         system("cls");
         printf("\n");
         choice = main_menu();
         
         switch(choice)
         {
            // 환자 관리
            case 1:
               int p_choice = 0;
               system("cls");
               printf("\n");
               do
               {
                  p_choice = patient_management_menu();
                  switch(p_choice)
                  {
                     // 환자 등록
                     case 1:
		if (userNum[0] == 'D')
		{
			gotoxy(30,10);
			printf("※ 환자 등록은 간호사만 가능합니다. ※");
			getch();
			break;
		}
                        AddPatient();
                        break;
                     // 환자 조회
                     case 2:
                        select_patient(userNum);
                        break;
                     // 환자 정보 수정
                     case 3:
		update_patient(userNum);
                        break;
                     // 환자 퇴원 처리
                     case 4:
		   if (userNum[0] == 'N')
		   {
		   	gotoxy(30,10);
		   	printf("※ 퇴원 처리는 담당 의사만 가능합니다. ※");
			getch();
			break;
		   }
		goLeave(userNum);
                        break;
                     // 환자 삭제
                     case 5:
		DeletePatient(userNum);
                        break;
                  }
                  system("mode con cols=100 lines=30");
                  system("cls");
                  printf("\n");
               } while (p_choice != 6);
               break;
            // 병실 관리
            case 2:
	   if (userNum[0] == 'D')
	   {
	   	gotoxy(30,10);
	   	printf("※ 병실 관리는 간호사만 가능합니다. ※");
		getch();
		break;
	   }
               int r_choice = 0;
               system("cls");
               printf("\n");
               do
               {
                  r_choice = room_management_menu();
                  switch(r_choice)
                  {
                     // 병실 추가
                     case 1:
		add_room();
                        break;
                     // 병실 조회
                     case 2:
		select_room();
                        break;
                     // 병실 정보 수정
                     case 3:
		update_room();
                        break;
                     // 병실 삭제
                     case 4:
		delete_room();
                        break;
                  }
                  system("cls");
                  printf("\n");
               } while (r_choice != 5);
               break;
         }
      } while(choice != 3);
   }
   
   system("cls");
   printf("\n");
   print_screen("end_page.txt");
   getch();
   
   /* EXEC SQL COMMIT WORK RELEASE ; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 0;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )5;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}

   // 현재 진행중인 트랜잭션을 커밋하고 데이터베이스 연결을 종료함.

}


// DB 연결 함수
void DB_connect()
{
   strcpy((char *)uid.arr,"a20173152@//sedb.deu.ac.kr:1521/orcl");
   uid.len = (short) strlen((char *)uid.arr);
   strcpy((char *)pwd.arr,"20173152");
   pwd.len = (short) strlen((char *)pwd.arr);

   /* EXEC SQL CONNECT :uid IDENTIFIED BY :pwd; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 4;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.iters = (unsigned int  )10;
   sqlstm.offset = (unsigned int  )20;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlstm.sqhstv[0] = (         void  *)&uid;
   sqlstm.sqhstl[0] = (unsigned int  )82;
   sqlstm.sqhsts[0] = (         int  )82;
   sqlstm.sqindv[0] = (         void  *)0;
   sqlstm.sqinds[0] = (         int  )0;
   sqlstm.sqharm[0] = (unsigned int  )0;
   sqlstm.sqadto[0] = (unsigned short )0;
   sqlstm.sqtdso[0] = (unsigned short )0;
   sqlstm.sqhstv[1] = (         void  *)&pwd;
   sqlstm.sqhstl[1] = (unsigned int  )22;
   sqlstm.sqhsts[1] = (         int  )22;
   sqlstm.sqindv[1] = (         void  *)0;
   sqlstm.sqinds[1] = (         int  )0;
   sqlstm.sqharm[1] = (unsigned int  )0;
   sqlstm.sqadto[1] = (unsigned short )0;
   sqlstm.sqtdso[1] = (unsigned short )0;
   sqlstm.sqphsv = sqlstm.sqhstv;
   sqlstm.sqphsl = sqlstm.sqhstl;
   sqlstm.sqphss = sqlstm.sqhsts;
   sqlstm.sqpind = sqlstm.sqindv;
   sqlstm.sqpins = sqlstm.sqinds;
   sqlstm.sqparm = sqlstm.sqharm;
   sqlstm.sqparc = sqlstm.sqharc;
   sqlstm.sqpadto = sqlstm.sqadto;
   sqlstm.sqptdso = sqlstm.sqtdso;
   sqlstm.sqlcmax = (unsigned int )100;
   sqlstm.sqlcmin = (unsigned int )2;
   sqlstm.sqlcincr = (unsigned int )1;
   sqlstm.sqlctimeout = (unsigned int )0;
   sqlstm.sqlcnowait = (unsigned int )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



   // connection이 실패했을경우의 처리부분

   if (sqlca.sqlcode != 0 && sqlca.sqlcode != -1405){ 
      printf("Connect error: %s", sqlca.sqlerrm.sqlerrmc);
      getch();
      exit(-1);
   }

    printf("Oracle Connect SUCCESS by %s\n", uid.arr);
}


// 로그인 함수
char* login()
{
   static char userNum[6] = "none";

   /* EXEC SQL BEGIN DECLARE SECTION; */ 

      /* varchar u_name_check[20] = {""}; */ 
struct { unsigned short len; unsigned char arr[20]; } u_name_check
 = {""};

      char u_emp_num_check[6] = {""};
      /* varchar u_position[255] = {""}; */ 
struct { unsigned short len; unsigned char arr[255]; } u_position
 = {""};

      /* varchar u_name[255] = {""}; */ 
struct { unsigned short len; unsigned char arr[255]; } u_name
 = {""};

      char u_emp_num[6] = {""};
   /* EXEC SQL END DECLARE SECTION; */ 


   /* EXEC SQL WHENEVER SQLERROR DO sql_error("\7ORACLE ERROR:\n"); */ 


   print_screen("login_page.txt");

   gotoxy(49,7);
   //printf(" 이름을 입력하세요 : ");
   scanf("%s", u_name.arr);
   u_name.len = strlen(u_name.arr);
   
   gotoxy(49,10);
   //printf(" 사원 번호를 입력하세요 : ");
   scanf("%s", u_emp_num);
   
   u_position.len = strlen(u_position.arr);

   /* EXEC SQL SELECT TRIM(MANAGER_ID), MANAGER_PW
      into :u_name_check, :u_emp_num_check
      from H_MANAGER
      where MANAGER_ID = :u_name and MANAGER_PW = :u_emp_num; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 4;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "select trim(MANAGER_ID) ,MANAGER_PW into :b0,:b1  from H_M\
ANAGER where (MANAGER_ID=:b2 and MANAGER_PW=:b3)";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )51;
   sqlstm.selerr = (unsigned short)1;
   sqlstm.sqlpfmem = (unsigned int  )0;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlstm.sqhstv[0] = (         void  *)&u_name_check;
   sqlstm.sqhstl[0] = (unsigned int  )22;
   sqlstm.sqhsts[0] = (         int  )0;
   sqlstm.sqindv[0] = (         void  *)0;
   sqlstm.sqinds[0] = (         int  )0;
   sqlstm.sqharm[0] = (unsigned int  )0;
   sqlstm.sqadto[0] = (unsigned short )0;
   sqlstm.sqtdso[0] = (unsigned short )0;
   sqlstm.sqhstv[1] = (         void  *)u_emp_num_check;
   sqlstm.sqhstl[1] = (unsigned int  )6;
   sqlstm.sqhsts[1] = (         int  )0;
   sqlstm.sqindv[1] = (         void  *)0;
   sqlstm.sqinds[1] = (         int  )0;
   sqlstm.sqharm[1] = (unsigned int  )0;
   sqlstm.sqadto[1] = (unsigned short )0;
   sqlstm.sqtdso[1] = (unsigned short )0;
   sqlstm.sqhstv[2] = (         void  *)&u_name;
   sqlstm.sqhstl[2] = (unsigned int  )257;
   sqlstm.sqhsts[2] = (         int  )0;
   sqlstm.sqindv[2] = (         void  *)0;
   sqlstm.sqinds[2] = (         int  )0;
   sqlstm.sqharm[2] = (unsigned int  )0;
   sqlstm.sqadto[2] = (unsigned short )0;
   sqlstm.sqtdso[2] = (unsigned short )0;
   sqlstm.sqhstv[3] = (         void  *)u_emp_num;
   sqlstm.sqhstl[3] = (unsigned int  )6;
   sqlstm.sqhsts[3] = (         int  )0;
   sqlstm.sqindv[3] = (         void  *)0;
   sqlstm.sqinds[3] = (         int  )0;
   sqlstm.sqharm[3] = (unsigned int  )0;
   sqlstm.sqadto[3] = (unsigned short )0;
   sqlstm.sqtdso[3] = (unsigned short )0;
   sqlstm.sqphsv = sqlstm.sqhstv;
   sqlstm.sqphsl = sqlstm.sqhstl;
   sqlstm.sqphss = sqlstm.sqhsts;
   sqlstm.sqpind = sqlstm.sqindv;
   sqlstm.sqpins = sqlstm.sqinds;
   sqlstm.sqparm = sqlstm.sqharm;
   sqlstm.sqparc = sqlstm.sqharc;
   sqlstm.sqpadto = sqlstm.sqadto;
   sqlstm.sqptdso = sqlstm.sqtdso;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
   if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}



   if (strcmp(u_name_check.arr, u_name.arr) == 0 && strcmp(u_emp_num_check, u_emp_num) == 0)
   {
      gotoxy(29,15);
      printf("관리자 로그인에 성공하였습니다!");
      gotoxy(29,17);
      printf("관리자님 환영합니다.");
      strcpy(userNum, "M");
      gotoxy(5,29);
      printf("계속하려면 아무 키나 누르세요..");
   }
   else
   {
      if (u_emp_num[0] == 'D')
      {
         /* EXEC SQL SELECT DOCTOR_NAME, DOCTOR_NUMBER, DOCTOR_POSITION
            into :u_name_check, :u_emp_num_check, :u_position
            from H_DOCTOR
            where DOCTOR_NAME = :u_name and DOCTOR_NUMBER = :u_emp_num; */ 

{
         struct sqlexd sqlstm;
         sqlstm.sqlvsn = 13;
         sqlstm.arrsiz = 5;
         sqlstm.sqladtp = &sqladt;
         sqlstm.sqltdsp = &sqltds;
         sqlstm.stmt = "select DOCTOR_NAME ,DOCTOR_NUMBER ,DOCTOR_POSITION i\
nto :b0,:b1,:b2  from H_DOCTOR where (DOCTOR_NAME=:b3 and DOCTOR_NUMBER=:b4)";
         sqlstm.iters = (unsigned int  )1;
         sqlstm.offset = (unsigned int  )82;
         sqlstm.selerr = (unsigned short)1;
         sqlstm.sqlpfmem = (unsigned int  )0;
         sqlstm.cud = sqlcud0;
         sqlstm.sqlest = (unsigned char  *)&sqlca;
         sqlstm.sqlety = (unsigned short)4352;
         sqlstm.occurs = (unsigned int  )0;
         sqlstm.sqhstv[0] = (         void  *)&u_name_check;
         sqlstm.sqhstl[0] = (unsigned int  )22;
         sqlstm.sqhsts[0] = (         int  )0;
         sqlstm.sqindv[0] = (         void  *)0;
         sqlstm.sqinds[0] = (         int  )0;
         sqlstm.sqharm[0] = (unsigned int  )0;
         sqlstm.sqadto[0] = (unsigned short )0;
         sqlstm.sqtdso[0] = (unsigned short )0;
         sqlstm.sqhstv[1] = (         void  *)u_emp_num_check;
         sqlstm.sqhstl[1] = (unsigned int  )6;
         sqlstm.sqhsts[1] = (         int  )0;
         sqlstm.sqindv[1] = (         void  *)0;
         sqlstm.sqinds[1] = (         int  )0;
         sqlstm.sqharm[1] = (unsigned int  )0;
         sqlstm.sqadto[1] = (unsigned short )0;
         sqlstm.sqtdso[1] = (unsigned short )0;
         sqlstm.sqhstv[2] = (         void  *)&u_position;
         sqlstm.sqhstl[2] = (unsigned int  )257;
         sqlstm.sqhsts[2] = (         int  )0;
         sqlstm.sqindv[2] = (         void  *)0;
         sqlstm.sqinds[2] = (         int  )0;
         sqlstm.sqharm[2] = (unsigned int  )0;
         sqlstm.sqadto[2] = (unsigned short )0;
         sqlstm.sqtdso[2] = (unsigned short )0;
         sqlstm.sqhstv[3] = (         void  *)&u_name;
         sqlstm.sqhstl[3] = (unsigned int  )257;
         sqlstm.sqhsts[3] = (         int  )0;
         sqlstm.sqindv[3] = (         void  *)0;
         sqlstm.sqinds[3] = (         int  )0;
         sqlstm.sqharm[3] = (unsigned int  )0;
         sqlstm.sqadto[3] = (unsigned short )0;
         sqlstm.sqtdso[3] = (unsigned short )0;
         sqlstm.sqhstv[4] = (         void  *)u_emp_num;
         sqlstm.sqhstl[4] = (unsigned int  )6;
         sqlstm.sqhsts[4] = (         int  )0;
         sqlstm.sqindv[4] = (         void  *)0;
         sqlstm.sqinds[4] = (         int  )0;
         sqlstm.sqharm[4] = (unsigned int  )0;
         sqlstm.sqadto[4] = (unsigned short )0;
         sqlstm.sqtdso[4] = (unsigned short )0;
         sqlstm.sqphsv = sqlstm.sqhstv;
         sqlstm.sqphsl = sqlstm.sqhstl;
         sqlstm.sqphss = sqlstm.sqhsts;
         sqlstm.sqpind = sqlstm.sqindv;
         sqlstm.sqpins = sqlstm.sqinds;
         sqlstm.sqparm = sqlstm.sqharm;
         sqlstm.sqparc = sqlstm.sqharc;
         sqlstm.sqpadto = sqlstm.sqadto;
         sqlstm.sqptdso = sqlstm.sqtdso;
         sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
         if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}



         if (strcmp(u_name_check.arr, u_name.arr) == 0 && strcmp(u_emp_num_check, u_emp_num) == 0)
         {
            gotoxy(29,17);
            printf("로그인에 성공하였습니다!\n\n");
            gotoxy(29,19);
            printf("%s %s님 환영합니다.\n\n", u_name.arr, u_position.arr);
            strcpy(userNum, u_emp_num);
            gotoxy(5,29);
            printf("계속하려면 아무 키나 누르세요..");
         }
      }
      else if (u_emp_num[0] == 'N')
      {
         /* EXEC SQL SELECT NURSE_NAME, NURSE_NUMBER, NURSE_POSITION
            into :u_name_check, :u_emp_num_check, :u_position
            from H_NURSE
            where NURSE_NAME = :u_name and NURSE_NUMBER = :u_emp_num; */ 

{
         struct sqlexd sqlstm;
         sqlstm.sqlvsn = 13;
         sqlstm.arrsiz = 5;
         sqlstm.sqladtp = &sqladt;
         sqlstm.sqltdsp = &sqltds;
         sqlstm.stmt = "select NURSE_NAME ,NURSE_NUMBER ,NURSE_POSITION into\
 :b0,:b1,:b2  from H_NURSE where (NURSE_NAME=:b3 and NURSE_NUMBER=:b4)";
         sqlstm.iters = (unsigned int  )1;
         sqlstm.offset = (unsigned int  )117;
         sqlstm.selerr = (unsigned short)1;
         sqlstm.sqlpfmem = (unsigned int  )0;
         sqlstm.cud = sqlcud0;
         sqlstm.sqlest = (unsigned char  *)&sqlca;
         sqlstm.sqlety = (unsigned short)4352;
         sqlstm.occurs = (unsigned int  )0;
         sqlstm.sqhstv[0] = (         void  *)&u_name_check;
         sqlstm.sqhstl[0] = (unsigned int  )22;
         sqlstm.sqhsts[0] = (         int  )0;
         sqlstm.sqindv[0] = (         void  *)0;
         sqlstm.sqinds[0] = (         int  )0;
         sqlstm.sqharm[0] = (unsigned int  )0;
         sqlstm.sqadto[0] = (unsigned short )0;
         sqlstm.sqtdso[0] = (unsigned short )0;
         sqlstm.sqhstv[1] = (         void  *)u_emp_num_check;
         sqlstm.sqhstl[1] = (unsigned int  )6;
         sqlstm.sqhsts[1] = (         int  )0;
         sqlstm.sqindv[1] = (         void  *)0;
         sqlstm.sqinds[1] = (         int  )0;
         sqlstm.sqharm[1] = (unsigned int  )0;
         sqlstm.sqadto[1] = (unsigned short )0;
         sqlstm.sqtdso[1] = (unsigned short )0;
         sqlstm.sqhstv[2] = (         void  *)&u_position;
         sqlstm.sqhstl[2] = (unsigned int  )257;
         sqlstm.sqhsts[2] = (         int  )0;
         sqlstm.sqindv[2] = (         void  *)0;
         sqlstm.sqinds[2] = (         int  )0;
         sqlstm.sqharm[2] = (unsigned int  )0;
         sqlstm.sqadto[2] = (unsigned short )0;
         sqlstm.sqtdso[2] = (unsigned short )0;
         sqlstm.sqhstv[3] = (         void  *)&u_name;
         sqlstm.sqhstl[3] = (unsigned int  )257;
         sqlstm.sqhsts[3] = (         int  )0;
         sqlstm.sqindv[3] = (         void  *)0;
         sqlstm.sqinds[3] = (         int  )0;
         sqlstm.sqharm[3] = (unsigned int  )0;
         sqlstm.sqadto[3] = (unsigned short )0;
         sqlstm.sqtdso[3] = (unsigned short )0;
         sqlstm.sqhstv[4] = (         void  *)u_emp_num;
         sqlstm.sqhstl[4] = (unsigned int  )6;
         sqlstm.sqhsts[4] = (         int  )0;
         sqlstm.sqindv[4] = (         void  *)0;
         sqlstm.sqinds[4] = (         int  )0;
         sqlstm.sqharm[4] = (unsigned int  )0;
         sqlstm.sqadto[4] = (unsigned short )0;
         sqlstm.sqtdso[4] = (unsigned short )0;
         sqlstm.sqphsv = sqlstm.sqhstv;
         sqlstm.sqphsl = sqlstm.sqhstl;
         sqlstm.sqphss = sqlstm.sqhsts;
         sqlstm.sqpind = sqlstm.sqindv;
         sqlstm.sqpins = sqlstm.sqinds;
         sqlstm.sqparm = sqlstm.sqharm;
         sqlstm.sqparc = sqlstm.sqharc;
         sqlstm.sqpadto = sqlstm.sqadto;
         sqlstm.sqptdso = sqlstm.sqtdso;
         sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
         if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}



         if (strcmp(u_name_check.arr, u_name.arr) == 0 && strcmp(u_emp_num_check, u_emp_num) == 0)
         {
            gotoxy(29,17);
            printf("로그인에 성공하였습니다!\n\n");
            gotoxy(29,19);
            printf("%s %s님 환영합니다.\n\n", u_name.arr, u_position.arr);
            strcpy(userNum, u_emp_num);
            gotoxy(5,29);
            printf("계속하려면 아무 키나 누르세요..");
         }
      }
   }
   if(strcmp(userNum, "none") != 0) { getch(); }
   return userNum;
}


// 관리자 메뉴 선택 함수
int admin_menu()
{
	int choice = 0;

	print_screen("admin_menu.txt");

	gotoxy(54,9);
	//printf(" 관리자 메뉴를 선택하세요 : ");
	scanf("%d", &choice);

	return choice;
}


// 의사 계정 추가 함수
void add_doctor_account()
{
	while(1)
	{
		_putenv("NLS_LANG=American_America.KO16KSC5601");
		/* EXEC SQL WHENEVER SQLERROR DO sql_error("\7ORACLE ERROR:\n"); */ 


		/* 의사 계정 추가 화면 */
		printf("\n");
		print_screen("add_doctor_account.txt");

		/* EXEC SQL BEGIN DECLARE SECTION; */ 

		  char d_number[6]={""};
		  /* varchar d_name[255]={""}; */ 
struct { unsigned short len; unsigned char arr[255]; } d_name
 = {""};

		  /* varchar d_position[255]={""}; */ 
struct { unsigned short len; unsigned char arr[255]; } d_position
 = {""};

		  char d_deptno[6]={""};
		  /* varchar d_deptno_check[6] = {""}; */ 
struct { unsigned short len; unsigned char arr[6]; } d_deptno_check
 = {""};

		/* EXEC SQL END DECLARE SECTION; */ 


		gotoxy(48,12);
		//의사 이름을 입력
		scanf("%s", d_name.arr);
   
   		gotoxy(48,14);
   		//의사 직급을 입력
    		scanf("%s", d_position.arr);

   		gotoxy(53,16);
   		//의사 부서 번호를 입력
    		scanf("%s", d_deptno);

   		d_name.len = strlen(d_name.arr);
   		d_position.len = strlen(d_position.arr);

		/* 부서번호 판별 SQL 문장*/
		/* EXEC SQL SELECT TRIM(H_DEPT_NUMBER)
		into :d_deptno_check
		from H_DEPT
		where H_DEPT_NUMBER = :d_deptno; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 13;
  sqlstm.arrsiz = 5;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "select trim(H_DEPT_NUMBER) into :b0  from H_DEPT where H_DE\
PT_NUMBER=:b1";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )152;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.sqlpfmem = (unsigned int  )0;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)4352;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)&d_deptno_check;
  sqlstm.sqhstl[0] = (unsigned int  )8;
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)0;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (         void  *)d_deptno;
  sqlstm.sqhstl[1] = (unsigned int  )6;
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         void  *)0;
  sqlstm.sqinds[1] = (         int  )0;
  sqlstm.sqharm[1] = (unsigned int  )0;
  sqlstm.sqadto[1] = (unsigned short )0;
  sqlstm.sqtdso[1] = (unsigned short )0;
  sqlstm.sqphsv = sqlstm.sqhstv;
  sqlstm.sqphsl = sqlstm.sqhstl;
  sqlstm.sqphss = sqlstm.sqhsts;
  sqlstm.sqpind = sqlstm.sqindv;
  sqlstm.sqpins = sqlstm.sqinds;
  sqlstm.sqparm = sqlstm.sqharm;
  sqlstm.sqparc = sqlstm.sqharc;
  sqlstm.sqpadto = sqlstm.sqadto;
  sqlstm.sqptdso = sqlstm.sqtdso;
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
  if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}


		
		if (strcmp(d_deptno_check.arr, d_deptno) == 0)
			{
 				/* 실행시킬 SQL 문장*/
    				/* EXEC SQL INSERT INTO h_doctor (doctor_number, doctor_name, doctor_position, doctor_deptno)
    				VALUES('D'||EMPLOYEE_SEQ.NEXTVAL, :d_name, :d_position, :d_deptno); */ 

{
        struct sqlexd sqlstm;
        sqlstm.sqlvsn = 13;
        sqlstm.arrsiz = 5;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.stmt = "insert into h_doctor (doctor_number,doctor_name,docto\
r_position,doctor_deptno) values (('D'||EMPLOYEE_SEQ.nextval ),:b0,:b1,:b2)";
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )175;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)4352;
        sqlstm.occurs = (unsigned int  )0;
        sqlstm.sqhstv[0] = (         void  *)&d_name;
        sqlstm.sqhstl[0] = (unsigned int  )257;
        sqlstm.sqhsts[0] = (         int  )0;
        sqlstm.sqindv[0] = (         void  *)0;
        sqlstm.sqinds[0] = (         int  )0;
        sqlstm.sqharm[0] = (unsigned int  )0;
        sqlstm.sqadto[0] = (unsigned short )0;
        sqlstm.sqtdso[0] = (unsigned short )0;
        sqlstm.sqhstv[1] = (         void  *)&d_position;
        sqlstm.sqhstl[1] = (unsigned int  )257;
        sqlstm.sqhsts[1] = (         int  )0;
        sqlstm.sqindv[1] = (         void  *)0;
        sqlstm.sqinds[1] = (         int  )0;
        sqlstm.sqharm[1] = (unsigned int  )0;
        sqlstm.sqadto[1] = (unsigned short )0;
        sqlstm.sqtdso[1] = (unsigned short )0;
        sqlstm.sqhstv[2] = (         void  *)d_deptno;
        sqlstm.sqhstl[2] = (unsigned int  )6;
        sqlstm.sqhsts[2] = (         int  )0;
        sqlstm.sqindv[2] = (         void  *)0;
        sqlstm.sqinds[2] = (         int  )0;
        sqlstm.sqharm[2] = (unsigned int  )0;
        sqlstm.sqadto[2] = (unsigned short )0;
        sqlstm.sqtdso[2] = (unsigned short )0;
        sqlstm.sqphsv = sqlstm.sqhstv;
        sqlstm.sqphsl = sqlstm.sqhstl;
        sqlstm.sqphss = sqlstm.sqhsts;
        sqlstm.sqpind = sqlstm.sqindv;
        sqlstm.sqpins = sqlstm.sqinds;
        sqlstm.sqparm = sqlstm.sqharm;
        sqlstm.sqparc = sqlstm.sqharc;
        sqlstm.sqpadto = sqlstm.sqadto;
        sqlstm.sqptdso = sqlstm.sqtdso;
        sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
        if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}



    				/* EXEC SQL COMMIT WORK; */ 

{
        struct sqlexd sqlstm;
        sqlstm.sqlvsn = 13;
        sqlstm.arrsiz = 5;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )202;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)4352;
        sqlstm.occurs = (unsigned int  )0;
        sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
        if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}



				gotoxy(33,20);
				printf("의사 계정이 추가되었습니다.");

				break;
			}
			else
			{
				gotoxy(33,20);
				printf("일치하는 부서 번호가 없습니다.");
				gotoxy(33,22);
				printf("재 입력해 주세요.");
				getch();
				system("cls");
			}
		}
}


// 간호사 계정 추가 함수
void add_nurse_account()
{
	while(1)
	{
		_putenv("NLS_LANG=American_America.KO16KSC5601");
		/* EXEC SQL WHENEVER SQLERROR DO sql_error("\7ORACLE ERROR:\n"); */ 


		/* 간호사 계정 추가 화면 */
   		printf("\n");
   		print_screen("add_nurse_account.txt");

		/* EXEC SQL BEGIN DECLARE SECTION; */ 

   		  char n_number[6]={""};
   		  /* varchar n_name[255]={""}; */ 
struct { unsigned short len; unsigned char arr[255]; } n_name
 = {""};

   		  /* varchar n_position[255]={""}; */ 
struct { unsigned short len; unsigned char arr[255]; } n_position
 = {""};

  		  char n_deptno[6]={""};
		  /* varchar n_deptno_check[6] = {""}; */ 
struct { unsigned short len; unsigned char arr[6]; } n_deptno_check
 = {""};

		/* EXEC SQL END DECLARE SECTION; */ 


   		gotoxy(50,12);
  		//간호사 이름을 입력
    		scanf("%s", n_name.arr);

   		gotoxy(50,14);
   		//간호사 직급을 입력
   		 scanf("%s", n_position.arr);

   		gotoxy(55,16);
  		//간호사 부서 번호를 입력
   		 scanf("%s", n_deptno);

   		n_name.len = strlen(n_name.arr);
  		n_position.len = strlen(n_position.arr);

		/* 부서번호 판별 SQL 문장*/
		/* EXEC SQL SELECT TRIM(H_DEPT_NUMBER)
		into :n_deptno_check
		from H_DEPT
		where H_DEPT_NUMBER = :n_deptno; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 13;
  sqlstm.arrsiz = 5;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "select trim(H_DEPT_NUMBER) into :b0  from H_DEPT where H_DE\
PT_NUMBER=:b1";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )217;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.sqlpfmem = (unsigned int  )0;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)4352;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)&n_deptno_check;
  sqlstm.sqhstl[0] = (unsigned int  )8;
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)0;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (         void  *)n_deptno;
  sqlstm.sqhstl[1] = (unsigned int  )6;
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         void  *)0;
  sqlstm.sqinds[1] = (         int  )0;
  sqlstm.sqharm[1] = (unsigned int  )0;
  sqlstm.sqadto[1] = (unsigned short )0;
  sqlstm.sqtdso[1] = (unsigned short )0;
  sqlstm.sqphsv = sqlstm.sqhstv;
  sqlstm.sqphsl = sqlstm.sqhstl;
  sqlstm.sqphss = sqlstm.sqhsts;
  sqlstm.sqpind = sqlstm.sqindv;
  sqlstm.sqpins = sqlstm.sqinds;
  sqlstm.sqparm = sqlstm.sqharm;
  sqlstm.sqparc = sqlstm.sqharc;
  sqlstm.sqpadto = sqlstm.sqadto;
  sqlstm.sqptdso = sqlstm.sqtdso;
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
  if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}



		if (strcmp(n_deptno_check.arr, n_deptno) == 0)
			{
   				/* 실행시킬 SQL 문장*/
    				/* EXEC SQL INSERT INTO h_nurse (nurse_number, nurse_name, nurse_position, nurse_deptno)
    				VALUES('N'||EMPLOYEE_SEQ.NEXTVAL, :n_name, :n_position, :n_deptno); */ 

{
        struct sqlexd sqlstm;
        sqlstm.sqlvsn = 13;
        sqlstm.arrsiz = 5;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.stmt = "insert into h_nurse (nurse_number,nurse_name,nurse_po\
sition,nurse_deptno) values (('N'||EMPLOYEE_SEQ.nextval ),:b0,:b1,:b2)";
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )240;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)4352;
        sqlstm.occurs = (unsigned int  )0;
        sqlstm.sqhstv[0] = (         void  *)&n_name;
        sqlstm.sqhstl[0] = (unsigned int  )257;
        sqlstm.sqhsts[0] = (         int  )0;
        sqlstm.sqindv[0] = (         void  *)0;
        sqlstm.sqinds[0] = (         int  )0;
        sqlstm.sqharm[0] = (unsigned int  )0;
        sqlstm.sqadto[0] = (unsigned short )0;
        sqlstm.sqtdso[0] = (unsigned short )0;
        sqlstm.sqhstv[1] = (         void  *)&n_position;
        sqlstm.sqhstl[1] = (unsigned int  )257;
        sqlstm.sqhsts[1] = (         int  )0;
        sqlstm.sqindv[1] = (         void  *)0;
        sqlstm.sqinds[1] = (         int  )0;
        sqlstm.sqharm[1] = (unsigned int  )0;
        sqlstm.sqadto[1] = (unsigned short )0;
        sqlstm.sqtdso[1] = (unsigned short )0;
        sqlstm.sqhstv[2] = (         void  *)n_deptno;
        sqlstm.sqhstl[2] = (unsigned int  )6;
        sqlstm.sqhsts[2] = (         int  )0;
        sqlstm.sqindv[2] = (         void  *)0;
        sqlstm.sqinds[2] = (         int  )0;
        sqlstm.sqharm[2] = (unsigned int  )0;
        sqlstm.sqadto[2] = (unsigned short )0;
        sqlstm.sqtdso[2] = (unsigned short )0;
        sqlstm.sqphsv = sqlstm.sqhstv;
        sqlstm.sqphsl = sqlstm.sqhstl;
        sqlstm.sqphss = sqlstm.sqhsts;
        sqlstm.sqpind = sqlstm.sqindv;
        sqlstm.sqpins = sqlstm.sqinds;
        sqlstm.sqparm = sqlstm.sqharm;
        sqlstm.sqparc = sqlstm.sqharc;
        sqlstm.sqpadto = sqlstm.sqadto;
        sqlstm.sqptdso = sqlstm.sqtdso;
        sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
        if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}



    				/* EXEC SQL COMMIT WORK; */ 

{
        struct sqlexd sqlstm;
        sqlstm.sqlvsn = 13;
        sqlstm.arrsiz = 5;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )267;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)4352;
        sqlstm.occurs = (unsigned int  )0;
        sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
        if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}



				gotoxy(33,20);
				printf("간호사 계정이 추가되었습니다.");

				break;
			}
			else
			{
				gotoxy(33,20);
				printf("일치하는 부서 번호가 없습니다.");
				gotoxy(33,22);
				printf("재 입력해 주세요.");
				getch();
				system("cls");
			}
		}
}


// 부서 추가 함수
void add_department()
{
	while(1)
	{
		_putenv("NLS_LANG=American_America.KO16KSC5601");
		/* EXEC SQL WHENEVER SQLERROR DO sql_error("\7ORACLE ERROR:\n"); */ 


		/* 부서 추가 화면 */
		printf("\n");
		print_screen("add_department.txt");

		/* EXEC SQL BEGIN DECLARE SECTION; */ 

 		  char h_dept_num[6]={""};
		  /* varchar h_dept_n[255]={""}; */ 
struct { unsigned short len; unsigned char arr[255]; } h_dept_n
 = {""};


 		  /* varchar h_dept_num_check[6]={""}; */ 
struct { unsigned short len; unsigned char arr[6]; } h_dept_num_check
 = {""};

		  /* varchar h_dept_n_check[255]={""}; */ 
struct { unsigned short len; unsigned char arr[255]; } h_dept_n_check
 = {""};

		/* EXEC SQL END DECLARE SECTION; */ 


		gotoxy(48,12);
   		//부서 번호를 입력
    		scanf("%s", h_dept_num);
   
   		gotoxy(48,14);
   		//부서 이름을 입력
    		scanf("%s", h_dept_n.arr);

  		 h_dept_n.len = strlen(h_dept_n.arr);

		/* 부서 번호 판별 SQL 문장*/
		/* EXEC SQL SELECT TRIM(H_DEPT_NUMBER)
		into :h_dept_num_check
		from H_DEPT
		where H_DEPT_NUMBER = :h_dept_num; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 13;
  sqlstm.arrsiz = 5;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "select trim(H_DEPT_NUMBER) into :b0  from H_DEPT where H_DE\
PT_NUMBER=:b1";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )282;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.sqlpfmem = (unsigned int  )0;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)4352;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)&h_dept_num_check;
  sqlstm.sqhstl[0] = (unsigned int  )8;
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)0;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (         void  *)h_dept_num;
  sqlstm.sqhstl[1] = (unsigned int  )6;
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         void  *)0;
  sqlstm.sqinds[1] = (         int  )0;
  sqlstm.sqharm[1] = (unsigned int  )0;
  sqlstm.sqadto[1] = (unsigned short )0;
  sqlstm.sqtdso[1] = (unsigned short )0;
  sqlstm.sqphsv = sqlstm.sqhstv;
  sqlstm.sqphsl = sqlstm.sqhstl;
  sqlstm.sqphss = sqlstm.sqhsts;
  sqlstm.sqpind = sqlstm.sqindv;
  sqlstm.sqpins = sqlstm.sqinds;
  sqlstm.sqparm = sqlstm.sqharm;
  sqlstm.sqparc = sqlstm.sqharc;
  sqlstm.sqpadto = sqlstm.sqadto;
  sqlstm.sqptdso = sqlstm.sqtdso;
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
  if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}


		
		if (strcmp(h_dept_num_check.arr, h_dept_num) == 0)
		{
			gotoxy(33,20);
			printf("일치하는 부서 번호가 있습니다.");
			gotoxy(33,22);
			printf("재 입력해 주세요.");
			getch();
			system("cls");

		}
		else
		{
			/* 부서 이름 판별 SQL 문장*/
			/* EXEC SQL SELECT TRIM(H_DEPT_NAME)
			into :h_dept_n_check
			from H_DEPT
			where H_DEPT_NAME = :h_dept_n; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 5;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "select trim(H_DEPT_NAME) into :b0  from H_DEPT where H_DEP\
T_NAME=:b1";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )305;
   sqlstm.selerr = (unsigned short)1;
   sqlstm.sqlpfmem = (unsigned int  )0;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlstm.sqhstv[0] = (         void  *)&h_dept_n_check;
   sqlstm.sqhstl[0] = (unsigned int  )257;
   sqlstm.sqhsts[0] = (         int  )0;
   sqlstm.sqindv[0] = (         void  *)0;
   sqlstm.sqinds[0] = (         int  )0;
   sqlstm.sqharm[0] = (unsigned int  )0;
   sqlstm.sqadto[0] = (unsigned short )0;
   sqlstm.sqtdso[0] = (unsigned short )0;
   sqlstm.sqhstv[1] = (         void  *)&h_dept_n;
   sqlstm.sqhstl[1] = (unsigned int  )257;
   sqlstm.sqhsts[1] = (         int  )0;
   sqlstm.sqindv[1] = (         void  *)0;
   sqlstm.sqinds[1] = (         int  )0;
   sqlstm.sqharm[1] = (unsigned int  )0;
   sqlstm.sqadto[1] = (unsigned short )0;
   sqlstm.sqtdso[1] = (unsigned short )0;
   sqlstm.sqphsv = sqlstm.sqhstv;
   sqlstm.sqphsl = sqlstm.sqhstl;
   sqlstm.sqphss = sqlstm.sqhsts;
   sqlstm.sqpind = sqlstm.sqindv;
   sqlstm.sqpins = sqlstm.sqinds;
   sqlstm.sqparm = sqlstm.sqharm;
   sqlstm.sqparc = sqlstm.sqharc;
   sqlstm.sqpadto = sqlstm.sqadto;
   sqlstm.sqptdso = sqlstm.sqtdso;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
   if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}



			if (strcmp(h_dept_n_check.arr, h_dept_n.arr) == 0)
			{
				gotoxy(33,20);
				printf("일치하는 부서 이름이 있습니다.");
				gotoxy(33,22);
				printf("재 입력해 주세요.");
				getch();
				system("cls");
			}
			else
			{
				 /* 실행시킬 SQL 문장*/
    				/* EXEC SQL INSERT INTO h_dept (h_dept_number, h_dept_name)
    				VALUES(:h_dept_num, :h_dept_n); */ 

{
        struct sqlexd sqlstm;
        sqlstm.sqlvsn = 13;
        sqlstm.arrsiz = 5;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.stmt = "insert into h_dept (h_dept_number,h_dept_name) values\
 (:b0,:b1)";
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )328;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)4352;
        sqlstm.occurs = (unsigned int  )0;
        sqlstm.sqhstv[0] = (         void  *)h_dept_num;
        sqlstm.sqhstl[0] = (unsigned int  )6;
        sqlstm.sqhsts[0] = (         int  )0;
        sqlstm.sqindv[0] = (         void  *)0;
        sqlstm.sqinds[0] = (         int  )0;
        sqlstm.sqharm[0] = (unsigned int  )0;
        sqlstm.sqadto[0] = (unsigned short )0;
        sqlstm.sqtdso[0] = (unsigned short )0;
        sqlstm.sqhstv[1] = (         void  *)&h_dept_n;
        sqlstm.sqhstl[1] = (unsigned int  )257;
        sqlstm.sqhsts[1] = (         int  )0;
        sqlstm.sqindv[1] = (         void  *)0;
        sqlstm.sqinds[1] = (         int  )0;
        sqlstm.sqharm[1] = (unsigned int  )0;
        sqlstm.sqadto[1] = (unsigned short )0;
        sqlstm.sqtdso[1] = (unsigned short )0;
        sqlstm.sqphsv = sqlstm.sqhstv;
        sqlstm.sqphsl = sqlstm.sqhstl;
        sqlstm.sqphss = sqlstm.sqhsts;
        sqlstm.sqpind = sqlstm.sqindv;
        sqlstm.sqpins = sqlstm.sqinds;
        sqlstm.sqparm = sqlstm.sqharm;
        sqlstm.sqparc = sqlstm.sqharc;
        sqlstm.sqpadto = sqlstm.sqadto;
        sqlstm.sqptdso = sqlstm.sqtdso;
        sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
        if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}



    				/* EXEC SQL COMMIT WORK; */ 

{
        struct sqlexd sqlstm;
        sqlstm.sqlvsn = 13;
        sqlstm.arrsiz = 5;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )351;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)4352;
        sqlstm.occurs = (unsigned int  )0;
        sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
        if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}



				gotoxy(33,20);
				printf("부서가 추가되었습니다.");
					
				break;

				
			}
		}
	}
}


// 의사 계정 수정 함수
void edit_doctor_account2()
{
	while(1)
	{
		/* EXEC SQL BEGIN DECLARE SECTION; */ 

		  char d_num_input[6] = {""};
		  /* varchar d_num_check[6] = {""}; */ 
struct { unsigned short len; unsigned char arr[6]; } d_num_check
 = {""};

		/* EXEC SQL END DECLARE SECTION; */ 


		gotoxy(62,12);
		//수정할 의사 번호를 입력
		scanf("%s", d_num_input);

		/* 의사번호 판별 SQL 문장*/
		/* EXEC SQL SELECT TRIM(doctor_number)
		into :d_num_check
		from h_doctor
		where doctor_number = :d_num_input; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 13;
  sqlstm.arrsiz = 5;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "select trim(doctor_number) into :b0  from h_doctor where do\
ctor_number=:b1";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )366;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.sqlpfmem = (unsigned int  )0;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)4352;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)&d_num_check;
  sqlstm.sqhstl[0] = (unsigned int  )8;
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)0;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (         void  *)d_num_input;
  sqlstm.sqhstl[1] = (unsigned int  )6;
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         void  *)0;
  sqlstm.sqinds[1] = (         int  )0;
  sqlstm.sqharm[1] = (unsigned int  )0;
  sqlstm.sqadto[1] = (unsigned short )0;
  sqlstm.sqtdso[1] = (unsigned short )0;
  sqlstm.sqphsv = sqlstm.sqhstv;
  sqlstm.sqphsl = sqlstm.sqhstl;
  sqlstm.sqphss = sqlstm.sqhsts;
  sqlstm.sqpind = sqlstm.sqindv;
  sqlstm.sqpins = sqlstm.sqinds;
  sqlstm.sqparm = sqlstm.sqharm;
  sqlstm.sqparc = sqlstm.sqharc;
  sqlstm.sqpadto = sqlstm.sqadto;
  sqlstm.sqptdso = sqlstm.sqtdso;
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
  if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}



		if (strcmp(d_num_check.arr, d_num_input) == 0)
		{
			while(1)
			{
				system("mode con cols=125 lines=40");
				system("cls");
				printf("\n");
				print_screen("edit_doctor_account2.txt");

				/* EXEC SQL BEGIN DECLARE SECTION; */ 

				  /* varchar d_name_edit[255]={""}; */ 
struct { unsigned short len; unsigned char arr[255]; } d_name_edit
 = {""};

				  /* varchar d_position_edit[255]={""}; */ 
struct { unsigned short len; unsigned char arr[255]; } d_position_edit
 = {""};

				  char d_deptno_edit[6]={""};
				  /* varchar d_deptno_edit_check[6]={""}; */ 
struct { unsigned short len; unsigned char arr[6]; } d_deptno_edit_check
 = {""};

				/* EXEC SQL END DECLARE SECTION; */ 


				gotoxy(71,15);
				//수정할 의사 이름을 입력
				scanf("%s", d_name_edit.arr);
   
   				gotoxy(71,17);
   				//수정할 의사 직급을 입력
    				scanf("%s", d_position_edit.arr);
	
   				gotoxy(76,19);
   				//수정할 의사 부서 번호를 입력
    				scanf("%s", d_deptno_edit);

   				d_name_edit.len = strlen(d_name_edit.arr);
   				d_position_edit.len = strlen(d_position_edit.arr);

				/* 부서번호 판별 SQL 문장*/
				/* EXEC SQL SELECT TRIM(H_DEPT_NUMBER)
				into :d_deptno_edit_check
				from H_DEPT
				where H_DEPT_NUMBER = :d_deptno_edit; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 5;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "select trim(H_DEPT_NUMBER) into :b0  from H_DEPT where H_\
DEPT_NUMBER=:b1";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )389;
    sqlstm.selerr = (unsigned short)1;
    sqlstm.sqlpfmem = (unsigned int  )0;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqhstv[0] = (         void  *)&d_deptno_edit_check;
    sqlstm.sqhstl[0] = (unsigned int  )8;
    sqlstm.sqhsts[0] = (         int  )0;
    sqlstm.sqindv[0] = (         void  *)0;
    sqlstm.sqinds[0] = (         int  )0;
    sqlstm.sqharm[0] = (unsigned int  )0;
    sqlstm.sqadto[0] = (unsigned short )0;
    sqlstm.sqtdso[0] = (unsigned short )0;
    sqlstm.sqhstv[1] = (         void  *)d_deptno_edit;
    sqlstm.sqhstl[1] = (unsigned int  )6;
    sqlstm.sqhsts[1] = (         int  )0;
    sqlstm.sqindv[1] = (         void  *)0;
    sqlstm.sqinds[1] = (         int  )0;
    sqlstm.sqharm[1] = (unsigned int  )0;
    sqlstm.sqadto[1] = (unsigned short )0;
    sqlstm.sqtdso[1] = (unsigned short )0;
    sqlstm.sqphsv = sqlstm.sqhstv;
    sqlstm.sqphsl = sqlstm.sqhstl;
    sqlstm.sqphss = sqlstm.sqhsts;
    sqlstm.sqpind = sqlstm.sqindv;
    sqlstm.sqpins = sqlstm.sqinds;
    sqlstm.sqparm = sqlstm.sqharm;
    sqlstm.sqparc = sqlstm.sqharc;
    sqlstm.sqpadto = sqlstm.sqadto;
    sqlstm.sqptdso = sqlstm.sqtdso;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
    if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}



				if (strcmp(d_deptno_edit_check.arr, d_deptno_edit) == 0)
				{
 					/* 실행시킬 SQL 문장*/
					/* EXEC SQL UPDATE h_doctor 
					SET doctor_name = :d_name_edit, doctor_position = :d_position_edit, doctor_deptno = :d_deptno_edit
					WHERE doctor_number = :d_num_input; */ 

{
     struct sqlexd sqlstm;
     sqlstm.sqlvsn = 13;
     sqlstm.arrsiz = 5;
     sqlstm.sqladtp = &sqladt;
     sqlstm.sqltdsp = &sqltds;
     sqlstm.stmt = "update h_doctor  set doctor_name=:b0,doctor_position=:b1\
,doctor_deptno=:b2 where doctor_number=:b3";
     sqlstm.iters = (unsigned int  )1;
     sqlstm.offset = (unsigned int  )412;
     sqlstm.cud = sqlcud0;
     sqlstm.sqlest = (unsigned char  *)&sqlca;
     sqlstm.sqlety = (unsigned short)4352;
     sqlstm.occurs = (unsigned int  )0;
     sqlstm.sqhstv[0] = (         void  *)&d_name_edit;
     sqlstm.sqhstl[0] = (unsigned int  )257;
     sqlstm.sqhsts[0] = (         int  )0;
     sqlstm.sqindv[0] = (         void  *)0;
     sqlstm.sqinds[0] = (         int  )0;
     sqlstm.sqharm[0] = (unsigned int  )0;
     sqlstm.sqadto[0] = (unsigned short )0;
     sqlstm.sqtdso[0] = (unsigned short )0;
     sqlstm.sqhstv[1] = (         void  *)&d_position_edit;
     sqlstm.sqhstl[1] = (unsigned int  )257;
     sqlstm.sqhsts[1] = (         int  )0;
     sqlstm.sqindv[1] = (         void  *)0;
     sqlstm.sqinds[1] = (         int  )0;
     sqlstm.sqharm[1] = (unsigned int  )0;
     sqlstm.sqadto[1] = (unsigned short )0;
     sqlstm.sqtdso[1] = (unsigned short )0;
     sqlstm.sqhstv[2] = (         void  *)d_deptno_edit;
     sqlstm.sqhstl[2] = (unsigned int  )6;
     sqlstm.sqhsts[2] = (         int  )0;
     sqlstm.sqindv[2] = (         void  *)0;
     sqlstm.sqinds[2] = (         int  )0;
     sqlstm.sqharm[2] = (unsigned int  )0;
     sqlstm.sqadto[2] = (unsigned short )0;
     sqlstm.sqtdso[2] = (unsigned short )0;
     sqlstm.sqhstv[3] = (         void  *)d_num_input;
     sqlstm.sqhstl[3] = (unsigned int  )6;
     sqlstm.sqhsts[3] = (         int  )0;
     sqlstm.sqindv[3] = (         void  *)0;
     sqlstm.sqinds[3] = (         int  )0;
     sqlstm.sqharm[3] = (unsigned int  )0;
     sqlstm.sqadto[3] = (unsigned short )0;
     sqlstm.sqtdso[3] = (unsigned short )0;
     sqlstm.sqphsv = sqlstm.sqhstv;
     sqlstm.sqphsl = sqlstm.sqhstl;
     sqlstm.sqphss = sqlstm.sqhsts;
     sqlstm.sqpind = sqlstm.sqindv;
     sqlstm.sqpins = sqlstm.sqinds;
     sqlstm.sqparm = sqlstm.sqharm;
     sqlstm.sqparc = sqlstm.sqharc;
     sqlstm.sqpadto = sqlstm.sqadto;
     sqlstm.sqptdso = sqlstm.sqtdso;
     sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
     if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}



					/* EXEC SQL COMMIT WORK; */ 

{
     struct sqlexd sqlstm;
     sqlstm.sqlvsn = 13;
     sqlstm.arrsiz = 5;
     sqlstm.sqladtp = &sqladt;
     sqlstm.sqltdsp = &sqltds;
     sqlstm.iters = (unsigned int  )1;
     sqlstm.offset = (unsigned int  )443;
     sqlstm.cud = sqlcud0;
     sqlstm.sqlest = (unsigned char  *)&sqlca;
     sqlstm.sqlety = (unsigned short)4352;
     sqlstm.occurs = (unsigned int  )0;
     sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
     if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}



					gotoxy(44,28);
					printf("의사 계정이 수정되었습니다.");
					getch();	
					break;
				}
				else
				{
					gotoxy(44,28);
					printf("일치하는 부서 번호가 없습니다.");

					gotoxy(44,30);
					printf("재 입력해 주세요.");

					getch();
					system("cls");
				}
			}
			break;
		}
		else
		{
			gotoxy(5,37);
			printf("일치하는 의사 번호가 없습니다. 재 입력해 주세요.");

			getch();
			system("cls");
			edit_doctor_account();
		}
	}
}


// 간호사 계정 수정 함수
void edit_nurse_account2()
{
	while(1)
	{
		/* EXEC SQL BEGIN DECLARE SECTION; */ 

		  char n_num_input[6] = {""};
		  /* varchar n_num_check[6] = {""}; */ 
struct { unsigned short len; unsigned char arr[6]; } n_num_check
 = {""};

		/* EXEC SQL END DECLARE SECTION; */ 


		gotoxy(62,12);
		//수정할 간호사 번호를 입력
		scanf("%s", n_num_input);

		/* 간호사 번호 판별 SQL 문장*/
		/* EXEC SQL SELECT TRIM(nurse_number)
		into :n_num_check
		from h_nurse
		where nurse_number = :n_num_input; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 13;
  sqlstm.arrsiz = 5;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "select trim(nurse_number) into :b0  from h_nurse where nurs\
e_number=:b1";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )458;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.sqlpfmem = (unsigned int  )0;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)4352;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)&n_num_check;
  sqlstm.sqhstl[0] = (unsigned int  )8;
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)0;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (         void  *)n_num_input;
  sqlstm.sqhstl[1] = (unsigned int  )6;
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         void  *)0;
  sqlstm.sqinds[1] = (         int  )0;
  sqlstm.sqharm[1] = (unsigned int  )0;
  sqlstm.sqadto[1] = (unsigned short )0;
  sqlstm.sqtdso[1] = (unsigned short )0;
  sqlstm.sqphsv = sqlstm.sqhstv;
  sqlstm.sqphsl = sqlstm.sqhstl;
  sqlstm.sqphss = sqlstm.sqhsts;
  sqlstm.sqpind = sqlstm.sqindv;
  sqlstm.sqpins = sqlstm.sqinds;
  sqlstm.sqparm = sqlstm.sqharm;
  sqlstm.sqparc = sqlstm.sqharc;
  sqlstm.sqpadto = sqlstm.sqadto;
  sqlstm.sqptdso = sqlstm.sqtdso;
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
  if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}



		if (strcmp(n_num_check.arr, n_num_input) == 0)
		{
	
			while(1)
			{
				system("cls");
				printf("\n");
				print_screen("edit_nurse_account2.txt");

				/* EXEC SQL BEGIN DECLARE SECTION; */ 

				  /* varchar n_name_edit[255]={""}; */ 
struct { unsigned short len; unsigned char arr[255]; } n_name_edit
 = {""};

				  /* varchar n_position_edit[255]={""}; */ 
struct { unsigned short len; unsigned char arr[255]; } n_position_edit
 = {""};

				  char n_deptno_edit[6]={""};
				  /* varchar n_deptno_edit_check[6]={""}; */ 
struct { unsigned short len; unsigned char arr[6]; } n_deptno_edit_check
 = {""};

				/* EXEC SQL END DECLARE SECTION; */ 


				gotoxy(73,15);
				//수정할 간호사 이름을 입력
				scanf("%s", n_name_edit.arr);
   
   				gotoxy(73,17);
   				//수정할 간호사 직급을 입력
    				scanf("%s", n_position_edit.arr);

   				gotoxy(78,19);
   				//수정할 간호사 부서 번호를 입력
    				scanf("%s", n_deptno_edit);

   				n_name_edit.len = strlen(n_name_edit.arr);
   				n_position_edit.len = strlen(n_position_edit.arr);

				/* 부서번호 판별 SQL 문장*/
				/* EXEC SQL SELECT TRIM(H_DEPT_NUMBER)
				into :n_deptno_edit_check
				from H_DEPT
				where H_DEPT_NUMBER = :n_deptno_edit; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 5;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "select trim(H_DEPT_NUMBER) into :b0  from H_DEPT where H_\
DEPT_NUMBER=:b1";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )481;
    sqlstm.selerr = (unsigned short)1;
    sqlstm.sqlpfmem = (unsigned int  )0;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqhstv[0] = (         void  *)&n_deptno_edit_check;
    sqlstm.sqhstl[0] = (unsigned int  )8;
    sqlstm.sqhsts[0] = (         int  )0;
    sqlstm.sqindv[0] = (         void  *)0;
    sqlstm.sqinds[0] = (         int  )0;
    sqlstm.sqharm[0] = (unsigned int  )0;
    sqlstm.sqadto[0] = (unsigned short )0;
    sqlstm.sqtdso[0] = (unsigned short )0;
    sqlstm.sqhstv[1] = (         void  *)n_deptno_edit;
    sqlstm.sqhstl[1] = (unsigned int  )6;
    sqlstm.sqhsts[1] = (         int  )0;
    sqlstm.sqindv[1] = (         void  *)0;
    sqlstm.sqinds[1] = (         int  )0;
    sqlstm.sqharm[1] = (unsigned int  )0;
    sqlstm.sqadto[1] = (unsigned short )0;
    sqlstm.sqtdso[1] = (unsigned short )0;
    sqlstm.sqphsv = sqlstm.sqhstv;
    sqlstm.sqphsl = sqlstm.sqhstl;
    sqlstm.sqphss = sqlstm.sqhsts;
    sqlstm.sqpind = sqlstm.sqindv;
    sqlstm.sqpins = sqlstm.sqinds;
    sqlstm.sqparm = sqlstm.sqharm;
    sqlstm.sqparc = sqlstm.sqharc;
    sqlstm.sqpadto = sqlstm.sqadto;
    sqlstm.sqptdso = sqlstm.sqtdso;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
    if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}



				if (strcmp(n_deptno_edit_check.arr, n_deptno_edit) == 0)
				{
 					/* 실행시킬 SQL 문장*/
					/* EXEC SQL UPDATE h_nurse
					SET nurse_name = :n_name_edit, nurse_position = :n_position_edit, nurse_deptno = :n_deptno_edit
					WHERE nurse_number = :n_num_input; */ 

{
     struct sqlexd sqlstm;
     sqlstm.sqlvsn = 13;
     sqlstm.arrsiz = 5;
     sqlstm.sqladtp = &sqladt;
     sqlstm.sqltdsp = &sqltds;
     sqlstm.stmt = "update h_nurse  set nurse_name=:b0,nurse_position=:b1,nu\
rse_deptno=:b2 where nurse_number=:b3";
     sqlstm.iters = (unsigned int  )1;
     sqlstm.offset = (unsigned int  )504;
     sqlstm.cud = sqlcud0;
     sqlstm.sqlest = (unsigned char  *)&sqlca;
     sqlstm.sqlety = (unsigned short)4352;
     sqlstm.occurs = (unsigned int  )0;
     sqlstm.sqhstv[0] = (         void  *)&n_name_edit;
     sqlstm.sqhstl[0] = (unsigned int  )257;
     sqlstm.sqhsts[0] = (         int  )0;
     sqlstm.sqindv[0] = (         void  *)0;
     sqlstm.sqinds[0] = (         int  )0;
     sqlstm.sqharm[0] = (unsigned int  )0;
     sqlstm.sqadto[0] = (unsigned short )0;
     sqlstm.sqtdso[0] = (unsigned short )0;
     sqlstm.sqhstv[1] = (         void  *)&n_position_edit;
     sqlstm.sqhstl[1] = (unsigned int  )257;
     sqlstm.sqhsts[1] = (         int  )0;
     sqlstm.sqindv[1] = (         void  *)0;
     sqlstm.sqinds[1] = (         int  )0;
     sqlstm.sqharm[1] = (unsigned int  )0;
     sqlstm.sqadto[1] = (unsigned short )0;
     sqlstm.sqtdso[1] = (unsigned short )0;
     sqlstm.sqhstv[2] = (         void  *)n_deptno_edit;
     sqlstm.sqhstl[2] = (unsigned int  )6;
     sqlstm.sqhsts[2] = (         int  )0;
     sqlstm.sqindv[2] = (         void  *)0;
     sqlstm.sqinds[2] = (         int  )0;
     sqlstm.sqharm[2] = (unsigned int  )0;
     sqlstm.sqadto[2] = (unsigned short )0;
     sqlstm.sqtdso[2] = (unsigned short )0;
     sqlstm.sqhstv[3] = (         void  *)n_num_input;
     sqlstm.sqhstl[3] = (unsigned int  )6;
     sqlstm.sqhsts[3] = (         int  )0;
     sqlstm.sqindv[3] = (         void  *)0;
     sqlstm.sqinds[3] = (         int  )0;
     sqlstm.sqharm[3] = (unsigned int  )0;
     sqlstm.sqadto[3] = (unsigned short )0;
     sqlstm.sqtdso[3] = (unsigned short )0;
     sqlstm.sqphsv = sqlstm.sqhstv;
     sqlstm.sqphsl = sqlstm.sqhstl;
     sqlstm.sqphss = sqlstm.sqhsts;
     sqlstm.sqpind = sqlstm.sqindv;
     sqlstm.sqpins = sqlstm.sqinds;
     sqlstm.sqparm = sqlstm.sqharm;
     sqlstm.sqparc = sqlstm.sqharc;
     sqlstm.sqpadto = sqlstm.sqadto;
     sqlstm.sqptdso = sqlstm.sqtdso;
     sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
     if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}



					/* EXEC SQL COMMIT WORK; */ 

{
     struct sqlexd sqlstm;
     sqlstm.sqlvsn = 13;
     sqlstm.arrsiz = 5;
     sqlstm.sqladtp = &sqladt;
     sqlstm.sqltdsp = &sqltds;
     sqlstm.iters = (unsigned int  )1;
     sqlstm.offset = (unsigned int  )535;
     sqlstm.cud = sqlcud0;
     sqlstm.sqlest = (unsigned char  *)&sqlca;
     sqlstm.sqlety = (unsigned short)4352;
     sqlstm.occurs = (unsigned int  )0;
     sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
     if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}



					gotoxy(44,28);
					printf("간호사 계정이 수정되었습니다.");
					//getch();	
					break;
				}
				else
				{
					gotoxy(44,28);
					printf("일치하는 부서 번호가 없습니다.");
					gotoxy(44,30);
					printf("재 입력해 주세요.");
					getch();
					system("cls");
				}
			}	
			break;
		}
		else
		{
			gotoxy(5,37);
			printf("일치하는 간호사 번호가 없습니다. 재 입력해 주세요.");
			getch();
			system("cls");
			edit_nurse_account();
		}
	}
}


// 부서 삭제 함수
void delete_department2()
{
	while(1)
	{
		/* EXEC SQL BEGIN DECLARE SECTION; */ 

		  char h_dept_num_input[6] = {""};
		  /* varchar h_dept_num_input_check[6]={""}; */ 
struct { unsigned short len; unsigned char arr[6]; } h_dept_num_input_check
 = {""};

		  /* varchar count1[6] = {""}; */ 
struct { unsigned short len; unsigned char arr[6]; } count1
 = {""};

		  /* varchar count2[6] = {""}; */ 
struct { unsigned short len; unsigned char arr[6]; } count2
 = {""};

		/* EXEC SQL END DECLARE SECTION; */ 


		gotoxy(61,12);
		//삭제할 부서 번호를 입력
		scanf("%s", h_dept_num_input);

		/* EXEC SQL WHENEVER SQLERROR DO printf(""); */ 


		/* 부서 번호 의사 사용여부 판별 SQL 문장*/
		/* EXEC SQL SELECT TRIM(doctor_deptno)
		into :count1
		from h_doctor
		where doctor_deptno = :h_dept_num_input; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 13;
  sqlstm.arrsiz = 5;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "select trim(doctor_deptno) into :b0  from h_doctor where do\
ctor_deptno=:b1";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )550;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.sqlpfmem = (unsigned int  )0;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)4352;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)&count1;
  sqlstm.sqhstl[0] = (unsigned int  )8;
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)0;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (         void  *)h_dept_num_input;
  sqlstm.sqhstl[1] = (unsigned int  )6;
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         void  *)0;
  sqlstm.sqinds[1] = (         int  )0;
  sqlstm.sqharm[1] = (unsigned int  )0;
  sqlstm.sqadto[1] = (unsigned short )0;
  sqlstm.sqtdso[1] = (unsigned short )0;
  sqlstm.sqphsv = sqlstm.sqhstv;
  sqlstm.sqphsl = sqlstm.sqhstl;
  sqlstm.sqphss = sqlstm.sqhsts;
  sqlstm.sqpind = sqlstm.sqindv;
  sqlstm.sqpins = sqlstm.sqinds;
  sqlstm.sqparm = sqlstm.sqharm;
  sqlstm.sqparc = sqlstm.sqharc;
  sqlstm.sqpadto = sqlstm.sqadto;
  sqlstm.sqptdso = sqlstm.sqtdso;
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
  if (sqlca.sqlcode < 0) printf("");
}



		/* 부서 번호 간호사 사용여부 판별 SQL 문장*/
		/* EXEC SQL SELECT TRIM(nurse_deptno)
		into :count2
		from h_nurse
		where nurse_deptno = :h_dept_num_input; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 13;
  sqlstm.arrsiz = 5;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "select trim(nurse_deptno) into :b0  from h_nurse where nurs\
e_deptno=:b1";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )573;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.sqlpfmem = (unsigned int  )0;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)4352;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)&count2;
  sqlstm.sqhstl[0] = (unsigned int  )8;
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)0;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (         void  *)h_dept_num_input;
  sqlstm.sqhstl[1] = (unsigned int  )6;
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         void  *)0;
  sqlstm.sqinds[1] = (         int  )0;
  sqlstm.sqharm[1] = (unsigned int  )0;
  sqlstm.sqadto[1] = (unsigned short )0;
  sqlstm.sqtdso[1] = (unsigned short )0;
  sqlstm.sqphsv = sqlstm.sqhstv;
  sqlstm.sqphsl = sqlstm.sqhstl;
  sqlstm.sqphss = sqlstm.sqhsts;
  sqlstm.sqpind = sqlstm.sqindv;
  sqlstm.sqpins = sqlstm.sqinds;
  sqlstm.sqparm = sqlstm.sqharm;
  sqlstm.sqparc = sqlstm.sqharc;
  sqlstm.sqpadto = sqlstm.sqadto;
  sqlstm.sqptdso = sqlstm.sqtdso;
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
  if (sqlca.sqlcode < 0) printf("");
}



		/* 부서 번호 판별 SQL 문장*/
		/* EXEC SQL SELECT TRIM(h_dept_number)
		into :h_dept_num_input_check
		from h_dept
		where h_dept_number = :h_dept_num_input; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 13;
  sqlstm.arrsiz = 5;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "select trim(h_dept_number) into :b0  from h_dept where h_de\
pt_number=:b1";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )596;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.sqlpfmem = (unsigned int  )0;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)4352;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)&h_dept_num_input_check;
  sqlstm.sqhstl[0] = (unsigned int  )8;
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)0;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (         void  *)h_dept_num_input;
  sqlstm.sqhstl[1] = (unsigned int  )6;
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         void  *)0;
  sqlstm.sqinds[1] = (         int  )0;
  sqlstm.sqharm[1] = (unsigned int  )0;
  sqlstm.sqadto[1] = (unsigned short )0;
  sqlstm.sqtdso[1] = (unsigned short )0;
  sqlstm.sqphsv = sqlstm.sqhstv;
  sqlstm.sqphsl = sqlstm.sqhstl;
  sqlstm.sqphss = sqlstm.sqhsts;
  sqlstm.sqpind = sqlstm.sqindv;
  sqlstm.sqpins = sqlstm.sqinds;
  sqlstm.sqparm = sqlstm.sqharm;
  sqlstm.sqparc = sqlstm.sqharc;
  sqlstm.sqpadto = sqlstm.sqadto;
  sqlstm.sqptdso = sqlstm.sqtdso;
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
  if (sqlca.sqlcode < 0) printf("");
}


		
		if (strcmp(h_dept_num_input_check.arr, h_dept_num_input) == 0)
		{

			if (strcmp(count1.arr, h_dept_num_input) == 0 || strcmp(count2.arr, h_dept_num_input) == 0)
			{
				gotoxy(5,37);
				printf("부서를 사용하고 있습니다. 사용중인 부서를 변경 후 삭제해주세요.");

				getch();
				system("cls");
				delete_department();
			}
			else
			{
 				/* 실행시킬 SQL 문장*/
				/* EXEC SQL DELETE FROM h_dept
				WHERE h_dept_number = :h_dept_num_input; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 5;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "delete  from h_dept  where h_dept_number=:b0";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )619;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqhstv[0] = (         void  *)h_dept_num_input;
    sqlstm.sqhstl[0] = (unsigned int  )6;
    sqlstm.sqhsts[0] = (         int  )0;
    sqlstm.sqindv[0] = (         void  *)0;
    sqlstm.sqinds[0] = (         int  )0;
    sqlstm.sqharm[0] = (unsigned int  )0;
    sqlstm.sqadto[0] = (unsigned short )0;
    sqlstm.sqtdso[0] = (unsigned short )0;
    sqlstm.sqphsv = sqlstm.sqhstv;
    sqlstm.sqphsl = sqlstm.sqhstl;
    sqlstm.sqphss = sqlstm.sqhsts;
    sqlstm.sqpind = sqlstm.sqindv;
    sqlstm.sqpins = sqlstm.sqinds;
    sqlstm.sqparm = sqlstm.sqharm;
    sqlstm.sqparc = sqlstm.sqharc;
    sqlstm.sqpadto = sqlstm.sqadto;
    sqlstm.sqptdso = sqlstm.sqtdso;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
    if (sqlca.sqlcode < 0) printf("");
}



				/* EXEC SQL COMMIT WORK; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 5;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )638;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
    if (sqlca.sqlcode < 0) printf("");
}



				gotoxy(5,37);
				printf("부서가 삭제되었습니다.               ");
				break;
			}
		}
		else
		{
			gotoxy(5,37);
			printf("일치하는 부서 번호가 없습니다. 재 입력해 주세요.");

			getch();
			system("cls");
			delete_department();
		}
	}
}


// 메인 메뉴 선택 함수
int main_menu()
{
   int choice = 0;   

   print_screen("main_menu.txt");

   gotoxy(54,9);
   //printf(" 메뉴를 선택하세요 : ");
   scanf("%d", &choice);

   return choice;
}


// 환자 관리 메뉴 선택 함수
int patient_management_menu()
{
   int choice = 0;

   print_screen("patient_management_menu.txt");

   gotoxy(54,9);
   //printf(" 환자 관리 메뉴를 선택하세요 : ");
   scanf("%d", &choice);

   return choice;
}


// 병실 관리 메뉴 선택 함수
int room_management_menu()
{
   int choice = 0;

   print_screen("room_management_menu.txt");

   gotoxy(54,9);
   //printf(" 병실 관리 메뉴를 선택하세요 : ");
   scanf("%d", &choice);

   return choice;
}


// 환자 정보 추가 함수
void AddPatient()
{
    system("cls");
    printf("\n");
    /* EXEC SQL WHENEVER SQLERROR DO sql_error("\7ORACLE ERROR:\n"); */ 

    print_screen("insert_patient.txt");

    /* EXEC SQL BEGIN DECLARE SECTION; */ 

        /* VARCHAR p_name[255]={""}; */ 
struct { unsigned short len; unsigned char arr[255]; } p_name
 = {""};

        /* VARCHAR p_hp[255]={""}; */ 
struct { unsigned short len; unsigned char arr[255]; } p_hp
 = {""};

        /* VARCHAR p_rrn[255]={""}; */ 
struct { unsigned short len; unsigned char arr[255]; } p_rrn
 = {""};

        /* VARCHAR p_address[255]={""}; */ 
struct { unsigned short len; unsigned char arr[255]; } p_address
 = {""};

        /* VARCHAR db_name[255]={""}; */ 
struct { unsigned short len; unsigned char arr[255]; } db_name
 = {""};

        char p_room[5]={""};
        char p_pdoc[6]={""};
        int room_max=0;
        int room_now=0;
    /* EXEC SQL END DECLARE SECTION; */ 


    gotoxy(21,13);
    scanf("%s", p_name.arr);    // 환자 이름

    gotoxy(25,15);
    scanf("%s", p_hp.arr);    // 환자 전화번호

    gotoxy(29,17);
    scanf("%s", p_rrn.arr);    // 환자 주민등록번호

    gotoxy(23,19);
    rewind(stdin);
    gets(p_address.arr);

    gotoxy(21,21);
    scanf("%s", p_room);    // 배정 병실

    gotoxy(21,23);
    scanf("%s", p_pdoc);    // 담당 의사

    p_name.len = strlen(p_name.arr);
    p_hp.len = strlen(p_hp.arr);
    p_rrn.len = strlen(p_rrn.arr);
    p_address.len = strlen(p_address.arr);

    /* EXEC SQL SELECT room_max, room_now
    INTO :room_max, :room_now
    FROM h_room
    WHERE room_number = :p_room; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 5;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "select room_max ,room_now into :b0,:b1  from h_room where\
 room_number=:b2";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )653;
    sqlstm.selerr = (unsigned short)1;
    sqlstm.sqlpfmem = (unsigned int  )0;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqhstv[0] = (         void  *)&room_max;
    sqlstm.sqhstl[0] = (unsigned int  )sizeof(int);
    sqlstm.sqhsts[0] = (         int  )0;
    sqlstm.sqindv[0] = (         void  *)0;
    sqlstm.sqinds[0] = (         int  )0;
    sqlstm.sqharm[0] = (unsigned int  )0;
    sqlstm.sqadto[0] = (unsigned short )0;
    sqlstm.sqtdso[0] = (unsigned short )0;
    sqlstm.sqhstv[1] = (         void  *)&room_now;
    sqlstm.sqhstl[1] = (unsigned int  )sizeof(int);
    sqlstm.sqhsts[1] = (         int  )0;
    sqlstm.sqindv[1] = (         void  *)0;
    sqlstm.sqinds[1] = (         int  )0;
    sqlstm.sqharm[1] = (unsigned int  )0;
    sqlstm.sqadto[1] = (unsigned short )0;
    sqlstm.sqtdso[1] = (unsigned short )0;
    sqlstm.sqhstv[2] = (         void  *)p_room;
    sqlstm.sqhstl[2] = (unsigned int  )5;
    sqlstm.sqhsts[2] = (         int  )0;
    sqlstm.sqindv[2] = (         void  *)0;
    sqlstm.sqinds[2] = (         int  )0;
    sqlstm.sqharm[2] = (unsigned int  )0;
    sqlstm.sqadto[2] = (unsigned short )0;
    sqlstm.sqtdso[2] = (unsigned short )0;
    sqlstm.sqphsv = sqlstm.sqhstv;
    sqlstm.sqphsl = sqlstm.sqhstl;
    sqlstm.sqphss = sqlstm.sqhsts;
    sqlstm.sqpind = sqlstm.sqindv;
    sqlstm.sqpins = sqlstm.sqinds;
    sqlstm.sqparm = sqlstm.sqharm;
    sqlstm.sqparc = sqlstm.sqharc;
    sqlstm.sqpadto = sqlstm.sqadto;
    sqlstm.sqptdso = sqlstm.sqtdso;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
    if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}


    
    if (sqlca.sqlcode == 1403) {
        gotoxy(9, 26);
        printf("존재하지 않는 병실.");
    }else{
        if(room_max>room_now){
            /* EXEC SQL WHENEVER SQLERROR CONTINUE; */ 

            /* EXEC SQL INSERT INTO h_patient (patient_number, patient_name, patient_hp, patient_rrn, patient_address, patient_roomnum, patient_pdoc, patient_enter_date)
            VALUES('P'||PATIENT_SEQ.NEXTVAL, :p_name, :p_hp, :p_rrn, :p_address, :p_room, :p_pdoc, sysdate); */ 

{
            struct sqlexd sqlstm;
            sqlstm.sqlvsn = 13;
            sqlstm.arrsiz = 6;
            sqlstm.sqladtp = &sqladt;
            sqlstm.sqltdsp = &sqltds;
            sqlstm.stmt = "insert into h_patient (patient_number,patient_nam\
e,patient_hp,patient_rrn,patient_address,patient_roomnum,patient_pdoc,patient_\
enter_date) values (('P'||PATIENT_SEQ.nextval ),:b0,:b1,:b2,:b3,:b4,:b5,sysdat\
e)";
            sqlstm.iters = (unsigned int  )1;
            sqlstm.offset = (unsigned int  )680;
            sqlstm.cud = sqlcud0;
            sqlstm.sqlest = (unsigned char  *)&sqlca;
            sqlstm.sqlety = (unsigned short)4352;
            sqlstm.occurs = (unsigned int  )0;
            sqlstm.sqhstv[0] = (         void  *)&p_name;
            sqlstm.sqhstl[0] = (unsigned int  )257;
            sqlstm.sqhsts[0] = (         int  )0;
            sqlstm.sqindv[0] = (         void  *)0;
            sqlstm.sqinds[0] = (         int  )0;
            sqlstm.sqharm[0] = (unsigned int  )0;
            sqlstm.sqadto[0] = (unsigned short )0;
            sqlstm.sqtdso[0] = (unsigned short )0;
            sqlstm.sqhstv[1] = (         void  *)&p_hp;
            sqlstm.sqhstl[1] = (unsigned int  )257;
            sqlstm.sqhsts[1] = (         int  )0;
            sqlstm.sqindv[1] = (         void  *)0;
            sqlstm.sqinds[1] = (         int  )0;
            sqlstm.sqharm[1] = (unsigned int  )0;
            sqlstm.sqadto[1] = (unsigned short )0;
            sqlstm.sqtdso[1] = (unsigned short )0;
            sqlstm.sqhstv[2] = (         void  *)&p_rrn;
            sqlstm.sqhstl[2] = (unsigned int  )257;
            sqlstm.sqhsts[2] = (         int  )0;
            sqlstm.sqindv[2] = (         void  *)0;
            sqlstm.sqinds[2] = (         int  )0;
            sqlstm.sqharm[2] = (unsigned int  )0;
            sqlstm.sqadto[2] = (unsigned short )0;
            sqlstm.sqtdso[2] = (unsigned short )0;
            sqlstm.sqhstv[3] = (         void  *)&p_address;
            sqlstm.sqhstl[3] = (unsigned int  )257;
            sqlstm.sqhsts[3] = (         int  )0;
            sqlstm.sqindv[3] = (         void  *)0;
            sqlstm.sqinds[3] = (         int  )0;
            sqlstm.sqharm[3] = (unsigned int  )0;
            sqlstm.sqadto[3] = (unsigned short )0;
            sqlstm.sqtdso[3] = (unsigned short )0;
            sqlstm.sqhstv[4] = (         void  *)p_room;
            sqlstm.sqhstl[4] = (unsigned int  )5;
            sqlstm.sqhsts[4] = (         int  )0;
            sqlstm.sqindv[4] = (         void  *)0;
            sqlstm.sqinds[4] = (         int  )0;
            sqlstm.sqharm[4] = (unsigned int  )0;
            sqlstm.sqadto[4] = (unsigned short )0;
            sqlstm.sqtdso[4] = (unsigned short )0;
            sqlstm.sqhstv[5] = (         void  *)p_pdoc;
            sqlstm.sqhstl[5] = (unsigned int  )6;
            sqlstm.sqhsts[5] = (         int  )0;
            sqlstm.sqindv[5] = (         void  *)0;
            sqlstm.sqinds[5] = (         int  )0;
            sqlstm.sqharm[5] = (unsigned int  )0;
            sqlstm.sqadto[5] = (unsigned short )0;
            sqlstm.sqtdso[5] = (unsigned short )0;
            sqlstm.sqphsv = sqlstm.sqhstv;
            sqlstm.sqphsl = sqlstm.sqhstl;
            sqlstm.sqphss = sqlstm.sqhsts;
            sqlstm.sqpind = sqlstm.sqindv;
            sqlstm.sqpins = sqlstm.sqinds;
            sqlstm.sqparm = sqlstm.sqharm;
            sqlstm.sqparc = sqlstm.sqharc;
            sqlstm.sqpadto = sqlstm.sqadto;
            sqlstm.sqptdso = sqlstm.sqtdso;
            sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


            if (sqlca.sqlcode != 0) {
                gotoxy(9, 26);
                printf("이미 존재하는 환자입니다.");
            }else{
                /* EXEC SQL UPDATE h_room
                SET room_now = room_now+1
                WHERE room_number = :p_room; */ 

{
                struct sqlexd sqlstm;
                sqlstm.sqlvsn = 13;
                sqlstm.arrsiz = 6;
                sqlstm.sqladtp = &sqladt;
                sqlstm.sqltdsp = &sqltds;
                sqlstm.stmt = "update h_room  set room_now=(room_now+1) wher\
e room_number=:b0";
                sqlstm.iters = (unsigned int  )1;
                sqlstm.offset = (unsigned int  )719;
                sqlstm.cud = sqlcud0;
                sqlstm.sqlest = (unsigned char  *)&sqlca;
                sqlstm.sqlety = (unsigned short)4352;
                sqlstm.occurs = (unsigned int  )0;
                sqlstm.sqhstv[0] = (         void  *)p_room;
                sqlstm.sqhstl[0] = (unsigned int  )5;
                sqlstm.sqhsts[0] = (         int  )0;
                sqlstm.sqindv[0] = (         void  *)0;
                sqlstm.sqinds[0] = (         int  )0;
                sqlstm.sqharm[0] = (unsigned int  )0;
                sqlstm.sqadto[0] = (unsigned short )0;
                sqlstm.sqtdso[0] = (unsigned short )0;
                sqlstm.sqphsv = sqlstm.sqhstv;
                sqlstm.sqphsl = sqlstm.sqhstl;
                sqlstm.sqphss = sqlstm.sqhsts;
                sqlstm.sqpind = sqlstm.sqindv;
                sqlstm.sqpins = sqlstm.sqinds;
                sqlstm.sqparm = sqlstm.sqharm;
                sqlstm.sqparc = sqlstm.sqharc;
                sqlstm.sqpadto = sqlstm.sqadto;
                sqlstm.sqptdso = sqlstm.sqtdso;
                sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


                /* EXEC SQL COMMIT WORK; */ 

{
                struct sqlexd sqlstm;
                sqlstm.sqlvsn = 13;
                sqlstm.arrsiz = 6;
                sqlstm.sqladtp = &sqladt;
                sqlstm.sqltdsp = &sqltds;
                sqlstm.iters = (unsigned int  )1;
                sqlstm.offset = (unsigned int  )738;
                sqlstm.cud = sqlcud0;
                sqlstm.sqlest = (unsigned char  *)&sqlca;
                sqlstm.sqlety = (unsigned short)4352;
                sqlstm.occurs = (unsigned int  )0;
                sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


            }
        }else{
            gotoxy(9 ,26);
            printf("꽉찬 병실입니다. 다른 병실을 입력해주세요.");
        }
    }
    gotoxy(5, 29);
    printf("계속하려면 아무 키나 누르세요..");
    getch();
}


// 병실 추가 함수
void add_room()
{
    _putenv("NLS_LANG=American_America.KO16KSC5601");

   system("cls");
   printf("\n");
   /* EXEC SQL WHENEVER SQLERROR DO printf(""); */ 

   print_screen("insert_room.txt");

    /* EXEC SQL BEGIN DECLARE SECTION; */ 

        char room_num[5]={""};
        int room_max;
    /* EXEC SQL END DECLARE SECTION; */ 


    gotoxy(21,13);
    scanf("%s", room_num);    // 병실 호수

    gotoxy(26,15);
    scanf("%d", &room_max);    // 병실 최대 인원

    if (room_max < 1)
    {
        gotoxy(9,17);
        printf("※ 추가 불가 ※");
        gotoxy(9,18);
        printf("병실 최대 인원은 1 보다 작을 수 없습니다.");
    }
    else
    {
        /* EXEC SQL INSERT INTO h_room (room_number, room_max, room_now)
        VALUES(:room_num, :room_max, 0); */ 

{
        struct sqlexd sqlstm;
        sqlstm.sqlvsn = 13;
        sqlstm.arrsiz = 6;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.stmt = "insert into h_room (room_number,room_max,room_now) va\
lues (:b0,:b1,0)";
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )753;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)4352;
        sqlstm.occurs = (unsigned int  )0;
        sqlstm.sqhstv[0] = (         void  *)room_num;
        sqlstm.sqhstl[0] = (unsigned int  )5;
        sqlstm.sqhsts[0] = (         int  )0;
        sqlstm.sqindv[0] = (         void  *)0;
        sqlstm.sqinds[0] = (         int  )0;
        sqlstm.sqharm[0] = (unsigned int  )0;
        sqlstm.sqadto[0] = (unsigned short )0;
        sqlstm.sqtdso[0] = (unsigned short )0;
        sqlstm.sqhstv[1] = (         void  *)&room_max;
        sqlstm.sqhstl[1] = (unsigned int  )sizeof(int);
        sqlstm.sqhsts[1] = (         int  )0;
        sqlstm.sqindv[1] = (         void  *)0;
        sqlstm.sqinds[1] = (         int  )0;
        sqlstm.sqharm[1] = (unsigned int  )0;
        sqlstm.sqadto[1] = (unsigned short )0;
        sqlstm.sqtdso[1] = (unsigned short )0;
        sqlstm.sqphsv = sqlstm.sqhstv;
        sqlstm.sqphsl = sqlstm.sqhstl;
        sqlstm.sqphss = sqlstm.sqhsts;
        sqlstm.sqpind = sqlstm.sqindv;
        sqlstm.sqpins = sqlstm.sqinds;
        sqlstm.sqparm = sqlstm.sqharm;
        sqlstm.sqparc = sqlstm.sqharc;
        sqlstm.sqpadto = sqlstm.sqadto;
        sqlstm.sqptdso = sqlstm.sqtdso;
        sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
        if (sqlca.sqlcode < 0) printf("");
}



        if(sqlca.sqlcode == -1)
        {
            gotoxy(9,17);
            printf("※ 추가 불가 ※");
            gotoxy(9,18);
            printf("이미 해당 병실이 있습니다.");
        }
        else
        {
            gotoxy(9,18);
            printf("병실 추가 완료");
        }
    }

    /* EXEC SQL COMMIT WORK; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 6;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )776;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
    if (sqlca.sqlcode < 0) printf("");
}



    gotoxy(5,29);
    printf("계속하려면 아무 키나 누르세요..");
    getch();
}


// 병실 수정 함수
void update_room()
{
    _putenv("NLS_LANG=American_America.KO16KSC5601");

   /* EXEC SQL BEGIN DECLARE SECTION; */ 

      /* varchar r_number[6] = {"no"}; */ 
struct { unsigned short len; unsigned char arr[6]; } r_number
 = {"no"};

      int r_max = 0;
      int r_now = 0;
      char dynstmt[1000] = {""};
      char room_num[6] = {""};
   /* EXEC SQL END DECLARE SECTION; */ 


   system("cls");
   printf("\n");
   /* EXEC SQL WHENEVER SQLERROR DO printf(""); */ 

   print_screen("update_room.txt");

   gotoxy(55,12);
   rewind(stdin);
   gets(room_num);

   /* EXEC SQL SELECT TRIM(room_number), room_max, room_now
      into :r_number, :r_max, :r_now
      from H_ROOM
      where room_number = :room_num; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 6;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "select trim(room_number) ,room_max ,room_now into :b0,:b1,\
:b2  from H_ROOM where room_number=:b3";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )791;
   sqlstm.selerr = (unsigned short)1;
   sqlstm.sqlpfmem = (unsigned int  )0;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlstm.sqhstv[0] = (         void  *)&r_number;
   sqlstm.sqhstl[0] = (unsigned int  )8;
   sqlstm.sqhsts[0] = (         int  )0;
   sqlstm.sqindv[0] = (         void  *)0;
   sqlstm.sqinds[0] = (         int  )0;
   sqlstm.sqharm[0] = (unsigned int  )0;
   sqlstm.sqadto[0] = (unsigned short )0;
   sqlstm.sqtdso[0] = (unsigned short )0;
   sqlstm.sqhstv[1] = (         void  *)&r_max;
   sqlstm.sqhstl[1] = (unsigned int  )sizeof(int);
   sqlstm.sqhsts[1] = (         int  )0;
   sqlstm.sqindv[1] = (         void  *)0;
   sqlstm.sqinds[1] = (         int  )0;
   sqlstm.sqharm[1] = (unsigned int  )0;
   sqlstm.sqadto[1] = (unsigned short )0;
   sqlstm.sqtdso[1] = (unsigned short )0;
   sqlstm.sqhstv[2] = (         void  *)&r_now;
   sqlstm.sqhstl[2] = (unsigned int  )sizeof(int);
   sqlstm.sqhsts[2] = (         int  )0;
   sqlstm.sqindv[2] = (         void  *)0;
   sqlstm.sqinds[2] = (         int  )0;
   sqlstm.sqharm[2] = (unsigned int  )0;
   sqlstm.sqadto[2] = (unsigned short )0;
   sqlstm.sqtdso[2] = (unsigned short )0;
   sqlstm.sqhstv[3] = (         void  *)room_num;
   sqlstm.sqhstl[3] = (unsigned int  )6;
   sqlstm.sqhsts[3] = (         int  )0;
   sqlstm.sqindv[3] = (         void  *)0;
   sqlstm.sqinds[3] = (         int  )0;
   sqlstm.sqharm[3] = (unsigned int  )0;
   sqlstm.sqadto[3] = (unsigned short )0;
   sqlstm.sqtdso[3] = (unsigned short )0;
   sqlstm.sqphsv = sqlstm.sqhstv;
   sqlstm.sqphsl = sqlstm.sqhstl;
   sqlstm.sqphss = sqlstm.sqhsts;
   sqlstm.sqpind = sqlstm.sqindv;
   sqlstm.sqpins = sqlstm.sqinds;
   sqlstm.sqparm = sqlstm.sqharm;
   sqlstm.sqparc = sqlstm.sqharc;
   sqlstm.sqpadto = sqlstm.sqadto;
   sqlstm.sqptdso = sqlstm.sqtdso;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
   if (sqlca.sqlcode < 0) printf("");
}



   if(sqlca.sqlcode==1403)
   {
      gotoxy(38,13);
      printf("※ 없는 병실 호수입니다. ※");
   }
   else
   {
      gotoxy(24, 17);
      printf("%-24s%-22d%d", r_number.arr, r_max, r_now);

      gotoxy(24,25);
      rewind(stdin);
      gets(room_num);

      gotoxy(48,25);
      rewind(stdin);
      scanf("%d", &r_max);

      if(r_max < r_now)
      {
         gotoxy(27,21);
         printf("※ 최대 인원이 현재 인원보다 작을 수 없습니다. ※");
      }
      else
      {
         gotoxy(70,25);
         printf("%d", r_now);

         /* EXEC SQL UPDATE H_ROOM SET ROOM_NUMBER =:room_num, ROOM_MAX =:r_max WHERE ROOM_NUMBER =:r_number; */ 

{
         struct sqlexd sqlstm;
         sqlstm.sqlvsn = 13;
         sqlstm.arrsiz = 6;
         sqlstm.sqladtp = &sqladt;
         sqlstm.sqltdsp = &sqltds;
         sqlstm.stmt = "update H_ROOM  set ROOM_NUMBER=:b0,ROOM_MAX=:b1 wher\
e ROOM_NUMBER=:b2";
         sqlstm.iters = (unsigned int  )1;
         sqlstm.offset = (unsigned int  )822;
         sqlstm.cud = sqlcud0;
         sqlstm.sqlest = (unsigned char  *)&sqlca;
         sqlstm.sqlety = (unsigned short)4352;
         sqlstm.occurs = (unsigned int  )0;
         sqlstm.sqhstv[0] = (         void  *)room_num;
         sqlstm.sqhstl[0] = (unsigned int  )6;
         sqlstm.sqhsts[0] = (         int  )0;
         sqlstm.sqindv[0] = (         void  *)0;
         sqlstm.sqinds[0] = (         int  )0;
         sqlstm.sqharm[0] = (unsigned int  )0;
         sqlstm.sqadto[0] = (unsigned short )0;
         sqlstm.sqtdso[0] = (unsigned short )0;
         sqlstm.sqhstv[1] = (         void  *)&r_max;
         sqlstm.sqhstl[1] = (unsigned int  )sizeof(int);
         sqlstm.sqhsts[1] = (         int  )0;
         sqlstm.sqindv[1] = (         void  *)0;
         sqlstm.sqinds[1] = (         int  )0;
         sqlstm.sqharm[1] = (unsigned int  )0;
         sqlstm.sqadto[1] = (unsigned short )0;
         sqlstm.sqtdso[1] = (unsigned short )0;
         sqlstm.sqhstv[2] = (         void  *)&r_number;
         sqlstm.sqhstl[2] = (unsigned int  )8;
         sqlstm.sqhsts[2] = (         int  )0;
         sqlstm.sqindv[2] = (         void  *)0;
         sqlstm.sqinds[2] = (         int  )0;
         sqlstm.sqharm[2] = (unsigned int  )0;
         sqlstm.sqadto[2] = (unsigned short )0;
         sqlstm.sqtdso[2] = (unsigned short )0;
         sqlstm.sqphsv = sqlstm.sqhstv;
         sqlstm.sqphsl = sqlstm.sqhstl;
         sqlstm.sqphss = sqlstm.sqhsts;
         sqlstm.sqpind = sqlstm.sqindv;
         sqlstm.sqpins = sqlstm.sqinds;
         sqlstm.sqparm = sqlstm.sqharm;
         sqlstm.sqparc = sqlstm.sqharc;
         sqlstm.sqpadto = sqlstm.sqadto;
         sqlstm.sqptdso = sqlstm.sqtdso;
         sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
         if (sqlca.sqlcode < 0) printf("");
}


   
         if(sqlca.sqlcode == -1)
         {
            gotoxy(34,21);
            printf("※ 중복된 병실 호수입니다. ※");
         }
         else
         {
            gotoxy(37,27);
            printf("※ 병실 정보 수정 완료 ※");
         }
      }
   }

   /* EXEC SQL COMMIT WORK; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 6;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )849;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
   if (sqlca.sqlcode < 0) printf("");
}


   gotoxy(5,29);
   printf("계속하려면 아무 키나 누르세요..");
   getch();
}


// 병실 삭제 함수
void delete_room()
{
    _putenv("NLS_LANG=American_America.KO16KSC5601");

   /* EXEC SQL BEGIN DECLARE SECTION; */ 

      /* varchar r_number[6] = {"no"}; */ 
struct { unsigned short len; unsigned char arr[6]; } r_number
 = {"no"};

      int r_max = 0;
      int r_now = 0;
      char dynstmt[1000] = {""};
      char room_num[6] = {""};
   /* EXEC SQL END DECLARE SECTION; */ 


   char check[5] = {"N"};

   system("cls");
   printf("\n");
   /* EXEC SQL WHENEVER SQLERROR DO printf(""); */ 

   print_screen("delete_room.txt");

   gotoxy(55,12);
   rewind(stdin);
   gets(room_num);

   /* EXEC SQL SELECT TRIM(room_number), room_max, room_now
      into :r_number, :r_max, :r_now
      from H_ROOM
      where room_number = :room_num; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 6;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "select trim(room_number) ,room_max ,room_now into :b0,:b1,\
:b2  from H_ROOM where room_number=:b3";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )864;
   sqlstm.selerr = (unsigned short)1;
   sqlstm.sqlpfmem = (unsigned int  )0;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlstm.sqhstv[0] = (         void  *)&r_number;
   sqlstm.sqhstl[0] = (unsigned int  )8;
   sqlstm.sqhsts[0] = (         int  )0;
   sqlstm.sqindv[0] = (         void  *)0;
   sqlstm.sqinds[0] = (         int  )0;
   sqlstm.sqharm[0] = (unsigned int  )0;
   sqlstm.sqadto[0] = (unsigned short )0;
   sqlstm.sqtdso[0] = (unsigned short )0;
   sqlstm.sqhstv[1] = (         void  *)&r_max;
   sqlstm.sqhstl[1] = (unsigned int  )sizeof(int);
   sqlstm.sqhsts[1] = (         int  )0;
   sqlstm.sqindv[1] = (         void  *)0;
   sqlstm.sqinds[1] = (         int  )0;
   sqlstm.sqharm[1] = (unsigned int  )0;
   sqlstm.sqadto[1] = (unsigned short )0;
   sqlstm.sqtdso[1] = (unsigned short )0;
   sqlstm.sqhstv[2] = (         void  *)&r_now;
   sqlstm.sqhstl[2] = (unsigned int  )sizeof(int);
   sqlstm.sqhsts[2] = (         int  )0;
   sqlstm.sqindv[2] = (         void  *)0;
   sqlstm.sqinds[2] = (         int  )0;
   sqlstm.sqharm[2] = (unsigned int  )0;
   sqlstm.sqadto[2] = (unsigned short )0;
   sqlstm.sqtdso[2] = (unsigned short )0;
   sqlstm.sqhstv[3] = (         void  *)room_num;
   sqlstm.sqhstl[3] = (unsigned int  )6;
   sqlstm.sqhsts[3] = (         int  )0;
   sqlstm.sqindv[3] = (         void  *)0;
   sqlstm.sqinds[3] = (         int  )0;
   sqlstm.sqharm[3] = (unsigned int  )0;
   sqlstm.sqadto[3] = (unsigned short )0;
   sqlstm.sqtdso[3] = (unsigned short )0;
   sqlstm.sqphsv = sqlstm.sqhstv;
   sqlstm.sqphsl = sqlstm.sqhstl;
   sqlstm.sqphss = sqlstm.sqhsts;
   sqlstm.sqpind = sqlstm.sqindv;
   sqlstm.sqpins = sqlstm.sqinds;
   sqlstm.sqparm = sqlstm.sqharm;
   sqlstm.sqparc = sqlstm.sqharc;
   sqlstm.sqpadto = sqlstm.sqadto;
   sqlstm.sqptdso = sqlstm.sqtdso;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
   if (sqlca.sqlcode < 0) printf("");
}



   r_number.len = strlen(r_number.arr);

   if(sqlca.sqlcode==1403)
   {
      gotoxy(38,13);
      printf("※ 없는 병실 호수입니다. ※");
   }
   else
   {
      gotoxy(24, 17);
      printf("%-24s%-22d%d", r_number.arr, r_max, r_now);

      gotoxy(55, 21);
      rewind(stdin);
      gets(check);

      if (strcmp(check,"Y")==0)
      {
         if (r_now > 0)
         {
            gotoxy(40, 23);
            printf("※ 삭제 불가 ※");
            gotoxy(30, 24);
            printf("해당 병실을 사용 중인 환자가 있습니다.");
         }
         else
         {
            /* EXEC SQL DELETE FROM H_ROOM WHERE ROOM_NUMBER =:r_number; */ 

{
            struct sqlexd sqlstm;
            sqlstm.sqlvsn = 13;
            sqlstm.arrsiz = 6;
            sqlstm.sqladtp = &sqladt;
            sqlstm.sqltdsp = &sqltds;
            sqlstm.stmt = "delete  from H_ROOM  where ROOM_NUMBER=:b0";
            sqlstm.iters = (unsigned int  )1;
            sqlstm.offset = (unsigned int  )895;
            sqlstm.cud = sqlcud0;
            sqlstm.sqlest = (unsigned char  *)&sqlca;
            sqlstm.sqlety = (unsigned short)4352;
            sqlstm.occurs = (unsigned int  )0;
            sqlstm.sqhstv[0] = (         void  *)&r_number;
            sqlstm.sqhstl[0] = (unsigned int  )8;
            sqlstm.sqhsts[0] = (         int  )0;
            sqlstm.sqindv[0] = (         void  *)0;
            sqlstm.sqinds[0] = (         int  )0;
            sqlstm.sqharm[0] = (unsigned int  )0;
            sqlstm.sqadto[0] = (unsigned short )0;
            sqlstm.sqtdso[0] = (unsigned short )0;
            sqlstm.sqphsv = sqlstm.sqhstv;
            sqlstm.sqphsl = sqlstm.sqhstl;
            sqlstm.sqphss = sqlstm.sqhsts;
            sqlstm.sqpind = sqlstm.sqindv;
            sqlstm.sqpins = sqlstm.sqinds;
            sqlstm.sqparm = sqlstm.sqharm;
            sqlstm.sqparc = sqlstm.sqharc;
            sqlstm.sqpadto = sqlstm.sqadto;
            sqlstm.sqptdso = sqlstm.sqtdso;
            sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
            if (sqlca.sqlcode < 0) printf("");
}


            gotoxy(35,23);
            printf("해당 병실을 삭제하였습니다.");
         }
      }
   }

   /* EXEC SQL COMMIT WORK; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 6;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )914;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
   if (sqlca.sqlcode < 0) printf("");
}


   gotoxy(5,29);
   printf("계속하려면 아무 키나 누르세요..");
   getch();
}


// 환자 퇴원 함수
#define PAGE_NUM 8
void goLeave(char userNum[6]) {

	system("mode con cols=125 lines=40");
	/* EXEC SQL BEGIN DECLARE SECTION; */ 

	/* VARCHAR p_number[255] = { "" }; */ 
struct { unsigned short len; unsigned char arr[255]; } p_number
 = {""};

	/* VARCHAR p_name[255] = { "" }; */ 
struct { unsigned short len; unsigned char arr[255]; } p_name
 = {""};

	/* VARCHAR p_hp[255] = { "" }; */ 
struct { unsigned short len; unsigned char arr[255]; } p_hp
 = {""};

	/* VARCHAR p_rrn[255] = { "" }; */ 
struct { unsigned short len; unsigned char arr[255]; } p_rrn
 = {""};

	/* VARCHAR p_address[255] = { "" }; */ 
struct { unsigned short len; unsigned char arr[255]; } p_address
 = {""};

	char p_roomnum[5] = { "" };
	char p_pdoc[6] = { "" };
	/* VARCHAR p_enter_date[255] = { "" }; */ 
struct { unsigned short len; unsigned char arr[255]; } p_enter_date
 = {""};

	/* VARCHAR p_leave_date[255] = { "" }; */ 
struct { unsigned short len; unsigned char arr[255]; } p_leave_date
 = {""};

	/* VARCHAR nums[255] = { "" }; */ 
struct { unsigned short len; unsigned char arr[255]; } nums
 = {""};

	/* VARCHAR names[255] = { "" }; */ 
struct { unsigned short len; unsigned char arr[255]; } names
 = {""};

	/* VARCHAR userNumm[255] = { "" }; */ 
struct { unsigned short len; unsigned char arr[255]; } userNumm
 = {""};

	char dynstmt[1000] = { "" };
	short indicator;   // 지시자 변수(null 필드 처리 용도)
	/* EXEC SQL END DECLARE SECTION; */ 


	int x, y, i, count = 0;

	system("cls");
	printf("\n");
	/* EXEC SQL WHENEVER SQLERROR DO sql_error("\7ORACLE ERROR:\n"); */ 

	print_screen("leave_patient.txt");

	char roomN[50][5]={""};

	strcpy(userNumm.arr, userNum);
	userNumm.len = strlen(userNumm.arr);

	gotoxy(49, 12);
	rewind(stdin);
	gets(nums.arr);
	nums.len = strlen(nums.arr);

	gotoxy(87, 12);
	rewind(stdin);
	gets(names.arr);
	names.len = strlen(names.arr);

	sprintf(dynstmt, "SELECT * FROM H_PATIENT where patient_pdoc = '%s' and patient_number LIKE '%%%s%%' and patient_name LIKE '%%%s%%' and patient_leave_date is null", userNumm.arr, nums.arr, names.arr);
	/* EXEC SQL PREPARE S FROM : dynstmt; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 13;
 sqlstm.arrsiz = 6;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )929;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)4352;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)dynstmt;
 sqlstm.sqhstl[0] = (unsigned int  )1000;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)0;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqphsv = sqlstm.sqhstv;
 sqlstm.sqphsl = sqlstm.sqhstl;
 sqlstm.sqphss = sqlstm.sqhsts;
 sqlstm.sqpind = sqlstm.sqindv;
 sqlstm.sqpins = sqlstm.sqinds;
 sqlstm.sqparm = sqlstm.sqharm;
 sqlstm.sqparc = sqlstm.sqharc;
 sqlstm.sqpadto = sqlstm.sqadto;
 sqlstm.sqptdso = sqlstm.sqtdso;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
 if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}



	/* EXEC SQL DECLARE s_cursor CURSOR FOR S; */ 


	/* EXEC SQL OPEN s_cursor; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 13;
 sqlstm.arrsiz = 6;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )948;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.sqlpfmem = (unsigned int  )0;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)4352;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqcmod = (unsigned int )0;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
 if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}



	x = 4;
	y = 18;
	/* EXEC SQL WHENEVER NOT FOUND DO BREAK; */ 

	for (;;)
	{
		/* EXEC SQL FETCH s_cursor INTO : p_number, : p_name, : p_hp, : p_rrn, : p_address, : p_roomnum, : p_pdoc, : p_enter_date, : p_leave_date INDICATOR : indicator; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 13;
  sqlstm.arrsiz = 9;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )963;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.sqlpfmem = (unsigned int  )0;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)4352;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqfoff = (           int )0;
  sqlstm.sqfmod = (unsigned int )2;
  sqlstm.sqhstv[0] = (         void  *)&p_number;
  sqlstm.sqhstl[0] = (unsigned int  )257;
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)0;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (         void  *)&p_name;
  sqlstm.sqhstl[1] = (unsigned int  )257;
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         void  *)0;
  sqlstm.sqinds[1] = (         int  )0;
  sqlstm.sqharm[1] = (unsigned int  )0;
  sqlstm.sqadto[1] = (unsigned short )0;
  sqlstm.sqtdso[1] = (unsigned short )0;
  sqlstm.sqhstv[2] = (         void  *)&p_hp;
  sqlstm.sqhstl[2] = (unsigned int  )257;
  sqlstm.sqhsts[2] = (         int  )0;
  sqlstm.sqindv[2] = (         void  *)0;
  sqlstm.sqinds[2] = (         int  )0;
  sqlstm.sqharm[2] = (unsigned int  )0;
  sqlstm.sqadto[2] = (unsigned short )0;
  sqlstm.sqtdso[2] = (unsigned short )0;
  sqlstm.sqhstv[3] = (         void  *)&p_rrn;
  sqlstm.sqhstl[3] = (unsigned int  )257;
  sqlstm.sqhsts[3] = (         int  )0;
  sqlstm.sqindv[3] = (         void  *)0;
  sqlstm.sqinds[3] = (         int  )0;
  sqlstm.sqharm[3] = (unsigned int  )0;
  sqlstm.sqadto[3] = (unsigned short )0;
  sqlstm.sqtdso[3] = (unsigned short )0;
  sqlstm.sqhstv[4] = (         void  *)&p_address;
  sqlstm.sqhstl[4] = (unsigned int  )257;
  sqlstm.sqhsts[4] = (         int  )0;
  sqlstm.sqindv[4] = (         void  *)0;
  sqlstm.sqinds[4] = (         int  )0;
  sqlstm.sqharm[4] = (unsigned int  )0;
  sqlstm.sqadto[4] = (unsigned short )0;
  sqlstm.sqtdso[4] = (unsigned short )0;
  sqlstm.sqhstv[5] = (         void  *)p_roomnum;
  sqlstm.sqhstl[5] = (unsigned int  )5;
  sqlstm.sqhsts[5] = (         int  )0;
  sqlstm.sqindv[5] = (         void  *)0;
  sqlstm.sqinds[5] = (         int  )0;
  sqlstm.sqharm[5] = (unsigned int  )0;
  sqlstm.sqadto[5] = (unsigned short )0;
  sqlstm.sqtdso[5] = (unsigned short )0;
  sqlstm.sqhstv[6] = (         void  *)p_pdoc;
  sqlstm.sqhstl[6] = (unsigned int  )6;
  sqlstm.sqhsts[6] = (         int  )0;
  sqlstm.sqindv[6] = (         void  *)0;
  sqlstm.sqinds[6] = (         int  )0;
  sqlstm.sqharm[6] = (unsigned int  )0;
  sqlstm.sqadto[6] = (unsigned short )0;
  sqlstm.sqtdso[6] = (unsigned short )0;
  sqlstm.sqhstv[7] = (         void  *)&p_enter_date;
  sqlstm.sqhstl[7] = (unsigned int  )257;
  sqlstm.sqhsts[7] = (         int  )0;
  sqlstm.sqindv[7] = (         void  *)0;
  sqlstm.sqinds[7] = (         int  )0;
  sqlstm.sqharm[7] = (unsigned int  )0;
  sqlstm.sqadto[7] = (unsigned short )0;
  sqlstm.sqtdso[7] = (unsigned short )0;
  sqlstm.sqhstv[8] = (         void  *)&p_leave_date;
  sqlstm.sqhstl[8] = (unsigned int  )257;
  sqlstm.sqhsts[8] = (         int  )0;
  sqlstm.sqindv[8] = (         void  *)&indicator;
  sqlstm.sqinds[8] = (         int  )0;
  sqlstm.sqharm[8] = (unsigned int  )0;
  sqlstm.sqadto[8] = (unsigned short )0;
  sqlstm.sqtdso[8] = (unsigned short )0;
  sqlstm.sqphsv = sqlstm.sqhstv;
  sqlstm.sqphsl = sqlstm.sqhstl;
  sqlstm.sqphss = sqlstm.sqhsts;
  sqlstm.sqpind = sqlstm.sqindv;
  sqlstm.sqpins = sqlstm.sqinds;
  sqlstm.sqparm = sqlstm.sqharm;
  sqlstm.sqparc = sqlstm.sqharc;
  sqlstm.sqpadto = sqlstm.sqadto;
  sqlstm.sqptdso = sqlstm.sqtdso;
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
  if (sqlca.sqlcode == 1403) break;
  if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}


		p_number.arr[p_number.len] = '\0';
		p_name.arr[p_name.len] = '\0';
		p_hp.arr[p_hp.len] = '\0';
		p_rrn.arr[p_rrn.len] = '\0';
		p_address.arr[p_address.len] = '\0';
		p_enter_date.arr[p_enter_date.len] = '\0';
		p_leave_date.arr[p_leave_date.len] = '\0';

		strcpy(roomN[count], p_roomnum);

		gotoxy(x, y);
		printf("%-9s %-10s %-16s %-15s %-5s %-9s %-10s %-10s %-20s", p_number.arr, p_name.arr, p_hp.arr, p_rrn.arr, p_roomnum, p_pdoc, p_enter_date.arr, p_leave_date.arr, p_address.arr);
		y += 2;
		count++;

		if (count == PAGE_NUM)
		{
			count = 0;
			getch();

			gotoxy(4, 18); //이전 화면 부분 클리어
			for (i = 0; i < PAGE_NUM * 2; i++)
			{
				printf("│                                                                                                                       │\n");
			}
			y = 18;
		}
	}

	/* EXEC SQL CLOSE s_cursor; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 13;
 sqlstm.arrsiz = 9;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )1014;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)4352;
 sqlstm.occurs = (unsigned int  )0;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
 if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}

   // 커서에 할당된 자원을 해제함.

	gotoxy(4, 37);
	printf("조회된 환자 : %d", count);
	gotoxy(78, 37);
	int st = 0;
	/* EXEC SQL WHENEVER NOT FOUND CONTINUE; */ 

	if (count != 0) {
		printf("다음 환자를 퇴원처리 하시겠습니까? [y / n]   ");
		char bool;
		rewind(stdin);
		scanf("%c", &bool);
		if (bool == 'y') {
			/* EXEC SQL UPDATE h_patient
				SET patient_leave_date = sysdate
				WHERE(patient_pdoc = '' || :userNumm || '') and (patient_number LIKE '%' || :nums || '%') and (patient_name LIKE '%' || :names || '%') and (patient_leave_date is null); */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 9;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "update h_patient  set patient_leave_date=sysdate where (((\
patient_pdoc=((''||:b0)||'') and patient_number like (('%'||:b1)||'%')) and pa\
tient_name like (('%'||:b2)||'%')) and patient_leave_date is null )";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )1029;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlstm.sqhstv[0] = (         void  *)&userNumm;
   sqlstm.sqhstl[0] = (unsigned int  )257;
   sqlstm.sqhsts[0] = (         int  )0;
   sqlstm.sqindv[0] = (         void  *)0;
   sqlstm.sqinds[0] = (         int  )0;
   sqlstm.sqharm[0] = (unsigned int  )0;
   sqlstm.sqadto[0] = (unsigned short )0;
   sqlstm.sqtdso[0] = (unsigned short )0;
   sqlstm.sqhstv[1] = (         void  *)&nums;
   sqlstm.sqhstl[1] = (unsigned int  )257;
   sqlstm.sqhsts[1] = (         int  )0;
   sqlstm.sqindv[1] = (         void  *)0;
   sqlstm.sqinds[1] = (         int  )0;
   sqlstm.sqharm[1] = (unsigned int  )0;
   sqlstm.sqadto[1] = (unsigned short )0;
   sqlstm.sqtdso[1] = (unsigned short )0;
   sqlstm.sqhstv[2] = (         void  *)&names;
   sqlstm.sqhstl[2] = (unsigned int  )257;
   sqlstm.sqhsts[2] = (         int  )0;
   sqlstm.sqindv[2] = (         void  *)0;
   sqlstm.sqinds[2] = (         int  )0;
   sqlstm.sqharm[2] = (unsigned int  )0;
   sqlstm.sqadto[2] = (unsigned short )0;
   sqlstm.sqtdso[2] = (unsigned short )0;
   sqlstm.sqphsv = sqlstm.sqhstv;
   sqlstm.sqphsl = sqlstm.sqhstl;
   sqlstm.sqphss = sqlstm.sqhsts;
   sqlstm.sqpind = sqlstm.sqindv;
   sqlstm.sqpins = sqlstm.sqinds;
   sqlstm.sqparm = sqlstm.sqharm;
   sqlstm.sqparc = sqlstm.sqharc;
   sqlstm.sqpadto = sqlstm.sqadto;
   sqlstm.sqptdso = sqlstm.sqtdso;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
   if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}


			for(;;){
				strcpy(p_roomnum, roomN[st]);
				/* EXEC SQL WHENEVER NOT FOUND DO BREAK; */ 

				/* EXEC SQL UPDATE h_room
				SET room_now = room_now-1
				WHERE(room_number=:p_roomnum); */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 9;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "update h_room  set room_now=(room_now-1) where room_numbe\
r=:b0";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )1056;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqhstv[0] = (         void  *)p_roomnum;
    sqlstm.sqhstl[0] = (unsigned int  )5;
    sqlstm.sqhsts[0] = (         int  )0;
    sqlstm.sqindv[0] = (         void  *)0;
    sqlstm.sqinds[0] = (         int  )0;
    sqlstm.sqharm[0] = (unsigned int  )0;
    sqlstm.sqadto[0] = (unsigned short )0;
    sqlstm.sqtdso[0] = (unsigned short )0;
    sqlstm.sqphsv = sqlstm.sqhstv;
    sqlstm.sqphsl = sqlstm.sqhstl;
    sqlstm.sqphss = sqlstm.sqhsts;
    sqlstm.sqpind = sqlstm.sqindv;
    sqlstm.sqpins = sqlstm.sqinds;
    sqlstm.sqparm = sqlstm.sqharm;
    sqlstm.sqparc = sqlstm.sqharc;
    sqlstm.sqpadto = sqlstm.sqadto;
    sqlstm.sqptdso = sqlstm.sqtdso;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
    if (sqlca.sqlcode == 1403) break;
    if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}


				st++;
			}
			gotoxy(78, 37);
			printf("퇴원처리 되었습니다.                       ");
		}
		else if (bool == 'n') {
			gotoxy(78, 37);
			printf("취소하였습니다.                       ");
		}
		/* EXEC SQL COMMIT WORK; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 13;
  sqlstm.arrsiz = 9;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )1075;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)4352;
  sqlstm.occurs = (unsigned int  )0;
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
  if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}

   // 현재 진행중인 트랜잭션을 커밋하고 데이터베이스 연결은 종료하지 않음.
	}
	getch();

}


// 퇴원환자 삭제
void DeletePatient(char userNum[6])
{
    #define PAGE_NUM 7
    system("mode con cols=125 lines=40");
    /* EXEC SQL WHENEVER SQLERROR DO sql_error("\7ORACLE ERROR:\n"); */ 

    /* EXEC SQL BEGIN DECLARE SECTION; */ 

        /* VARCHAR p_number[255]={""}; */ 
struct { unsigned short len; unsigned char arr[255]; } p_number
 = {""};

        /* VARCHAR p_name[255]={""}; */ 
struct { unsigned short len; unsigned char arr[255]; } p_name
 = {""};

        /* VARCHAR p_hp[255]={""}; */ 
struct { unsigned short len; unsigned char arr[255]; } p_hp
 = {""};

        /* VARCHAR p_rrn[255]={""}; */ 
struct { unsigned short len; unsigned char arr[255]; } p_rrn
 = {""};

        /* VARCHAR p_address[255]={""}; */ 
struct { unsigned short len; unsigned char arr[255]; } p_address
 = {""};

        char p_room[5]={""};
        char p_pdoc[6]={""};
        /* VARCHAR p_enter[255]={""}; */ 
struct { unsigned short len; unsigned char arr[255]; } p_enter
 = {""};

        /* VARCHAR p_leave[255]={""}; */ 
struct { unsigned short len; unsigned char arr[255]; } p_leave
 = {""};

        /* VARCHAR day[10]={""}; */ 
struct { unsigned short len; unsigned char arr[10]; } day
 = {""};

        /* VARCHAR nums[255]={""}; */ 
struct { unsigned short len; unsigned char arr[255]; } nums
 = {""};
 
        /* VARCHAR names[255]={""}; */ 
struct { unsigned short len; unsigned char arr[255]; } names
 = {""};
 
        /* VARCHAR userNumm[255]={""}; */ 
struct { unsigned short len; unsigned char arr[255]; } userNumm
 = {""};
 
        char dynstmt[1000] = {""};
        short indicator;   // 지시자 변수(null 필드 처리 용도)
    /* EXEC SQL END DECLARE SECTION; */ 

   
    char cases;
    int x, y, i, count = 0;

    system("cls");
    printf("\n");

    print_screen("delete_patient.txt");
    
    gotoxy(71,12);
    rewind(stdin);
    gets(day.arr);
    day.len = strlen(day.arr);
    
    strcpy(userNumm.arr, userNum);
    userNumm.len = strlen(userNumm.arr);
    
    if(day.len == 0){
        
        gotoxy(49,14);
        rewind(stdin);
        gets(nums.arr);
        nums.len = strlen(nums.arr);

        gotoxy(87,14);
        rewind(stdin);
        gets(names.arr);
        names.len = strlen(names.arr);

        if(userNum[0] == 'D'){
            cases = 'c';
            sprintf(dynstmt,"SELECT patient_number, patient_name, patient_hp, patient_rrn, patient_address, patient_roomnum, patient_pdoc, to_char(patient_enter_date, 'YY/MM/DD'), to_char(patient_leave_date, 'YY/MM/DD') FROM H_PATIENT where patient_pdoc = '%s' and patient_number LIKE '%%%s%%' and patient_name LIKE '%%%s%%'", userNum, nums.arr, names.arr);
        }else{
            cases = 'b';
            sprintf(dynstmt,"SELECT patient_number, patient_name, patient_hp, patient_rrn, patient_address, patient_roomnum, patient_pdoc, to_char(patient_enter_date, 'YY/MM/DD'), to_char(patient_leave_date, 'YY/MM/DD') FROM H_PATIENT where patient_number LIKE '%%%s%%' and patient_name LIKE '%%%s%%'", nums.arr, names.arr);
        }
    }else{
        cases = 'a';
        sprintf(dynstmt, "SELECT patient_number, patient_name, patient_hp, patient_rrn, patient_address, patient_roomnum, patient_pdoc, to_char(patient_enter_date, 'YY/MM/DD'), to_char(patient_leave_date, 'YY/MM/DD') FROM h_patient WHERE patient_leave_date < sysdate- to_number(%s)", day.arr);
    }
    x = 4;
    y = 20;

    /* EXEC SQL PREPARE S FROM :dynstmt; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 9;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )1090;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqhstv[0] = (         void  *)dynstmt;
    sqlstm.sqhstl[0] = (unsigned int  )1000;
    sqlstm.sqhsts[0] = (         int  )0;
    sqlstm.sqindv[0] = (         void  *)0;
    sqlstm.sqinds[0] = (         int  )0;
    sqlstm.sqharm[0] = (unsigned int  )0;
    sqlstm.sqadto[0] = (unsigned short )0;
    sqlstm.sqtdso[0] = (unsigned short )0;
    sqlstm.sqphsv = sqlstm.sqhstv;
    sqlstm.sqphsl = sqlstm.sqhstl;
    sqlstm.sqphss = sqlstm.sqhsts;
    sqlstm.sqpind = sqlstm.sqindv;
    sqlstm.sqpins = sqlstm.sqinds;
    sqlstm.sqparm = sqlstm.sqharm;
    sqlstm.sqparc = sqlstm.sqharc;
    sqlstm.sqpadto = sqlstm.sqadto;
    sqlstm.sqptdso = sqlstm.sqtdso;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
    if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}


    /* EXEC SQL DECLARE patient_cursor CURSOR FOR S; */ 

    /* EXEC SQL OPEN patient_cursor; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 9;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )1109;
    sqlstm.selerr = (unsigned short)1;
    sqlstm.sqlpfmem = (unsigned int  )0;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqcmod = (unsigned int )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
    if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}


    /* EXEC SQL WHENEVER NOT FOUND DO BREAK; */ 

    for (;;) 
    {
        /* EXEC SQL FETCH patient_cursor
        INTO :p_number, :p_name, :p_hp, :p_rrn, :p_address, :p_room, :p_pdoc, :p_enter, :p_leave
        INDICATOR :indicator; */ 

{
        struct sqlexd sqlstm;
        sqlstm.sqlvsn = 13;
        sqlstm.arrsiz = 9;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )1124;
        sqlstm.selerr = (unsigned short)1;
        sqlstm.sqlpfmem = (unsigned int  )0;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)4352;
        sqlstm.occurs = (unsigned int  )0;
        sqlstm.sqfoff = (           int )0;
        sqlstm.sqfmod = (unsigned int )2;
        sqlstm.sqhstv[0] = (         void  *)&p_number;
        sqlstm.sqhstl[0] = (unsigned int  )257;
        sqlstm.sqhsts[0] = (         int  )0;
        sqlstm.sqindv[0] = (         void  *)0;
        sqlstm.sqinds[0] = (         int  )0;
        sqlstm.sqharm[0] = (unsigned int  )0;
        sqlstm.sqadto[0] = (unsigned short )0;
        sqlstm.sqtdso[0] = (unsigned short )0;
        sqlstm.sqhstv[1] = (         void  *)&p_name;
        sqlstm.sqhstl[1] = (unsigned int  )257;
        sqlstm.sqhsts[1] = (         int  )0;
        sqlstm.sqindv[1] = (         void  *)0;
        sqlstm.sqinds[1] = (         int  )0;
        sqlstm.sqharm[1] = (unsigned int  )0;
        sqlstm.sqadto[1] = (unsigned short )0;
        sqlstm.sqtdso[1] = (unsigned short )0;
        sqlstm.sqhstv[2] = (         void  *)&p_hp;
        sqlstm.sqhstl[2] = (unsigned int  )257;
        sqlstm.sqhsts[2] = (         int  )0;
        sqlstm.sqindv[2] = (         void  *)0;
        sqlstm.sqinds[2] = (         int  )0;
        sqlstm.sqharm[2] = (unsigned int  )0;
        sqlstm.sqadto[2] = (unsigned short )0;
        sqlstm.sqtdso[2] = (unsigned short )0;
        sqlstm.sqhstv[3] = (         void  *)&p_rrn;
        sqlstm.sqhstl[3] = (unsigned int  )257;
        sqlstm.sqhsts[3] = (         int  )0;
        sqlstm.sqindv[3] = (         void  *)0;
        sqlstm.sqinds[3] = (         int  )0;
        sqlstm.sqharm[3] = (unsigned int  )0;
        sqlstm.sqadto[3] = (unsigned short )0;
        sqlstm.sqtdso[3] = (unsigned short )0;
        sqlstm.sqhstv[4] = (         void  *)&p_address;
        sqlstm.sqhstl[4] = (unsigned int  )257;
        sqlstm.sqhsts[4] = (         int  )0;
        sqlstm.sqindv[4] = (         void  *)0;
        sqlstm.sqinds[4] = (         int  )0;
        sqlstm.sqharm[4] = (unsigned int  )0;
        sqlstm.sqadto[4] = (unsigned short )0;
        sqlstm.sqtdso[4] = (unsigned short )0;
        sqlstm.sqhstv[5] = (         void  *)p_room;
        sqlstm.sqhstl[5] = (unsigned int  )5;
        sqlstm.sqhsts[5] = (         int  )0;
        sqlstm.sqindv[5] = (         void  *)0;
        sqlstm.sqinds[5] = (         int  )0;
        sqlstm.sqharm[5] = (unsigned int  )0;
        sqlstm.sqadto[5] = (unsigned short )0;
        sqlstm.sqtdso[5] = (unsigned short )0;
        sqlstm.sqhstv[6] = (         void  *)p_pdoc;
        sqlstm.sqhstl[6] = (unsigned int  )6;
        sqlstm.sqhsts[6] = (         int  )0;
        sqlstm.sqindv[6] = (         void  *)0;
        sqlstm.sqinds[6] = (         int  )0;
        sqlstm.sqharm[6] = (unsigned int  )0;
        sqlstm.sqadto[6] = (unsigned short )0;
        sqlstm.sqtdso[6] = (unsigned short )0;
        sqlstm.sqhstv[7] = (         void  *)&p_enter;
        sqlstm.sqhstl[7] = (unsigned int  )257;
        sqlstm.sqhsts[7] = (         int  )0;
        sqlstm.sqindv[7] = (         void  *)0;
        sqlstm.sqinds[7] = (         int  )0;
        sqlstm.sqharm[7] = (unsigned int  )0;
        sqlstm.sqadto[7] = (unsigned short )0;
        sqlstm.sqtdso[7] = (unsigned short )0;
        sqlstm.sqhstv[8] = (         void  *)&p_leave;
        sqlstm.sqhstl[8] = (unsigned int  )257;
        sqlstm.sqhsts[8] = (         int  )0;
        sqlstm.sqindv[8] = (         void  *)&indicator;
        sqlstm.sqinds[8] = (         int  )0;
        sqlstm.sqharm[8] = (unsigned int  )0;
        sqlstm.sqadto[8] = (unsigned short )0;
        sqlstm.sqtdso[8] = (unsigned short )0;
        sqlstm.sqphsv = sqlstm.sqhstv;
        sqlstm.sqphsl = sqlstm.sqhstl;
        sqlstm.sqphss = sqlstm.sqhsts;
        sqlstm.sqpind = sqlstm.sqindv;
        sqlstm.sqpins = sqlstm.sqinds;
        sqlstm.sqparm = sqlstm.sqharm;
        sqlstm.sqparc = sqlstm.sqharc;
        sqlstm.sqpadto = sqlstm.sqadto;
        sqlstm.sqptdso = sqlstm.sqtdso;
        sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
        if (sqlca.sqlcode == 1403) break;
        if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}


        p_number.arr[p_number.len] = '\0';
        p_name.arr[p_name.len] = '\0';
        p_hp.arr[p_hp.len] = '\0';
        p_rrn.arr[p_rrn.len] = '\0';
        p_address.arr[p_address.len] = '\0';
        p_enter.arr[p_enter.len] = '\0';
        p_leave.arr[p_leave.len] = '\0';  

        gotoxy(x,y);
        printf("%-9s %-10s %-16s %-15s %-5s %-9s %-10s %-10s %-20s", p_number.arr, p_name.arr, p_hp.arr, p_rrn.arr, p_room, p_pdoc, p_enter.arr, p_leave.arr, p_address.arr);
        y+=2;
        count++;

        if( count%PAGE_NUM==0)
        {
            getch();
       
            gotoxy(4, 20); //이전 화면 부분 클리어
            for(i= 0; i < PAGE_NUM*2; i++){
                printf("│                                                                                                                       │\n");
            }
            y = 20;
        }
    }
    /* EXEC SQL CLOSE patient_cursor; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 9;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )1175;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
    if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}



    gotoxy(4,37);
    if(day.len == 0){
        printf("조회된 환자 : %d", count);
    }else{
        printf("보관 기한 지난 퇴원환자 : %d", count);
    }
    gotoxy(80,37);

    /* EXEC SQL WHENEVER NOT FOUND CONTINUE; */ 

    if (count != 0){
        printf("데이터를 삭제하시겠습니까? [y / n]   ");
        char bool;
        rewind(stdin);
        scanf("%c", &bool);

        if (bool == 'y'){
            if (cases == 'a'){
                /* EXEC SQL DELETE FROM h_patient
                WHERE patient_leave_date < sysdate - to_number(:day); */ 

{
                struct sqlexd sqlstm;
                sqlstm.sqlvsn = 13;
                sqlstm.arrsiz = 9;
                sqlstm.sqladtp = &sqladt;
                sqlstm.sqltdsp = &sqltds;
                sqlstm.stmt = "delete  from h_patient  where patient_leave_d\
ate<(sysdate-to_number(:b0))";
                sqlstm.iters = (unsigned int  )1;
                sqlstm.offset = (unsigned int  )1190;
                sqlstm.cud = sqlcud0;
                sqlstm.sqlest = (unsigned char  *)&sqlca;
                sqlstm.sqlety = (unsigned short)4352;
                sqlstm.occurs = (unsigned int  )0;
                sqlstm.sqhstv[0] = (         void  *)&day;
                sqlstm.sqhstl[0] = (unsigned int  )12;
                sqlstm.sqhsts[0] = (         int  )0;
                sqlstm.sqindv[0] = (         void  *)0;
                sqlstm.sqinds[0] = (         int  )0;
                sqlstm.sqharm[0] = (unsigned int  )0;
                sqlstm.sqadto[0] = (unsigned short )0;
                sqlstm.sqtdso[0] = (unsigned short )0;
                sqlstm.sqphsv = sqlstm.sqhstv;
                sqlstm.sqphsl = sqlstm.sqhstl;
                sqlstm.sqphss = sqlstm.sqhsts;
                sqlstm.sqpind = sqlstm.sqindv;
                sqlstm.sqpins = sqlstm.sqinds;
                sqlstm.sqparm = sqlstm.sqharm;
                sqlstm.sqparc = sqlstm.sqharc;
                sqlstm.sqpadto = sqlstm.sqadto;
                sqlstm.sqptdso = sqlstm.sqtdso;
                sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
                if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}


            }else if (cases == 'b'){
                /* EXEC SQL DELETE FROM h_patient
                WHERE patient_number like '%'||:nums||'%' and patient_name like '%'||:names||'%'; */ 

{
                struct sqlexd sqlstm;
                sqlstm.sqlvsn = 13;
                sqlstm.arrsiz = 9;
                sqlstm.sqladtp = &sqladt;
                sqlstm.sqltdsp = &sqltds;
                sqlstm.stmt = "delete  from h_patient  where (patient_number\
 like (('%'||:b0)||'%') and patient_name like (('%'||:b1)||'%'))";
                sqlstm.iters = (unsigned int  )1;
                sqlstm.offset = (unsigned int  )1209;
                sqlstm.cud = sqlcud0;
                sqlstm.sqlest = (unsigned char  *)&sqlca;
                sqlstm.sqlety = (unsigned short)4352;
                sqlstm.occurs = (unsigned int  )0;
                sqlstm.sqhstv[0] = (         void  *)&nums;
                sqlstm.sqhstl[0] = (unsigned int  )257;
                sqlstm.sqhsts[0] = (         int  )0;
                sqlstm.sqindv[0] = (         void  *)0;
                sqlstm.sqinds[0] = (         int  )0;
                sqlstm.sqharm[0] = (unsigned int  )0;
                sqlstm.sqadto[0] = (unsigned short )0;
                sqlstm.sqtdso[0] = (unsigned short )0;
                sqlstm.sqhstv[1] = (         void  *)&names;
                sqlstm.sqhstl[1] = (unsigned int  )257;
                sqlstm.sqhsts[1] = (         int  )0;
                sqlstm.sqindv[1] = (         void  *)0;
                sqlstm.sqinds[1] = (         int  )0;
                sqlstm.sqharm[1] = (unsigned int  )0;
                sqlstm.sqadto[1] = (unsigned short )0;
                sqlstm.sqtdso[1] = (unsigned short )0;
                sqlstm.sqphsv = sqlstm.sqhstv;
                sqlstm.sqphsl = sqlstm.sqhstl;
                sqlstm.sqphss = sqlstm.sqhsts;
                sqlstm.sqpind = sqlstm.sqindv;
                sqlstm.sqpins = sqlstm.sqinds;
                sqlstm.sqparm = sqlstm.sqharm;
                sqlstm.sqparc = sqlstm.sqharc;
                sqlstm.sqpadto = sqlstm.sqadto;
                sqlstm.sqptdso = sqlstm.sqtdso;
                sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
                if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}


            }else{
                /* EXEC SQL DELETE FROM h_patient
                WHERE (patient_pdoc=''||:userNumm||'') and (patient_number LIKE '%'||:nums||'%') and (patient_name LIKE '%'||:names||'%'); */ 

{
                struct sqlexd sqlstm;
                sqlstm.sqlvsn = 13;
                sqlstm.arrsiz = 9;
                sqlstm.sqladtp = &sqladt;
                sqlstm.sqltdsp = &sqltds;
                sqlstm.stmt = "delete  from h_patient  where ((patient_pdoc=\
((''||:b0)||'') and patient_number like (('%'||:b1)||'%')) and patient_name li\
ke (('%'||:b2)||'%'))";
                sqlstm.iters = (unsigned int  )1;
                sqlstm.offset = (unsigned int  )1232;
                sqlstm.cud = sqlcud0;
                sqlstm.sqlest = (unsigned char  *)&sqlca;
                sqlstm.sqlety = (unsigned short)4352;
                sqlstm.occurs = (unsigned int  )0;
                sqlstm.sqhstv[0] = (         void  *)&userNumm;
                sqlstm.sqhstl[0] = (unsigned int  )257;
                sqlstm.sqhsts[0] = (         int  )0;
                sqlstm.sqindv[0] = (         void  *)0;
                sqlstm.sqinds[0] = (         int  )0;
                sqlstm.sqharm[0] = (unsigned int  )0;
                sqlstm.sqadto[0] = (unsigned short )0;
                sqlstm.sqtdso[0] = (unsigned short )0;
                sqlstm.sqhstv[1] = (         void  *)&nums;
                sqlstm.sqhstl[1] = (unsigned int  )257;
                sqlstm.sqhsts[1] = (         int  )0;
                sqlstm.sqindv[1] = (         void  *)0;
                sqlstm.sqinds[1] = (         int  )0;
                sqlstm.sqharm[1] = (unsigned int  )0;
                sqlstm.sqadto[1] = (unsigned short )0;
                sqlstm.sqtdso[1] = (unsigned short )0;
                sqlstm.sqhstv[2] = (         void  *)&names;
                sqlstm.sqhstl[2] = (unsigned int  )257;
                sqlstm.sqhsts[2] = (         int  )0;
                sqlstm.sqindv[2] = (         void  *)0;
                sqlstm.sqinds[2] = (         int  )0;
                sqlstm.sqharm[2] = (unsigned int  )0;
                sqlstm.sqadto[2] = (unsigned short )0;
                sqlstm.sqtdso[2] = (unsigned short )0;
                sqlstm.sqphsv = sqlstm.sqhstv;
                sqlstm.sqphsl = sqlstm.sqhstl;
                sqlstm.sqphss = sqlstm.sqhsts;
                sqlstm.sqpind = sqlstm.sqindv;
                sqlstm.sqpins = sqlstm.sqinds;
                sqlstm.sqparm = sqlstm.sqharm;
                sqlstm.sqparc = sqlstm.sqharc;
                sqlstm.sqpadto = sqlstm.sqadto;
                sqlstm.sqptdso = sqlstm.sqtdso;
                sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
                if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}


            }
            /* EXEC SQL COMMIT WORK; */ 

{
            struct sqlexd sqlstm;
            sqlstm.sqlvsn = 13;
            sqlstm.arrsiz = 9;
            sqlstm.sqladtp = &sqladt;
            sqlstm.sqltdsp = &sqltds;
            sqlstm.iters = (unsigned int  )1;
            sqlstm.offset = (unsigned int  )1259;
            sqlstm.cud = sqlcud0;
            sqlstm.sqlest = (unsigned char  *)&sqlca;
            sqlstm.sqlety = (unsigned short)4352;
            sqlstm.occurs = (unsigned int  )0;
            sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
            if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}



            gotoxy(80,37);
            printf("삭제되었습니다.                      ");
        }else if(bool=='n'){
            gotoxy(80,37);
            printf("취소하였습니다.                      ");
        }
    }
    getch();
}



// 병실 조회 함수
#define ROOM_PAGE_NUM 5
void select_room()
{
    _putenv("NLS_LANG=American_America.KO16KSC5601");

   /* EXEC SQL BEGIN DECLARE SECTION; */ 

      /* varchar r_number[6] = {""}; */ 
struct { unsigned short len; unsigned char arr[6]; } r_number
 = {""};

      int r_max;
      int r_now;
      char dynstmt[1000] = {""};
   /* EXEC SQL END DECLARE SECTION; */ 


   char room_num[6] = "";
   int x, y, i, count = 0;

   system("cls");
   printf("\n");
   /* EXEC SQL WHENEVER SQLERROR DO sql_error("\7ORACLE ERROR:\n"); */ 

   print_screen("select_room.txt");

   gotoxy(55,12);
   rewind(stdin);
   gets(room_num);

   sprintf(dynstmt,"SELECT TRIM(room_number), room_max, room_now FROM H_ROOM where room_number LIKE '%%%s%%'", room_num);

   /* EXEC SQL PREPARE S FROM :dynstmt; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 9;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )1274;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlstm.sqhstv[0] = (         void  *)dynstmt;
   sqlstm.sqhstl[0] = (unsigned int  )1000;
   sqlstm.sqhsts[0] = (         int  )0;
   sqlstm.sqindv[0] = (         void  *)0;
   sqlstm.sqinds[0] = (         int  )0;
   sqlstm.sqharm[0] = (unsigned int  )0;
   sqlstm.sqadto[0] = (unsigned short )0;
   sqlstm.sqtdso[0] = (unsigned short )0;
   sqlstm.sqphsv = sqlstm.sqhstv;
   sqlstm.sqphsl = sqlstm.sqhstl;
   sqlstm.sqphss = sqlstm.sqhsts;
   sqlstm.sqpind = sqlstm.sqindv;
   sqlstm.sqpins = sqlstm.sqinds;
   sqlstm.sqparm = sqlstm.sqharm;
   sqlstm.sqparc = sqlstm.sqharc;
   sqlstm.sqpadto = sqlstm.sqadto;
   sqlstm.sqptdso = sqlstm.sqtdso;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
   if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}



   /* EXEC SQL DECLARE r_cursor CURSOR FOR S; */ 


   /* EXEC SQL OPEN r_cursor; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 9;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )1293;
   sqlstm.selerr = (unsigned short)1;
   sqlstm.sqlpfmem = (unsigned int  )0;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlstm.sqcmod = (unsigned int )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
   if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}



   /* EXEC SQL WHENEVER NOT FOUND DO break; */ 

   
   x = 24;
   y = 17;

   for (;;)
   {
      /* EXEC SQL FETCH r_cursor INTO :r_number, :r_max, :r_now; */ 

{
      struct sqlexd sqlstm;
      sqlstm.sqlvsn = 13;
      sqlstm.arrsiz = 9;
      sqlstm.sqladtp = &sqladt;
      sqlstm.sqltdsp = &sqltds;
      sqlstm.iters = (unsigned int  )1;
      sqlstm.offset = (unsigned int  )1308;
      sqlstm.selerr = (unsigned short)1;
      sqlstm.sqlpfmem = (unsigned int  )0;
      sqlstm.cud = sqlcud0;
      sqlstm.sqlest = (unsigned char  *)&sqlca;
      sqlstm.sqlety = (unsigned short)4352;
      sqlstm.occurs = (unsigned int  )0;
      sqlstm.sqfoff = (           int )0;
      sqlstm.sqfmod = (unsigned int )2;
      sqlstm.sqhstv[0] = (         void  *)&r_number;
      sqlstm.sqhstl[0] = (unsigned int  )8;
      sqlstm.sqhsts[0] = (         int  )0;
      sqlstm.sqindv[0] = (         void  *)0;
      sqlstm.sqinds[0] = (         int  )0;
      sqlstm.sqharm[0] = (unsigned int  )0;
      sqlstm.sqadto[0] = (unsigned short )0;
      sqlstm.sqtdso[0] = (unsigned short )0;
      sqlstm.sqhstv[1] = (         void  *)&r_max;
      sqlstm.sqhstl[1] = (unsigned int  )sizeof(int);
      sqlstm.sqhsts[1] = (         int  )0;
      sqlstm.sqindv[1] = (         void  *)0;
      sqlstm.sqinds[1] = (         int  )0;
      sqlstm.sqharm[1] = (unsigned int  )0;
      sqlstm.sqadto[1] = (unsigned short )0;
      sqlstm.sqtdso[1] = (unsigned short )0;
      sqlstm.sqhstv[2] = (         void  *)&r_now;
      sqlstm.sqhstl[2] = (unsigned int  )sizeof(int);
      sqlstm.sqhsts[2] = (         int  )0;
      sqlstm.sqindv[2] = (         void  *)0;
      sqlstm.sqinds[2] = (         int  )0;
      sqlstm.sqharm[2] = (unsigned int  )0;
      sqlstm.sqadto[2] = (unsigned short )0;
      sqlstm.sqtdso[2] = (unsigned short )0;
      sqlstm.sqphsv = sqlstm.sqhstv;
      sqlstm.sqphsl = sqlstm.sqhstl;
      sqlstm.sqphss = sqlstm.sqhsts;
      sqlstm.sqpind = sqlstm.sqindv;
      sqlstm.sqpins = sqlstm.sqinds;
      sqlstm.sqparm = sqlstm.sqharm;
      sqlstm.sqparc = sqlstm.sqharc;
      sqlstm.sqpadto = sqlstm.sqadto;
      sqlstm.sqptdso = sqlstm.sqtdso;
      sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
      if (sqlca.sqlcode == 1403) break;
      if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}


      r_number.arr[r_number.len] = '\0';

      gotoxy(x,y);
      printf("%-24s%-22d%d", r_number.arr, r_max, r_now);
      y+=2;
      count++;

      if(count == ROOM_PAGE_NUM)
      {
         count = 0;
         getch();
      
         gotoxy(0, 17); //이전 화면 부분 클리어
         for(i= 0; i < ROOM_PAGE_NUM*2 - 1; i++)
         {
             printf("│              │                                                                 │             │\n");
         }
         y = 17;
      }
   }

   /* EXEC SQL CLOSE r_cursor; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 9;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )1335;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
   if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}

   // 커서에 할당된 자원을 해제함.

   /* EXEC SQL COMMIT WORK; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 9;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )1350;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
   if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}

   // 현재 진행중인 트랜잭션을 커밋하고 데이터베이스 연결은 종료하지 않음.

   gotoxy(5,29);
   printf("계속하려면 아무 키나 누르세요..");
   getch();
}


// 의사 계정 수정 전 전체조회 함수
#define PAGE_NUM 9
void edit_doctor_account()
{
	system("mode con cols=125 lines=40");
	/* EXEC SQL BEGIN DECLARE SECTION; */ 

	  char d_num[6]={""};
	  /* varchar d_name[255]={""}; */ 
struct { unsigned short len; unsigned char arr[255]; } d_name
 = {""};

	  /* varchar d_position[255]={""}; */ 
struct { unsigned short len; unsigned char arr[255]; } d_position
 = {""};

	  char d_deptno[6]={""};
 
	  char dynstmt[1000] = {""};
	/* EXEC SQL END DECLARE SECTION; */ 


	int x, y, i, count = 0;

   	system("cls");
   	printf("\n");
   	/* EXEC SQL WHENEVER SQLERROR DO sql_error("\7ORACLE ERROR:\n"); */ 

   	print_screen("edit_doctor_account.txt");

   	sprintf(dynstmt,"SELECT * FROM h_doctor");

   	/* EXEC SQL PREPARE S FROM :dynstmt; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 9;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )1365;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqhstv[0] = (         void  *)dynstmt;
    sqlstm.sqhstl[0] = (unsigned int  )1000;
    sqlstm.sqhsts[0] = (         int  )0;
    sqlstm.sqindv[0] = (         void  *)0;
    sqlstm.sqinds[0] = (         int  )0;
    sqlstm.sqharm[0] = (unsigned int  )0;
    sqlstm.sqadto[0] = (unsigned short )0;
    sqlstm.sqtdso[0] = (unsigned short )0;
    sqlstm.sqphsv = sqlstm.sqhstv;
    sqlstm.sqphsl = sqlstm.sqhstl;
    sqlstm.sqphss = sqlstm.sqhsts;
    sqlstm.sqpind = sqlstm.sqindv;
    sqlstm.sqpins = sqlstm.sqinds;
    sqlstm.sqparm = sqlstm.sqharm;
    sqlstm.sqparc = sqlstm.sqharc;
    sqlstm.sqpadto = sqlstm.sqadto;
    sqlstm.sqptdso = sqlstm.sqtdso;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
    if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}


   	/* EXEC SQL DECLARE c_cursor2 CURSOR FOR S; */ 

   	/* EXEC SQL OPEN c_cursor2; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 9;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )1384;
    sqlstm.selerr = (unsigned short)1;
    sqlstm.sqlpfmem = (unsigned int  )0;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqcmod = (unsigned int )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
    if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}


	/* EXEC SQL WHENEVER NOT FOUND DO break; */ 

	
	x = 21;
   	y = 18;

   	for (;;)
  	{
      		/* EXEC SQL FETCH c_cursor2 INTO :d_num, :d_name, :d_position, :d_deptno; */ 

{
        struct sqlexd sqlstm;
        sqlstm.sqlvsn = 13;
        sqlstm.arrsiz = 9;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )1399;
        sqlstm.selerr = (unsigned short)1;
        sqlstm.sqlpfmem = (unsigned int  )0;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)4352;
        sqlstm.occurs = (unsigned int  )0;
        sqlstm.sqfoff = (           int )0;
        sqlstm.sqfmod = (unsigned int )2;
        sqlstm.sqhstv[0] = (         void  *)d_num;
        sqlstm.sqhstl[0] = (unsigned int  )6;
        sqlstm.sqhsts[0] = (         int  )0;
        sqlstm.sqindv[0] = (         void  *)0;
        sqlstm.sqinds[0] = (         int  )0;
        sqlstm.sqharm[0] = (unsigned int  )0;
        sqlstm.sqadto[0] = (unsigned short )0;
        sqlstm.sqtdso[0] = (unsigned short )0;
        sqlstm.sqhstv[1] = (         void  *)&d_name;
        sqlstm.sqhstl[1] = (unsigned int  )257;
        sqlstm.sqhsts[1] = (         int  )0;
        sqlstm.sqindv[1] = (         void  *)0;
        sqlstm.sqinds[1] = (         int  )0;
        sqlstm.sqharm[1] = (unsigned int  )0;
        sqlstm.sqadto[1] = (unsigned short )0;
        sqlstm.sqtdso[1] = (unsigned short )0;
        sqlstm.sqhstv[2] = (         void  *)&d_position;
        sqlstm.sqhstl[2] = (unsigned int  )257;
        sqlstm.sqhsts[2] = (         int  )0;
        sqlstm.sqindv[2] = (         void  *)0;
        sqlstm.sqinds[2] = (         int  )0;
        sqlstm.sqharm[2] = (unsigned int  )0;
        sqlstm.sqadto[2] = (unsigned short )0;
        sqlstm.sqtdso[2] = (unsigned short )0;
        sqlstm.sqhstv[3] = (         void  *)d_deptno;
        sqlstm.sqhstl[3] = (unsigned int  )6;
        sqlstm.sqhsts[3] = (         int  )0;
        sqlstm.sqindv[3] = (         void  *)0;
        sqlstm.sqinds[3] = (         int  )0;
        sqlstm.sqharm[3] = (unsigned int  )0;
        sqlstm.sqadto[3] = (unsigned short )0;
        sqlstm.sqtdso[3] = (unsigned short )0;
        sqlstm.sqphsv = sqlstm.sqhstv;
        sqlstm.sqphsl = sqlstm.sqhstl;
        sqlstm.sqphss = sqlstm.sqhsts;
        sqlstm.sqpind = sqlstm.sqindv;
        sqlstm.sqpins = sqlstm.sqinds;
        sqlstm.sqparm = sqlstm.sqharm;
        sqlstm.sqparc = sqlstm.sqharc;
        sqlstm.sqpadto = sqlstm.sqadto;
        sqlstm.sqptdso = sqlstm.sqtdso;
        sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
        if (sqlca.sqlcode == 1403) break;
        if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}


     		d_name.arr[d_name.len] = '\0';
     		d_position.arr[d_position.len] = '\0';

     		gotoxy(x,y);
      		printf("%-10s %-17s %-21s %-8s", d_num, d_name.arr, d_position.arr, d_deptno);
      		y+=2;
      		count++;

      		if( count == PAGE_NUM)
      		{
         			count = 0;
         			getch();
     
        			gotoxy(21, 18); //이전 화면 부분 클리어
         			for(i= 0; i < PAGE_NUM*2; i++)
        			 {
             			printf("│              │                                                                  │            │\n");
         			 }
         			 y = 18;
	
      		}

	}

   	gotoxy(5,37);
   	printf("계속하려면 아무 키나 누르세요..");
   	getch();
   	gotoxy(5,37);
   	printf("                                                   ");

	/* EXEC SQL CLOSE c_cursor2; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 13;
 sqlstm.arrsiz = 9;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )1430;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)4352;
 sqlstm.occurs = (unsigned int  )0;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
 if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}

   // 커서에 할당된 자원을 해제함.
	/* EXEC SQL COMMIT WORK; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 13;
 sqlstm.arrsiz = 9;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )1445;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)4352;
 sqlstm.occurs = (unsigned int  )0;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
 if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}

   // 현재 진행중인 트랜잭션을 커밋하고 데이터베이스 연결은 종료하지 않음.

	edit_doctor_account2();
}


// 간호사 계정 수정 전 전체조회 함수
#define PAGE_NUM 9
void edit_nurse_account()
{
	system("mode con cols=125 lines=40");
	/* EXEC SQL BEGIN DECLARE SECTION; */ 

	  char n_num[6]={""};
	  /* varchar n_name[255]={""}; */ 
struct { unsigned short len; unsigned char arr[255]; } n_name
 = {""};

	  /* varchar n_position[255]={""}; */ 
struct { unsigned short len; unsigned char arr[255]; } n_position
 = {""};

	  char n_deptno[6]={""};

	  char dynstmt[1000] = {""};
	/* EXEC SQL END DECLARE SECTION; */ 


	int x, y, i, count = 0;

   	system("cls");
   	printf("\n");
   	/* EXEC SQL WHENEVER SQLERROR DO sql_error("\7ORACLE ERROR:\n"); */ 

   	print_screen("edit_nurse_account.txt");

   	sprintf(dynstmt,"SELECT * FROM h_nurse");

   	/* EXEC SQL PREPARE S FROM :dynstmt; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 9;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )1460;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqhstv[0] = (         void  *)dynstmt;
    sqlstm.sqhstl[0] = (unsigned int  )1000;
    sqlstm.sqhsts[0] = (         int  )0;
    sqlstm.sqindv[0] = (         void  *)0;
    sqlstm.sqinds[0] = (         int  )0;
    sqlstm.sqharm[0] = (unsigned int  )0;
    sqlstm.sqadto[0] = (unsigned short )0;
    sqlstm.sqtdso[0] = (unsigned short )0;
    sqlstm.sqphsv = sqlstm.sqhstv;
    sqlstm.sqphsl = sqlstm.sqhstl;
    sqlstm.sqphss = sqlstm.sqhsts;
    sqlstm.sqpind = sqlstm.sqindv;
    sqlstm.sqpins = sqlstm.sqinds;
    sqlstm.sqparm = sqlstm.sqharm;
    sqlstm.sqparc = sqlstm.sqharc;
    sqlstm.sqpadto = sqlstm.sqadto;
    sqlstm.sqptdso = sqlstm.sqtdso;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
    if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}


   	/* EXEC SQL DECLARE c_cursor3 CURSOR FOR S; */ 

   	/* EXEC SQL OPEN c_cursor3; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 9;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )1479;
    sqlstm.selerr = (unsigned short)1;
    sqlstm.sqlpfmem = (unsigned int  )0;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqcmod = (unsigned int )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
    if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}


	/* EXEC SQL WHENEVER NOT FOUND DO break; */ 


   	x = 21;
   	y = 18;

   	for (;;)
  	{
      		/* EXEC SQL FETCH c_cursor3 INTO :n_num, :n_name, :n_position, :n_deptno; */ 

{
        struct sqlexd sqlstm;
        sqlstm.sqlvsn = 13;
        sqlstm.arrsiz = 9;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )1494;
        sqlstm.selerr = (unsigned short)1;
        sqlstm.sqlpfmem = (unsigned int  )0;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)4352;
        sqlstm.occurs = (unsigned int  )0;
        sqlstm.sqfoff = (           int )0;
        sqlstm.sqfmod = (unsigned int )2;
        sqlstm.sqhstv[0] = (         void  *)n_num;
        sqlstm.sqhstl[0] = (unsigned int  )6;
        sqlstm.sqhsts[0] = (         int  )0;
        sqlstm.sqindv[0] = (         void  *)0;
        sqlstm.sqinds[0] = (         int  )0;
        sqlstm.sqharm[0] = (unsigned int  )0;
        sqlstm.sqadto[0] = (unsigned short )0;
        sqlstm.sqtdso[0] = (unsigned short )0;
        sqlstm.sqhstv[1] = (         void  *)&n_name;
        sqlstm.sqhstl[1] = (unsigned int  )257;
        sqlstm.sqhsts[1] = (         int  )0;
        sqlstm.sqindv[1] = (         void  *)0;
        sqlstm.sqinds[1] = (         int  )0;
        sqlstm.sqharm[1] = (unsigned int  )0;
        sqlstm.sqadto[1] = (unsigned short )0;
        sqlstm.sqtdso[1] = (unsigned short )0;
        sqlstm.sqhstv[2] = (         void  *)&n_position;
        sqlstm.sqhstl[2] = (unsigned int  )257;
        sqlstm.sqhsts[2] = (         int  )0;
        sqlstm.sqindv[2] = (         void  *)0;
        sqlstm.sqinds[2] = (         int  )0;
        sqlstm.sqharm[2] = (unsigned int  )0;
        sqlstm.sqadto[2] = (unsigned short )0;
        sqlstm.sqtdso[2] = (unsigned short )0;
        sqlstm.sqhstv[3] = (         void  *)n_deptno;
        sqlstm.sqhstl[3] = (unsigned int  )6;
        sqlstm.sqhsts[3] = (         int  )0;
        sqlstm.sqindv[3] = (         void  *)0;
        sqlstm.sqinds[3] = (         int  )0;
        sqlstm.sqharm[3] = (unsigned int  )0;
        sqlstm.sqadto[3] = (unsigned short )0;
        sqlstm.sqtdso[3] = (unsigned short )0;
        sqlstm.sqphsv = sqlstm.sqhstv;
        sqlstm.sqphsl = sqlstm.sqhstl;
        sqlstm.sqphss = sqlstm.sqhsts;
        sqlstm.sqpind = sqlstm.sqindv;
        sqlstm.sqpins = sqlstm.sqinds;
        sqlstm.sqparm = sqlstm.sqharm;
        sqlstm.sqparc = sqlstm.sqharc;
        sqlstm.sqpadto = sqlstm.sqadto;
        sqlstm.sqptdso = sqlstm.sqtdso;
        sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
        if (sqlca.sqlcode == 1403) break;
        if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}


     		n_name.arr[n_name.len] = '\0';
     		n_position.arr[n_position.len] = '\0';

     		gotoxy(x,y);
      		printf("%-10s %-17s %-21s %-8s", n_num, n_name.arr, n_position.arr, n_deptno);
      		y+=2;
      		count++;

      		if( count == PAGE_NUM)
      		{
         			count = 0;
         			getch();
      
        			 gotoxy(21, 18); //이전 화면 부분 클리어
         			for(i= 0; i < PAGE_NUM*2; i++)
        			 {
             			printf("│              │                                                                  │            │\n");
         			 }
         			 y = 18;

      		}

	}
   	gotoxy(5,37);
   	printf("계속하려면 아무 키나 누르세요..");
   	getch();
   	gotoxy(5,37);
   	printf("                                                   ");

	/* EXEC SQL CLOSE c_cursor3; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 13;
 sqlstm.arrsiz = 9;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )1525;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)4352;
 sqlstm.occurs = (unsigned int  )0;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
 if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}

   // 커서에 할당된 자원을 해제함.
	/* EXEC SQL COMMIT WORK; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 13;
 sqlstm.arrsiz = 9;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )1540;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)4352;
 sqlstm.occurs = (unsigned int  )0;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
 if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}

   // 현재 진행중인 트랜잭션을 커밋하고 데이터베이스 연결은 종료하지 않음.

	edit_nurse_account2();
}


// 부서 삭제 전 조회 함수
#define PAGE_NUM 9
void delete_department()
{
	system("mode con cols=125 lines=40");
	/* EXEC SQL BEGIN DECLARE SECTION; */ 

	  char h_dept_num[6]={""};
	  /* varchar h_dept_n[255]={""}; */ 
struct { unsigned short len; unsigned char arr[255]; } h_dept_n
 = {""};


	  char dynstmt[1000] = {""};
	/* EXEC SQL END DECLARE SECTION; */ 


	int x, y, i, count = 0;

   	system("cls");
   	printf("\n");
   	/* EXEC SQL WHENEVER SQLERROR DO sql_error("\7ORACLE ERROR:\n"); */ 

   	print_screen("delete_department.txt");

   	sprintf(dynstmt,"SELECT * FROM h_dept");

   	/* EXEC SQL PREPARE S FROM :dynstmt; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 9;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )1555;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqhstv[0] = (         void  *)dynstmt;
    sqlstm.sqhstl[0] = (unsigned int  )1000;
    sqlstm.sqhsts[0] = (         int  )0;
    sqlstm.sqindv[0] = (         void  *)0;
    sqlstm.sqinds[0] = (         int  )0;
    sqlstm.sqharm[0] = (unsigned int  )0;
    sqlstm.sqadto[0] = (unsigned short )0;
    sqlstm.sqtdso[0] = (unsigned short )0;
    sqlstm.sqphsv = sqlstm.sqhstv;
    sqlstm.sqphsl = sqlstm.sqhstl;
    sqlstm.sqphss = sqlstm.sqhsts;
    sqlstm.sqpind = sqlstm.sqindv;
    sqlstm.sqpins = sqlstm.sqinds;
    sqlstm.sqparm = sqlstm.sqharm;
    sqlstm.sqparc = sqlstm.sqharc;
    sqlstm.sqpadto = sqlstm.sqadto;
    sqlstm.sqptdso = sqlstm.sqtdso;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
    if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}


   	/* EXEC SQL DECLARE c_cursor4 CURSOR FOR S; */ 

   	/* EXEC SQL OPEN c_cursor4; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 9;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )1574;
    sqlstm.selerr = (unsigned short)1;
    sqlstm.sqlpfmem = (unsigned int  )0;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqcmod = (unsigned int )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
    if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}


	/* EXEC SQL WHENEVER NOT FOUND DO break; */ 


   	x = 35;
   	y = 18;

   	for (;;)
  	{
      		/* EXEC SQL FETCH c_cursor4 INTO :h_dept_num, :h_dept_n; */ 

{
        struct sqlexd sqlstm;
        sqlstm.sqlvsn = 13;
        sqlstm.arrsiz = 9;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )1589;
        sqlstm.selerr = (unsigned short)1;
        sqlstm.sqlpfmem = (unsigned int  )0;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)4352;
        sqlstm.occurs = (unsigned int  )0;
        sqlstm.sqfoff = (           int )0;
        sqlstm.sqfmod = (unsigned int )2;
        sqlstm.sqhstv[0] = (         void  *)h_dept_num;
        sqlstm.sqhstl[0] = (unsigned int  )6;
        sqlstm.sqhsts[0] = (         int  )0;
        sqlstm.sqindv[0] = (         void  *)0;
        sqlstm.sqinds[0] = (         int  )0;
        sqlstm.sqharm[0] = (unsigned int  )0;
        sqlstm.sqadto[0] = (unsigned short )0;
        sqlstm.sqtdso[0] = (unsigned short )0;
        sqlstm.sqhstv[1] = (         void  *)&h_dept_n;
        sqlstm.sqhstl[1] = (unsigned int  )257;
        sqlstm.sqhsts[1] = (         int  )0;
        sqlstm.sqindv[1] = (         void  *)0;
        sqlstm.sqinds[1] = (         int  )0;
        sqlstm.sqharm[1] = (unsigned int  )0;
        sqlstm.sqadto[1] = (unsigned short )0;
        sqlstm.sqtdso[1] = (unsigned short )0;
        sqlstm.sqphsv = sqlstm.sqhstv;
        sqlstm.sqphsl = sqlstm.sqhstl;
        sqlstm.sqphss = sqlstm.sqhsts;
        sqlstm.sqpind = sqlstm.sqindv;
        sqlstm.sqpins = sqlstm.sqinds;
        sqlstm.sqparm = sqlstm.sqharm;
        sqlstm.sqparc = sqlstm.sqharc;
        sqlstm.sqpadto = sqlstm.sqadto;
        sqlstm.sqptdso = sqlstm.sqtdso;
        sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
        if (sqlca.sqlcode == 1403) break;
        if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}


     		h_dept_n.arr[h_dept_n.len] = '\0';

     		gotoxy(x,y);
      		printf("%-13s %-20s", h_dept_num, h_dept_n.arr);
      		y+=2;
      		count++;

      		if( count == PAGE_NUM)
      		{
         			count = 0;
         			getch();
      
        			gotoxy(35, 18); //이전 화면 부분 클리어
         			for(i= 0; i < PAGE_NUM*2; i++)
        			 {
             			printf("│                            │                                       │                         │\n");
         			 }
         			 y = 18;

      		}

	}
   	gotoxy(5,37);
   	printf("계속하려면 아무 키나 누르세요..");
   	getch();
   	gotoxy(5,37);
   	printf("                                                   ");

	/* EXEC SQL CLOSE c_cursor4; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 13;
 sqlstm.arrsiz = 9;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )1612;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)4352;
 sqlstm.occurs = (unsigned int  )0;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
 if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}

   // 커서에 할당된 자원을 해제함.
	/* EXEC SQL COMMIT WORK; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 13;
 sqlstm.arrsiz = 9;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )1627;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)4352;
 sqlstm.occurs = (unsigned int  )0;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
 if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}

   // 현재 진행중인 트랜잭션을 커밋하고 데이터베이스 연결은 종료하지 않음.

	delete_department2();
}

// 환자 정보 조회 함수
#define PAGE_NUM 9
void select_patient(char userNum[6])
{
   system("mode con cols=125 lines=40");
   /* EXEC SQL BEGIN DECLARE SECTION; */ 

      char p_number[6] = {""};
      /* varchar p_name[255] = {""}; */ 
struct { unsigned short len; unsigned char arr[255]; } p_name
 = {""};

      /* varchar p_hp[255] = {""}; */ 
struct { unsigned short len; unsigned char arr[255]; } p_hp
 = {""};

      /* varchar p_rrn[255] = {""}; */ 
struct { unsigned short len; unsigned char arr[255]; } p_rrn
 = {""};

      /* varchar p_address[255] = {""}; */ 
struct { unsigned short len; unsigned char arr[255]; } p_address
 = {""};

      char p_roomnum[5] = {""};
      char p_pdoc[6] = {""};
      /* varchar p_enter_date[255] = {""}; */ 
struct { unsigned short len; unsigned char arr[255]; } p_enter_date
 = {""};

      /* varchar p_leave_date[255] = {""}; */ 
struct { unsigned short len; unsigned char arr[255]; } p_leave_date
 = {""};

      char dynstmt[1000] = {""};
      short indicator;   // 지시자 변수(null 필드 처리 용도)
   /* EXEC SQL END DECLARE SECTION; */ 


   char num[20] = {""};
   varchar name[255] = {""};
   int x, y, i, count = 0;

   system("cls");
   printf("\n");
   /* EXEC SQL WHENEVER SQLERROR DO sql_error("\7ORACLE ERROR:\n"); */ 

   /* EXEC SQL WHENEVER SQLERROR DO printf(""); */ 

   print_screen("select_patient.txt");

   gotoxy(49,12);
   rewind(stdin);
   gets(num);

   gotoxy(87,12);
   rewind(stdin);
   gets(name);

   if(userNum[0] == 'D')
   {
      sprintf(dynstmt,"SELECT * FROM H_PATIENT where patient_pdoc = '%s' and patient_number LIKE '%%%s%%' and patient_name LIKE '%%%s%%'", userNum, num, name);
   }
   else
   {
      sprintf(dynstmt,"SELECT * FROM H_PATIENT where patient_number LIKE '%%%s%%' and patient_name LIKE '%%%s%%'", num, name);
   }
   /* EXEC SQL PREPARE S FROM :dynstmt; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 9;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )1642;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlstm.sqhstv[0] = (         void  *)dynstmt;
   sqlstm.sqhstl[0] = (unsigned int  )1000;
   sqlstm.sqhsts[0] = (         int  )0;
   sqlstm.sqindv[0] = (         void  *)0;
   sqlstm.sqinds[0] = (         int  )0;
   sqlstm.sqharm[0] = (unsigned int  )0;
   sqlstm.sqadto[0] = (unsigned short )0;
   sqlstm.sqtdso[0] = (unsigned short )0;
   sqlstm.sqphsv = sqlstm.sqhstv;
   sqlstm.sqphsl = sqlstm.sqhstl;
   sqlstm.sqphss = sqlstm.sqhsts;
   sqlstm.sqpind = sqlstm.sqindv;
   sqlstm.sqpins = sqlstm.sqinds;
   sqlstm.sqparm = sqlstm.sqharm;
   sqlstm.sqparc = sqlstm.sqharc;
   sqlstm.sqpadto = sqlstm.sqadto;
   sqlstm.sqptdso = sqlstm.sqtdso;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
   if (sqlca.sqlcode < 0) printf("");
}



   /* EXEC SQL DECLARE c_cursor CURSOR FOR S; */ 

   
   /* EXEC SQL OPEN c_cursor; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 9;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )1661;
   sqlstm.selerr = (unsigned short)1;
   sqlstm.sqlpfmem = (unsigned int  )0;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlstm.sqcmod = (unsigned int )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
   if (sqlca.sqlcode < 0) printf("");
}



   x = 4;
   y = 18;

   for (;;)
   {
      if (sqlca.sqlcode == 1403) {
        break;
      }

      /* EXEC SQL FETCH c_cursor INTO :p_number, :p_name, :p_hp, :p_rrn, :p_address, :p_roomnum, :p_pdoc, :p_enter_date, :p_leave_date INDICATOR :indicator; */ 

{
      struct sqlexd sqlstm;
      sqlstm.sqlvsn = 13;
      sqlstm.arrsiz = 9;
      sqlstm.sqladtp = &sqladt;
      sqlstm.sqltdsp = &sqltds;
      sqlstm.iters = (unsigned int  )1;
      sqlstm.offset = (unsigned int  )1676;
      sqlstm.selerr = (unsigned short)1;
      sqlstm.sqlpfmem = (unsigned int  )0;
      sqlstm.cud = sqlcud0;
      sqlstm.sqlest = (unsigned char  *)&sqlca;
      sqlstm.sqlety = (unsigned short)4352;
      sqlstm.occurs = (unsigned int  )0;
      sqlstm.sqfoff = (           int )0;
      sqlstm.sqfmod = (unsigned int )2;
      sqlstm.sqhstv[0] = (         void  *)p_number;
      sqlstm.sqhstl[0] = (unsigned int  )6;
      sqlstm.sqhsts[0] = (         int  )0;
      sqlstm.sqindv[0] = (         void  *)0;
      sqlstm.sqinds[0] = (         int  )0;
      sqlstm.sqharm[0] = (unsigned int  )0;
      sqlstm.sqadto[0] = (unsigned short )0;
      sqlstm.sqtdso[0] = (unsigned short )0;
      sqlstm.sqhstv[1] = (         void  *)&p_name;
      sqlstm.sqhstl[1] = (unsigned int  )257;
      sqlstm.sqhsts[1] = (         int  )0;
      sqlstm.sqindv[1] = (         void  *)0;
      sqlstm.sqinds[1] = (         int  )0;
      sqlstm.sqharm[1] = (unsigned int  )0;
      sqlstm.sqadto[1] = (unsigned short )0;
      sqlstm.sqtdso[1] = (unsigned short )0;
      sqlstm.sqhstv[2] = (         void  *)&p_hp;
      sqlstm.sqhstl[2] = (unsigned int  )257;
      sqlstm.sqhsts[2] = (         int  )0;
      sqlstm.sqindv[2] = (         void  *)0;
      sqlstm.sqinds[2] = (         int  )0;
      sqlstm.sqharm[2] = (unsigned int  )0;
      sqlstm.sqadto[2] = (unsigned short )0;
      sqlstm.sqtdso[2] = (unsigned short )0;
      sqlstm.sqhstv[3] = (         void  *)&p_rrn;
      sqlstm.sqhstl[3] = (unsigned int  )257;
      sqlstm.sqhsts[3] = (         int  )0;
      sqlstm.sqindv[3] = (         void  *)0;
      sqlstm.sqinds[3] = (         int  )0;
      sqlstm.sqharm[3] = (unsigned int  )0;
      sqlstm.sqadto[3] = (unsigned short )0;
      sqlstm.sqtdso[3] = (unsigned short )0;
      sqlstm.sqhstv[4] = (         void  *)&p_address;
      sqlstm.sqhstl[4] = (unsigned int  )257;
      sqlstm.sqhsts[4] = (         int  )0;
      sqlstm.sqindv[4] = (         void  *)0;
      sqlstm.sqinds[4] = (         int  )0;
      sqlstm.sqharm[4] = (unsigned int  )0;
      sqlstm.sqadto[4] = (unsigned short )0;
      sqlstm.sqtdso[4] = (unsigned short )0;
      sqlstm.sqhstv[5] = (         void  *)p_roomnum;
      sqlstm.sqhstl[5] = (unsigned int  )5;
      sqlstm.sqhsts[5] = (         int  )0;
      sqlstm.sqindv[5] = (         void  *)0;
      sqlstm.sqinds[5] = (         int  )0;
      sqlstm.sqharm[5] = (unsigned int  )0;
      sqlstm.sqadto[5] = (unsigned short )0;
      sqlstm.sqtdso[5] = (unsigned short )0;
      sqlstm.sqhstv[6] = (         void  *)p_pdoc;
      sqlstm.sqhstl[6] = (unsigned int  )6;
      sqlstm.sqhsts[6] = (         int  )0;
      sqlstm.sqindv[6] = (         void  *)0;
      sqlstm.sqinds[6] = (         int  )0;
      sqlstm.sqharm[6] = (unsigned int  )0;
      sqlstm.sqadto[6] = (unsigned short )0;
      sqlstm.sqtdso[6] = (unsigned short )0;
      sqlstm.sqhstv[7] = (         void  *)&p_enter_date;
      sqlstm.sqhstl[7] = (unsigned int  )257;
      sqlstm.sqhsts[7] = (         int  )0;
      sqlstm.sqindv[7] = (         void  *)0;
      sqlstm.sqinds[7] = (         int  )0;
      sqlstm.sqharm[7] = (unsigned int  )0;
      sqlstm.sqadto[7] = (unsigned short )0;
      sqlstm.sqtdso[7] = (unsigned short )0;
      sqlstm.sqhstv[8] = (         void  *)&p_leave_date;
      sqlstm.sqhstl[8] = (unsigned int  )257;
      sqlstm.sqhsts[8] = (         int  )0;
      sqlstm.sqindv[8] = (         void  *)&indicator;
      sqlstm.sqinds[8] = (         int  )0;
      sqlstm.sqharm[8] = (unsigned int  )0;
      sqlstm.sqadto[8] = (unsigned short )0;
      sqlstm.sqtdso[8] = (unsigned short )0;
      sqlstm.sqphsv = sqlstm.sqhstv;
      sqlstm.sqphsl = sqlstm.sqhstl;
      sqlstm.sqphss = sqlstm.sqhsts;
      sqlstm.sqpind = sqlstm.sqindv;
      sqlstm.sqpins = sqlstm.sqinds;
      sqlstm.sqparm = sqlstm.sqharm;
      sqlstm.sqparc = sqlstm.sqharc;
      sqlstm.sqpadto = sqlstm.sqadto;
      sqlstm.sqptdso = sqlstm.sqtdso;
      sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
      if (sqlca.sqlcode == 1403) break;
      if (sqlca.sqlcode < 0) printf("");
}


      p_name.arr[p_name.len] = '\0';
      p_hp.arr[p_hp.len] = '\0';
      p_rrn.arr[p_rrn.len] = '\0';
      p_address.arr[p_address.len] = '\0';
      p_enter_date.arr[p_enter_date.len] = '\0';
      p_leave_date.arr[p_leave_date.len] = '\0';

      if(indicator==-1)
      {
         strcpy(p_leave_date.arr, "NULL");
      }

      gotoxy(x,y);
      printf("%-9s %-10s %-16s %-15s %-5s %-9s %-10s %-10s %-20s", p_number, p_name.arr, p_hp.arr, p_rrn.arr, p_roomnum, p_pdoc, p_enter_date.arr, p_leave_date.arr, p_address.arr);
      y+=2;
      count++;

      if( count == PAGE_NUM)
      {
         count = 0;
         getch();
      
         gotoxy(4, 18); //이전 화면 부분 클리어
         for(i= 0; i < PAGE_NUM*2; i++)
         {
             printf("│                                                                                                                       │\n");
         }
         y = 18;
      }
   }

   /* EXEC SQL CLOSE c_cursor; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 9;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )1727;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
   if (sqlca.sqlcode < 0) printf("");
}

   // 커서에 할당된 자원을 해제함.

   /* EXEC SQL COMMIT WORK; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 9;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )1742;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
   if (sqlca.sqlcode < 0) printf("");
}

   // 현재 진행중인 트랜잭션을 커밋하고 데이터베이스 연결은 종료하지 않음.

   gotoxy(5,37);
   printf("계속하려면 아무 키나 누르세요..");
   getch();
}


// 환자 정보 수정 함수
void update_patient(char userNum[6])
{
	system("mode con cols=125 lines=40");

	/* EXEC SQL BEGIN DECLARE SECTION; */ 

		char p_number[10] = { "" };
		char user_number[6] = {""};
		int room_max = 0;
		int room_now = 0;
		/* VARCHAR p_name[50] = { "" }; */ 
struct { unsigned short len; unsigned char arr[50]; } p_name
 = {""};

		/* VARCHAR p_hp[50] = { "" }; */ 
struct { unsigned short len; unsigned char arr[50]; } p_hp
 = {""};

		/* VARCHAR p_rrn[50] = { "" }; */ 
struct { unsigned short len; unsigned char arr[50]; } p_rrn
 = {""};

		/* VARCHAR p_address[55] = { "" }; */ 
struct { unsigned short len; unsigned char arr[55]; } p_address
 = {""};

		char p_room[5] = { "" };
		char p_room2[5] = { "" };
		char p_pdoc[6] = { "" };
		/* VARCHAR p_ed[55] = { "" }; */ 
struct { unsigned short len; unsigned char arr[55]; } p_ed
 = {""};

		/* VARCHAR p_ld[55] = { "" }; */ 
struct { unsigned short len; unsigned char arr[55]; } p_ld
 = {""};

		short indicator;   // 지시자 변수(null 필드 처리 용도)
	/* EXEC SQL END DECLARE SECTION; */ 


	system("cls");
	/* EXEC SQL WHENEVER SQLERROR DO printf(""); */ 

	/* EXEC SQL WHENEVER NOT FOUND DO printf(""); */ 

	print_screen("update_patient.txt");

	gotoxy(46, 13);
	printf("의사는 담당 환자만 수정 가능합니다.");

	gotoxy(49, 11);
	rewind(stdin);
	gets(p_number);

	gotoxy(87, 11);
	rewind(stdin);
	gets(p_name.arr);
	p_name.len = strlen(p_name.arr);
	strcpy(user_number,userNum);

	if (userNum[0] == 'N')
	{
		/* EXEC SQL SELECT *
			INTO :p_number, :p_name, :p_hp, :p_rrn, :p_address, :p_room, :p_pdoc, :p_ed, :p_ld INDICATOR :indicator
			FROM H_PATIENT WHERE PATIENT_NAME = :p_name AND PATIENT_NUMBER = :p_number; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 13;
  sqlstm.arrsiz = 11;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "select * into :b0,:b1,:b2,:b3,:b4,:b5,:b6,:b7,:b8:b9  from \
H_PATIENT where (PATIENT_NAME=:b1 and PATIENT_NUMBER=:b0)";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )1757;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.sqlpfmem = (unsigned int  )0;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)4352;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)p_number;
  sqlstm.sqhstl[0] = (unsigned int  )10;
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)0;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (         void  *)&p_name;
  sqlstm.sqhstl[1] = (unsigned int  )52;
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         void  *)0;
  sqlstm.sqinds[1] = (         int  )0;
  sqlstm.sqharm[1] = (unsigned int  )0;
  sqlstm.sqadto[1] = (unsigned short )0;
  sqlstm.sqtdso[1] = (unsigned short )0;
  sqlstm.sqhstv[2] = (         void  *)&p_hp;
  sqlstm.sqhstl[2] = (unsigned int  )52;
  sqlstm.sqhsts[2] = (         int  )0;
  sqlstm.sqindv[2] = (         void  *)0;
  sqlstm.sqinds[2] = (         int  )0;
  sqlstm.sqharm[2] = (unsigned int  )0;
  sqlstm.sqadto[2] = (unsigned short )0;
  sqlstm.sqtdso[2] = (unsigned short )0;
  sqlstm.sqhstv[3] = (         void  *)&p_rrn;
  sqlstm.sqhstl[3] = (unsigned int  )52;
  sqlstm.sqhsts[3] = (         int  )0;
  sqlstm.sqindv[3] = (         void  *)0;
  sqlstm.sqinds[3] = (         int  )0;
  sqlstm.sqharm[3] = (unsigned int  )0;
  sqlstm.sqadto[3] = (unsigned short )0;
  sqlstm.sqtdso[3] = (unsigned short )0;
  sqlstm.sqhstv[4] = (         void  *)&p_address;
  sqlstm.sqhstl[4] = (unsigned int  )57;
  sqlstm.sqhsts[4] = (         int  )0;
  sqlstm.sqindv[4] = (         void  *)0;
  sqlstm.sqinds[4] = (         int  )0;
  sqlstm.sqharm[4] = (unsigned int  )0;
  sqlstm.sqadto[4] = (unsigned short )0;
  sqlstm.sqtdso[4] = (unsigned short )0;
  sqlstm.sqhstv[5] = (         void  *)p_room;
  sqlstm.sqhstl[5] = (unsigned int  )5;
  sqlstm.sqhsts[5] = (         int  )0;
  sqlstm.sqindv[5] = (         void  *)0;
  sqlstm.sqinds[5] = (         int  )0;
  sqlstm.sqharm[5] = (unsigned int  )0;
  sqlstm.sqadto[5] = (unsigned short )0;
  sqlstm.sqtdso[5] = (unsigned short )0;
  sqlstm.sqhstv[6] = (         void  *)p_pdoc;
  sqlstm.sqhstl[6] = (unsigned int  )6;
  sqlstm.sqhsts[6] = (         int  )0;
  sqlstm.sqindv[6] = (         void  *)0;
  sqlstm.sqinds[6] = (         int  )0;
  sqlstm.sqharm[6] = (unsigned int  )0;
  sqlstm.sqadto[6] = (unsigned short )0;
  sqlstm.sqtdso[6] = (unsigned short )0;
  sqlstm.sqhstv[7] = (         void  *)&p_ed;
  sqlstm.sqhstl[7] = (unsigned int  )57;
  sqlstm.sqhsts[7] = (         int  )0;
  sqlstm.sqindv[7] = (         void  *)0;
  sqlstm.sqinds[7] = (         int  )0;
  sqlstm.sqharm[7] = (unsigned int  )0;
  sqlstm.sqadto[7] = (unsigned short )0;
  sqlstm.sqtdso[7] = (unsigned short )0;
  sqlstm.sqhstv[8] = (         void  *)&p_ld;
  sqlstm.sqhstl[8] = (unsigned int  )57;
  sqlstm.sqhsts[8] = (         int  )0;
  sqlstm.sqindv[8] = (         void  *)&indicator;
  sqlstm.sqinds[8] = (         int  )0;
  sqlstm.sqharm[8] = (unsigned int  )0;
  sqlstm.sqadto[8] = (unsigned short )0;
  sqlstm.sqtdso[8] = (unsigned short )0;
  sqlstm.sqhstv[9] = (         void  *)&p_name;
  sqlstm.sqhstl[9] = (unsigned int  )52;
  sqlstm.sqhsts[9] = (         int  )0;
  sqlstm.sqindv[9] = (         void  *)0;
  sqlstm.sqinds[9] = (         int  )0;
  sqlstm.sqharm[9] = (unsigned int  )0;
  sqlstm.sqadto[9] = (unsigned short )0;
  sqlstm.sqtdso[9] = (unsigned short )0;
  sqlstm.sqhstv[10] = (         void  *)p_number;
  sqlstm.sqhstl[10] = (unsigned int  )10;
  sqlstm.sqhsts[10] = (         int  )0;
  sqlstm.sqindv[10] = (         void  *)0;
  sqlstm.sqinds[10] = (         int  )0;
  sqlstm.sqharm[10] = (unsigned int  )0;
  sqlstm.sqadto[10] = (unsigned short )0;
  sqlstm.sqtdso[10] = (unsigned short )0;
  sqlstm.sqphsv = sqlstm.sqhstv;
  sqlstm.sqphsl = sqlstm.sqhstl;
  sqlstm.sqphss = sqlstm.sqhsts;
  sqlstm.sqpind = sqlstm.sqindv;
  sqlstm.sqpins = sqlstm.sqinds;
  sqlstm.sqparm = sqlstm.sqharm;
  sqlstm.sqparc = sqlstm.sqharc;
  sqlstm.sqpadto = sqlstm.sqadto;
  sqlstm.sqptdso = sqlstm.sqtdso;
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
  if (sqlca.sqlcode == 1403) printf("");
  if (sqlca.sqlcode < 0) printf("");
}


	}
	else if(userNum[0] == 'D')
	{
		/* EXEC SQL SELECT *
			INTO :p_number, :p_name, :p_hp, :p_rrn, :p_address, :p_room, :p_pdoc, :p_ed, :p_ld INDICATOR :indicator
			FROM H_PATIENT WHERE PATIENT_PDOC = :user_number and PATIENT_NAME = : p_name AND PATIENT_NUMBER = : p_number; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 13;
  sqlstm.arrsiz = 12;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "select * into :b0,:b1,:b2,:b3,:b4,:b5,:b6,:b7,:b8:b9  from \
H_PATIENT where ((PATIENT_PDOC=:b10 and PATIENT_NAME=:b1) and PATIENT_NUMBER=:\
b0)";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )1816;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.sqlpfmem = (unsigned int  )0;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)4352;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)p_number;
  sqlstm.sqhstl[0] = (unsigned int  )10;
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)0;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (         void  *)&p_name;
  sqlstm.sqhstl[1] = (unsigned int  )52;
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         void  *)0;
  sqlstm.sqinds[1] = (         int  )0;
  sqlstm.sqharm[1] = (unsigned int  )0;
  sqlstm.sqadto[1] = (unsigned short )0;
  sqlstm.sqtdso[1] = (unsigned short )0;
  sqlstm.sqhstv[2] = (         void  *)&p_hp;
  sqlstm.sqhstl[2] = (unsigned int  )52;
  sqlstm.sqhsts[2] = (         int  )0;
  sqlstm.sqindv[2] = (         void  *)0;
  sqlstm.sqinds[2] = (         int  )0;
  sqlstm.sqharm[2] = (unsigned int  )0;
  sqlstm.sqadto[2] = (unsigned short )0;
  sqlstm.sqtdso[2] = (unsigned short )0;
  sqlstm.sqhstv[3] = (         void  *)&p_rrn;
  sqlstm.sqhstl[3] = (unsigned int  )52;
  sqlstm.sqhsts[3] = (         int  )0;
  sqlstm.sqindv[3] = (         void  *)0;
  sqlstm.sqinds[3] = (         int  )0;
  sqlstm.sqharm[3] = (unsigned int  )0;
  sqlstm.sqadto[3] = (unsigned short )0;
  sqlstm.sqtdso[3] = (unsigned short )0;
  sqlstm.sqhstv[4] = (         void  *)&p_address;
  sqlstm.sqhstl[4] = (unsigned int  )57;
  sqlstm.sqhsts[4] = (         int  )0;
  sqlstm.sqindv[4] = (         void  *)0;
  sqlstm.sqinds[4] = (         int  )0;
  sqlstm.sqharm[4] = (unsigned int  )0;
  sqlstm.sqadto[4] = (unsigned short )0;
  sqlstm.sqtdso[4] = (unsigned short )0;
  sqlstm.sqhstv[5] = (         void  *)p_room;
  sqlstm.sqhstl[5] = (unsigned int  )5;
  sqlstm.sqhsts[5] = (         int  )0;
  sqlstm.sqindv[5] = (         void  *)0;
  sqlstm.sqinds[5] = (         int  )0;
  sqlstm.sqharm[5] = (unsigned int  )0;
  sqlstm.sqadto[5] = (unsigned short )0;
  sqlstm.sqtdso[5] = (unsigned short )0;
  sqlstm.sqhstv[6] = (         void  *)p_pdoc;
  sqlstm.sqhstl[6] = (unsigned int  )6;
  sqlstm.sqhsts[6] = (         int  )0;
  sqlstm.sqindv[6] = (         void  *)0;
  sqlstm.sqinds[6] = (         int  )0;
  sqlstm.sqharm[6] = (unsigned int  )0;
  sqlstm.sqadto[6] = (unsigned short )0;
  sqlstm.sqtdso[6] = (unsigned short )0;
  sqlstm.sqhstv[7] = (         void  *)&p_ed;
  sqlstm.sqhstl[7] = (unsigned int  )57;
  sqlstm.sqhsts[7] = (         int  )0;
  sqlstm.sqindv[7] = (         void  *)0;
  sqlstm.sqinds[7] = (         int  )0;
  sqlstm.sqharm[7] = (unsigned int  )0;
  sqlstm.sqadto[7] = (unsigned short )0;
  sqlstm.sqtdso[7] = (unsigned short )0;
  sqlstm.sqhstv[8] = (         void  *)&p_ld;
  sqlstm.sqhstl[8] = (unsigned int  )57;
  sqlstm.sqhsts[8] = (         int  )0;
  sqlstm.sqindv[8] = (         void  *)&indicator;
  sqlstm.sqinds[8] = (         int  )0;
  sqlstm.sqharm[8] = (unsigned int  )0;
  sqlstm.sqadto[8] = (unsigned short )0;
  sqlstm.sqtdso[8] = (unsigned short )0;
  sqlstm.sqhstv[9] = (         void  *)user_number;
  sqlstm.sqhstl[9] = (unsigned int  )6;
  sqlstm.sqhsts[9] = (         int  )0;
  sqlstm.sqindv[9] = (         void  *)0;
  sqlstm.sqinds[9] = (         int  )0;
  sqlstm.sqharm[9] = (unsigned int  )0;
  sqlstm.sqadto[9] = (unsigned short )0;
  sqlstm.sqtdso[9] = (unsigned short )0;
  sqlstm.sqhstv[10] = (         void  *)&p_name;
  sqlstm.sqhstl[10] = (unsigned int  )52;
  sqlstm.sqhsts[10] = (         int  )0;
  sqlstm.sqindv[10] = (         void  *)0;
  sqlstm.sqinds[10] = (         int  )0;
  sqlstm.sqharm[10] = (unsigned int  )0;
  sqlstm.sqadto[10] = (unsigned short )0;
  sqlstm.sqtdso[10] = (unsigned short )0;
  sqlstm.sqhstv[11] = (         void  *)p_number;
  sqlstm.sqhstl[11] = (unsigned int  )10;
  sqlstm.sqhsts[11] = (         int  )0;
  sqlstm.sqindv[11] = (         void  *)0;
  sqlstm.sqinds[11] = (         int  )0;
  sqlstm.sqharm[11] = (unsigned int  )0;
  sqlstm.sqadto[11] = (unsigned short )0;
  sqlstm.sqtdso[11] = (unsigned short )0;
  sqlstm.sqphsv = sqlstm.sqhstv;
  sqlstm.sqphsl = sqlstm.sqhstl;
  sqlstm.sqphss = sqlstm.sqhsts;
  sqlstm.sqpind = sqlstm.sqindv;
  sqlstm.sqpins = sqlstm.sqinds;
  sqlstm.sqparm = sqlstm.sqharm;
  sqlstm.sqparc = sqlstm.sqharc;
  sqlstm.sqpadto = sqlstm.sqadto;
  sqlstm.sqptdso = sqlstm.sqtdso;
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
  if (sqlca.sqlcode == 1403) printf("");
  if (sqlca.sqlcode < 0) printf("");
}


	}

	if(indicator==-1)
	{
		strcpy(p_ld.arr, "NULL");
	}

	if(sqlca.sqlcode==1403)
	{
		gotoxy(36, 13);
		printf("수정을 원하는 환자 정보가 없습니다. 다시 확인하고 오세요.\n");
		getch();
	}
	else
	{
		// 조회한 환자 정보 출력
		gotoxy(4, 18);
		printf("%-9s %-10s %-16s %-15s %-5s %-9s %-10s %-10s %-20s", p_number, p_name.arr, p_hp.arr, p_rrn.arr, p_room, p_pdoc, p_ed.arr, p_ld.arr, p_address.arr);

		// 수정할 환자 정보 입력 (공백 입력되면 바꾸기 전 값이 그대로 들어감)
		gotoxy(4, 26);
		printf("%s", p_number);

		VARCHAR p_name2[50] = {""};
		strcpy(p_name2,p_name.arr);
		gotoxy(14, 26);
		rewind(stdin);
		gets(p_name.arr);
		if(strcmp(p_name.arr,"")==0) { gotoxy(14, 26); printf("%s", p_name2); strcpy(p_name.arr, p_name2); }

		VARCHAR p_hp2[50] = { "" };
		strcpy(p_hp2,p_hp.arr);
		gotoxy(25, 26);
		rewind(stdin);
		gets(p_hp.arr);
		if(strcmp(p_hp.arr,"")==0) { gotoxy(25, 26); printf("%s", p_hp2); strcpy(p_hp.arr, p_hp2); }

		VARCHAR p_rrn2[50] = { "" };
		strcpy(p_rrn2,p_rrn.arr);
		gotoxy(42, 26);
		rewind(stdin);
		gets(p_rrn.arr);
		if(strcmp(p_rrn.arr,"")==0) { gotoxy(42, 26); printf("%s", p_rrn2); strcpy(p_rrn.arr, p_rrn2); }

		strcpy(p_room2,p_room);
		gotoxy(58, 26);
		rewind(stdin);
		gets(p_room);
		if(strcmp(p_room,"")==0) { gotoxy(58, 26); printf("%s", p_room2); strcpy(p_room, p_room2); }

		char p_pdoc2[6] = { "" };
		strcpy(p_pdoc2,p_pdoc);
		gotoxy(64, 26);
		rewind(stdin);
		gets(p_pdoc);
		if(strcmp(p_pdoc,"")==0) { gotoxy(64, 26); printf("%s", p_pdoc2); strcpy(p_pdoc, p_pdoc2); }

		gotoxy(74, 26);
		printf(p_ed.arr);

		gotoxy(85, 26);
		printf(p_ld.arr);

		VARCHAR p_address2[55] = { "" };
		strcpy(p_address2,p_address.arr);
		gotoxy(97, 26);
		rewind(stdin);
		gets(p_address.arr);
		if(strcmp(p_address.arr,"")==0) { gotoxy(97, 26); printf("%s", p_address2); strcpy(p_address.arr, p_address2); }

		p_name.len = strlen(p_name.arr);
		p_hp.len = strlen(p_hp.arr);
		p_rrn.len = strlen(p_rrn.arr);
		p_address.len = strlen(p_address.arr);
		p_ed.len = strlen(p_ed.arr);
		p_ld.len = strlen(p_ld.arr);

		/* EXEC SQL SELECT ROOM_MAX, ROOM_NOW
			INTO : room_max, : room_now
			FROM H_ROOM WHERE ROOM_NUMBER = : p_room; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 13;
  sqlstm.arrsiz = 12;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "select ROOM_MAX ,ROOM_NOW into :b0,:b1  from H_ROOM where R\
OOM_NUMBER=:b2";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )1879;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.sqlpfmem = (unsigned int  )0;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)4352;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)&room_max;
  sqlstm.sqhstl[0] = (unsigned int  )sizeof(int);
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)0;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (         void  *)&room_now;
  sqlstm.sqhstl[1] = (unsigned int  )sizeof(int);
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         void  *)0;
  sqlstm.sqinds[1] = (         int  )0;
  sqlstm.sqharm[1] = (unsigned int  )0;
  sqlstm.sqadto[1] = (unsigned short )0;
  sqlstm.sqtdso[1] = (unsigned short )0;
  sqlstm.sqhstv[2] = (         void  *)p_room;
  sqlstm.sqhstl[2] = (unsigned int  )5;
  sqlstm.sqhsts[2] = (         int  )0;
  sqlstm.sqindv[2] = (         void  *)0;
  sqlstm.sqinds[2] = (         int  )0;
  sqlstm.sqharm[2] = (unsigned int  )0;
  sqlstm.sqadto[2] = (unsigned short )0;
  sqlstm.sqtdso[2] = (unsigned short )0;
  sqlstm.sqphsv = sqlstm.sqhstv;
  sqlstm.sqphsl = sqlstm.sqhstl;
  sqlstm.sqphss = sqlstm.sqhsts;
  sqlstm.sqpind = sqlstm.sqindv;
  sqlstm.sqpins = sqlstm.sqinds;
  sqlstm.sqparm = sqlstm.sqharm;
  sqlstm.sqparc = sqlstm.sqharc;
  sqlstm.sqpadto = sqlstm.sqadto;
  sqlstm.sqptdso = sqlstm.sqtdso;
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
  if (sqlca.sqlcode == 1403) printf("");
  if (sqlca.sqlcode < 0) printf("");
}


		if(sqlca.sqlcode==1403)
		{
			gotoxy(43, 30);
			printf("입력 양식이 잘못 되었거나 없는 병실입니다.\n");
			gotoxy(48, 31);
			printf("입력양식은 0000입니다.\n");
			getch();
		}
		else
		{
			if (room_max == room_now)
			{
				gotoxy(42, 31);
				printf("해당 병실은 다 찼습니다. 정보를 다시 입력하세요");
				getch();
			}
			else
			{
				/* EXEC SQL UPDATE H_PATIENT SET PATIENT_NAME = :p_name, PATIENT_HP = : p_hp, PATIENT_RRN = : p_rrn, PATIENT_ADDRESS = : p_address, PATIENT_ROOMNUM = : p_room, PATIENT_PDOC = : p_pdoc WHERE PATIENT_NUMBER = : p_number; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 12;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "update H_PATIENT  set PATIENT_NAME=:b0,PATIENT_HP=:b1,PAT\
IENT_RRN=:b2,PATIENT_ADDRESS=:b3,PATIENT_ROOMNUM=:b4,PATIENT_PDOC=:b5 where PA\
TIENT_NUMBER=:b6";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )1906;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqhstv[0] = (         void  *)&p_name;
    sqlstm.sqhstl[0] = (unsigned int  )52;
    sqlstm.sqhsts[0] = (         int  )0;
    sqlstm.sqindv[0] = (         void  *)0;
    sqlstm.sqinds[0] = (         int  )0;
    sqlstm.sqharm[0] = (unsigned int  )0;
    sqlstm.sqadto[0] = (unsigned short )0;
    sqlstm.sqtdso[0] = (unsigned short )0;
    sqlstm.sqhstv[1] = (         void  *)&p_hp;
    sqlstm.sqhstl[1] = (unsigned int  )52;
    sqlstm.sqhsts[1] = (         int  )0;
    sqlstm.sqindv[1] = (         void  *)0;
    sqlstm.sqinds[1] = (         int  )0;
    sqlstm.sqharm[1] = (unsigned int  )0;
    sqlstm.sqadto[1] = (unsigned short )0;
    sqlstm.sqtdso[1] = (unsigned short )0;
    sqlstm.sqhstv[2] = (         void  *)&p_rrn;
    sqlstm.sqhstl[2] = (unsigned int  )52;
    sqlstm.sqhsts[2] = (         int  )0;
    sqlstm.sqindv[2] = (         void  *)0;
    sqlstm.sqinds[2] = (         int  )0;
    sqlstm.sqharm[2] = (unsigned int  )0;
    sqlstm.sqadto[2] = (unsigned short )0;
    sqlstm.sqtdso[2] = (unsigned short )0;
    sqlstm.sqhstv[3] = (         void  *)&p_address;
    sqlstm.sqhstl[3] = (unsigned int  )57;
    sqlstm.sqhsts[3] = (         int  )0;
    sqlstm.sqindv[3] = (         void  *)0;
    sqlstm.sqinds[3] = (         int  )0;
    sqlstm.sqharm[3] = (unsigned int  )0;
    sqlstm.sqadto[3] = (unsigned short )0;
    sqlstm.sqtdso[3] = (unsigned short )0;
    sqlstm.sqhstv[4] = (         void  *)p_room;
    sqlstm.sqhstl[4] = (unsigned int  )5;
    sqlstm.sqhsts[4] = (         int  )0;
    sqlstm.sqindv[4] = (         void  *)0;
    sqlstm.sqinds[4] = (         int  )0;
    sqlstm.sqharm[4] = (unsigned int  )0;
    sqlstm.sqadto[4] = (unsigned short )0;
    sqlstm.sqtdso[4] = (unsigned short )0;
    sqlstm.sqhstv[5] = (         void  *)p_pdoc;
    sqlstm.sqhstl[5] = (unsigned int  )6;
    sqlstm.sqhsts[5] = (         int  )0;
    sqlstm.sqindv[5] = (         void  *)0;
    sqlstm.sqinds[5] = (         int  )0;
    sqlstm.sqharm[5] = (unsigned int  )0;
    sqlstm.sqadto[5] = (unsigned short )0;
    sqlstm.sqtdso[5] = (unsigned short )0;
    sqlstm.sqhstv[6] = (         void  *)p_number;
    sqlstm.sqhstl[6] = (unsigned int  )10;
    sqlstm.sqhsts[6] = (         int  )0;
    sqlstm.sqindv[6] = (         void  *)0;
    sqlstm.sqinds[6] = (         int  )0;
    sqlstm.sqharm[6] = (unsigned int  )0;
    sqlstm.sqadto[6] = (unsigned short )0;
    sqlstm.sqtdso[6] = (unsigned short )0;
    sqlstm.sqphsv = sqlstm.sqhstv;
    sqlstm.sqphsl = sqlstm.sqhstl;
    sqlstm.sqphss = sqlstm.sqhsts;
    sqlstm.sqpind = sqlstm.sqindv;
    sqlstm.sqpins = sqlstm.sqinds;
    sqlstm.sqparm = sqlstm.sqharm;
    sqlstm.sqparc = sqlstm.sqharc;
    sqlstm.sqpadto = sqlstm.sqadto;
    sqlstm.sqptdso = sqlstm.sqtdso;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
    if (sqlca.sqlcode == 1403) printf("");
    if (sqlca.sqlcode < 0) printf("");
}


				if (sqlca.sqlcode == -1) {
					gotoxy(40, 28);
					printf("주민번호가 중복됩니다! 회원정보 수정을 종료합니다. \n");
					getch();
				}
				else if (sqlca.sqlcode == -2291) {
					gotoxy(40, 30);
					printf("입력양식이 잘못되었거나 혹은 없는 의사번호 입니다 \n");
					gotoxy(48, 31);
					printf("입력양식은 D0000입니다. \n");
					getch();
				}
				else {
					room_now += 1;
					/* EXEC SQL UPDATE H_ROOM SET ROOM_NOW = :room_now WHERE ROOM_NUMBER = :p_room; */ 

{
     struct sqlexd sqlstm;
     sqlstm.sqlvsn = 13;
     sqlstm.arrsiz = 12;
     sqlstm.sqladtp = &sqladt;
     sqlstm.sqltdsp = &sqltds;
     sqlstm.stmt = "update H_ROOM  set ROOM_NOW=:b0 where ROOM_NUMBER=:b1";
     sqlstm.iters = (unsigned int  )1;
     sqlstm.offset = (unsigned int  )1949;
     sqlstm.cud = sqlcud0;
     sqlstm.sqlest = (unsigned char  *)&sqlca;
     sqlstm.sqlety = (unsigned short)4352;
     sqlstm.occurs = (unsigned int  )0;
     sqlstm.sqhstv[0] = (         void  *)&room_now;
     sqlstm.sqhstl[0] = (unsigned int  )sizeof(int);
     sqlstm.sqhsts[0] = (         int  )0;
     sqlstm.sqindv[0] = (         void  *)0;
     sqlstm.sqinds[0] = (         int  )0;
     sqlstm.sqharm[0] = (unsigned int  )0;
     sqlstm.sqadto[0] = (unsigned short )0;
     sqlstm.sqtdso[0] = (unsigned short )0;
     sqlstm.sqhstv[1] = (         void  *)p_room;
     sqlstm.sqhstl[1] = (unsigned int  )5;
     sqlstm.sqhsts[1] = (         int  )0;
     sqlstm.sqindv[1] = (         void  *)0;
     sqlstm.sqinds[1] = (         int  )0;
     sqlstm.sqharm[1] = (unsigned int  )0;
     sqlstm.sqadto[1] = (unsigned short )0;
     sqlstm.sqtdso[1] = (unsigned short )0;
     sqlstm.sqphsv = sqlstm.sqhstv;
     sqlstm.sqphsl = sqlstm.sqhstl;
     sqlstm.sqphss = sqlstm.sqhsts;
     sqlstm.sqpind = sqlstm.sqindv;
     sqlstm.sqpins = sqlstm.sqinds;
     sqlstm.sqparm = sqlstm.sqharm;
     sqlstm.sqparc = sqlstm.sqharc;
     sqlstm.sqpadto = sqlstm.sqadto;
     sqlstm.sqptdso = sqlstm.sqtdso;
     sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
     if (sqlca.sqlcode == 1403) printf("");
     if (sqlca.sqlcode < 0) printf("");
}



					/* EXEC SQL SELECT ROOM_NOW
						INTO : room_now
						FROM H_ROOM WHERE ROOM_NUMBER = : p_room2; */ 

{
     struct sqlexd sqlstm;
     sqlstm.sqlvsn = 13;
     sqlstm.arrsiz = 12;
     sqlstm.sqladtp = &sqladt;
     sqlstm.sqltdsp = &sqltds;
     sqlstm.stmt = "select ROOM_NOW into :b0  from H_ROOM where ROOM_NUMBER=\
:b1";
     sqlstm.iters = (unsigned int  )1;
     sqlstm.offset = (unsigned int  )1972;
     sqlstm.selerr = (unsigned short)1;
     sqlstm.sqlpfmem = (unsigned int  )0;
     sqlstm.cud = sqlcud0;
     sqlstm.sqlest = (unsigned char  *)&sqlca;
     sqlstm.sqlety = (unsigned short)4352;
     sqlstm.occurs = (unsigned int  )0;
     sqlstm.sqhstv[0] = (         void  *)&room_now;
     sqlstm.sqhstl[0] = (unsigned int  )sizeof(int);
     sqlstm.sqhsts[0] = (         int  )0;
     sqlstm.sqindv[0] = (         void  *)0;
     sqlstm.sqinds[0] = (         int  )0;
     sqlstm.sqharm[0] = (unsigned int  )0;
     sqlstm.sqadto[0] = (unsigned short )0;
     sqlstm.sqtdso[0] = (unsigned short )0;
     sqlstm.sqhstv[1] = (         void  *)p_room2;
     sqlstm.sqhstl[1] = (unsigned int  )5;
     sqlstm.sqhsts[1] = (         int  )0;
     sqlstm.sqindv[1] = (         void  *)0;
     sqlstm.sqinds[1] = (         int  )0;
     sqlstm.sqharm[1] = (unsigned int  )0;
     sqlstm.sqadto[1] = (unsigned short )0;
     sqlstm.sqtdso[1] = (unsigned short )0;
     sqlstm.sqphsv = sqlstm.sqhstv;
     sqlstm.sqphsl = sqlstm.sqhstl;
     sqlstm.sqphss = sqlstm.sqhsts;
     sqlstm.sqpind = sqlstm.sqindv;
     sqlstm.sqpins = sqlstm.sqinds;
     sqlstm.sqparm = sqlstm.sqharm;
     sqlstm.sqparc = sqlstm.sqharc;
     sqlstm.sqpadto = sqlstm.sqadto;
     sqlstm.sqptdso = sqlstm.sqtdso;
     sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
     if (sqlca.sqlcode == 1403) printf("");
     if (sqlca.sqlcode < 0) printf("");
}



					room_now -= 1;
					/* EXEC SQL UPDATE H_ROOM SET ROOM_NOW = :room_now WHERE ROOM_NUMBER = :p_room2; */ 

{
     struct sqlexd sqlstm;
     sqlstm.sqlvsn = 13;
     sqlstm.arrsiz = 12;
     sqlstm.sqladtp = &sqladt;
     sqlstm.sqltdsp = &sqltds;
     sqlstm.stmt = "update H_ROOM  set ROOM_NOW=:b0 where ROOM_NUMBER=:b1";
     sqlstm.iters = (unsigned int  )1;
     sqlstm.offset = (unsigned int  )1995;
     sqlstm.cud = sqlcud0;
     sqlstm.sqlest = (unsigned char  *)&sqlca;
     sqlstm.sqlety = (unsigned short)4352;
     sqlstm.occurs = (unsigned int  )0;
     sqlstm.sqhstv[0] = (         void  *)&room_now;
     sqlstm.sqhstl[0] = (unsigned int  )sizeof(int);
     sqlstm.sqhsts[0] = (         int  )0;
     sqlstm.sqindv[0] = (         void  *)0;
     sqlstm.sqinds[0] = (         int  )0;
     sqlstm.sqharm[0] = (unsigned int  )0;
     sqlstm.sqadto[0] = (unsigned short )0;
     sqlstm.sqtdso[0] = (unsigned short )0;
     sqlstm.sqhstv[1] = (         void  *)p_room2;
     sqlstm.sqhstl[1] = (unsigned int  )5;
     sqlstm.sqhsts[1] = (         int  )0;
     sqlstm.sqindv[1] = (         void  *)0;
     sqlstm.sqinds[1] = (         int  )0;
     sqlstm.sqharm[1] = (unsigned int  )0;
     sqlstm.sqadto[1] = (unsigned short )0;
     sqlstm.sqtdso[1] = (unsigned short )0;
     sqlstm.sqphsv = sqlstm.sqhstv;
     sqlstm.sqphsl = sqlstm.sqhstl;
     sqlstm.sqphss = sqlstm.sqhsts;
     sqlstm.sqpind = sqlstm.sqindv;
     sqlstm.sqpins = sqlstm.sqinds;
     sqlstm.sqparm = sqlstm.sqharm;
     sqlstm.sqparc = sqlstm.sqharc;
     sqlstm.sqpadto = sqlstm.sqadto;
     sqlstm.sqptdso = sqlstm.sqtdso;
     sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
     if (sqlca.sqlcode == 1403) printf("");
     if (sqlca.sqlcode < 0) printf("");
}



					/* EXEC SQL COMMIT WORK; */ 

{
     struct sqlexd sqlstm;
     sqlstm.sqlvsn = 13;
     sqlstm.arrsiz = 12;
     sqlstm.sqladtp = &sqladt;
     sqlstm.sqltdsp = &sqltds;
     sqlstm.iters = (unsigned int  )1;
     sqlstm.offset = (unsigned int  )2018;
     sqlstm.cud = sqlcud0;
     sqlstm.sqlest = (unsigned char  *)&sqlca;
     sqlstm.sqlety = (unsigned short)4352;
     sqlstm.occurs = (unsigned int  )0;
     sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
     if (sqlca.sqlcode < 0) printf("");
}


					gotoxy(43, 31);
					printf("정상적으로 수정이 완료되었습니다.");
					getch();
				}

			}
		}
	}
}


// 화면 출력 함수
void print_screen(char fname[])
{
   FILE *fp;
   char line[100];

   if ( (fp = fopen(fname,"r"))  == NULL ){
      printf("file open error\n");
      getch();
      exit(-1);
   }
   while(1)
   {
      if( fgets(line, 99, fp) == NULL){
           break;
      }
      printf("%s", line);
   }

   fclose(fp);
}


// SQL오류 처리 함수
/* --------------------------------------------------------------------------
int sql_error()

   errrpt prints the ORACLE error msg and number.
-------------------------------------------------------------------------- */
void sql_error(char *msg)
{
    char err_msg[128];
    size_t buf_len, msg_len;

    /* EXEC SQL WHENEVER SQLERROR CONTINUE; */ 


    printf("\n%s\n", msg);
    buf_len = sizeof (err_msg);
    sqlglm(err_msg, &buf_len, &msg_len);
    printf("%.*s\n", msg_len, err_msg);

    getch();
    /* EXEC SQL ROLLBACK WORK; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 12;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )2033;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


    //exit(EXIT_FAILURE);
}


/*---------------  화면 커서 제어 함수 --------------------*/
#define STD_HANDLE GetStdHandle(STD_OUTPUT_HANDLE)

void gotoxy(int x, int y)
{
    COORD Cur= {(SHORT)x, (SHORT) y};

    SetConsoleCursorPosition(STD_HANDLE, Cur);
}

void getxy(int *x, int *y)
{
    CONSOLE_SCREEN_BUFFER_INFO Buf ;

    GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &Buf);
    *x = (int)Buf.dwCursorPosition.X ;
    *y = (int)Buf.dwCursorPosition.Y ;
 
}

/*---------------------------------------------------------*/