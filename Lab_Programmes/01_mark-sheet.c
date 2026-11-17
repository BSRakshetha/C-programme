#include<stdio.h>
#include<conio.h>
#define MAX_MKS 100
void main()
{
  int i, regno, no;
  char name[20];
  float mk[10], tot=0, avg;
  clrscr();
  printf("Enter Register Number : ");
  scanf("%d", &regno);
  printf("Enter Name of student : ");
  scanf("%s", &name);
  printf("Enter number of subject : ");
  scanf("%d", &no);
  for(i=0 ; i<n ; i++)
  {
    printf("Enter marks in sub %d : ", i+1);
    scanf("%f", &mk[i]);
    tot += mk[i];
  }
  avg = tot/no;

  printf("\n================STUDENT MARK SHEET=================");
  printf("\nRegister Number        : %d", regno);
  printf("\nStudent Name           : %s", name);
  for(i=0 ; i<n ; i++)
  {
    printf("\nMark in Subject %d     : %.2f", i+1, mk[i]);
  }
  printf("\nMaximum Marks per sub  : %d", MAX_MKS);
  printf("\n--------------------------------------------------");
  printf("\nTotal Marks    : %.2f", tot);
  printf("\nAverage Marks  : %.2f", avg);
  printf("\n----x----x----x----x----x----x----x----x----x-----");
  getch();
}

/*
Enter Register Number : 082
Enter Name of student : Rakshetha
Enter number of subject : 5
Enter marks in sub 1 : 94
Enter marks in sub 2 : 92
Enter marks in sub 3 : 99
Enter marks in sub 4 : 95
Enter marks in sub 5 : 96

================STUDENT MARK SHEET=================
Register Number        : 82
Student Name           : Rakshetha
Mark in Subject 1     : 94.00
Mark in Subject 2     : 92.00
Mark in Subject 3     : 99.00
Mark in Subject 4     : 95.00
Mark in Subject 5     : 96.00
Maximum Marks per sub  : 100
--------------------------------------------------
Total Marks    : 476.00
Average Marks  : 95.20
----x----x----x----x----x----x----x----x----x-----
*/
