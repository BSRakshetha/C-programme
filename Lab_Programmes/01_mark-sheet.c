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
