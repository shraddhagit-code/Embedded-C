#include<stdio.h>

void swap2numbers(int* a, int* b)
{
  *a = *a + *b;
  *b = *a - *b;
  *a = *a - *b;
}
int main()
{
  int a=3,b=7;
  swap2numbers(&a,&b);
  printf("Number after swaping a=%d and b=%d",a,b);
  return 0;
}
