//3.Accept 5 numbers and give their avarage:

#include<stdio.h>
int main()
{
  int a,b,c,d,e;
  float avg;
  printf("Enter five numbers:");
  scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
  avg=(a+b+c+d+e)/5.0;
  printf("\nThe average of five numbers:",avg);
  
  return 0;
 } 
