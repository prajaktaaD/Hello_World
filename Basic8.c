//8.Accept principle,rate and time and calculate simple interst.

#include<stdio.h>

int main()
{
   float p,r,t;
   printf("Enter principle:");
   scanf("%f",&p);
   printf("\nEnter rate:");
   scanf("%f",&r);
   printf("\nEnter time:");
   scanf("%f",&t);
   printf("\nSimple Intrest:%f",(p*r*t)/100);
   
   return 0;
   
  } 
