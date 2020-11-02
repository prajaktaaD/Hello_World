//6.Accept lower case character and convert into upper case charachters::

#include<stdio.h>
int main()
{
  char c;
  printf("Enter a character in lower case:");
  scanf("%c",&c);
  c=c-32;
  printf("charcter in upper case+%c",c);
  
  return 0;
 } 
