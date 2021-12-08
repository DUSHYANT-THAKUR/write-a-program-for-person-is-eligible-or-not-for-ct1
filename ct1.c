/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>
#include<conio.h>
void main()
{
    int   percentage,sub1,sub2,sub3,sub4,sub5,p1,p2,p3,p4,p5;
  printf("enter the marks of all subject");
  scanf("%d%d%d%d%d",&sub1,&sub2,&sub3,&sub4,&sub5);
  percentage=(sub1+sub2+sub3+sub4+sub5)/5;
  p1=(sub1*100)/100;
  p2=(sub2*100)/100;
  p3=(sub3*100)/100;
  p4=(sub4*100)/100;
  p5=(sub5*100)/100;
  printf("%d is the percentage overall subject\n",percentage);
  if(percentage>=75)
  {
      if(p1>=60 && p2>=60 && p3>=60 && p4>=60 && p5>=60)
      {
      printf("student is eligibl for ct1 exam");
      }
      else
      {
          printf("person is not eligible for ct1");
      }
      
  }
  else
  {
   printf("person is not eligible");   
  }
    getch();
}