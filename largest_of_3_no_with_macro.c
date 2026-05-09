#include<stdio.h>
#include<stdint>

#define MAX(a,b,c) (a>b)?((a>c)?a:c):((b>c)?b:c)

int main()
{
  printf("MAX = %d", MAX(4,11,7));
  return 0;
}
