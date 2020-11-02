//4.Accept markes of 3 subjects and display percentage.

#include<stdio.h>

int main()
{
   int m1,m2,m3;
   float per;
   printf("Enter the maskes of three subjects out of 100:");
   scanf("%d%d%d",&m1,&m2,&m3);
   per=((m1+m2+m3)/3)*100;
   
   printf("The percentage is give by:%f",per);
   printf("%%");                                     //here on putting % create error
   
   return 0;
 } 
   
