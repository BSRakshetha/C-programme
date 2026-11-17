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

printf("\n=================STUDENT MARK SHEET=================");
