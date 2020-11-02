//5.Accept five characters and display them in reverse order:

#include<stdio.h>
int main()
{
  char c1,c2,c3,c4,c5;
  printf("Enter five charachters:");
  scanf("%c %c %c %c %c ",&c1,&c2,&c3,&c4,&c5);
  printf("The charachters in reverse order are:\n");
  printf("%c %c %c %c %c",c5,c4,c3,c2,c1);
  
  return 0;
  
 } 
