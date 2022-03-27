#include<stdio.h>
#include<conio.h>
main()
{
struct emp
{
char empname[100];
char deptname[20];
int empno;
float empsalary;
}e;
clrscr();
printf("enter employee name\n");
gets(e.empname);
printf("enter employee department name\n");
gets(e.deptname);
printf("enter employee number\n");
scanf("%d",&e.empno);
printf("enter employee salary\n");
scanf("%f",&e.empsalary);
printf(" employee name=%s\n",e.empname);
printf("employee department name = %s\n",e.deptname);
printf("employee no =%d\n",e.empno);
printf("employee salary =%f\n",e.empsalary);
getch();
}
