/* example for 8 leds 
*/
#include<stdio.h>
#include<stdint.h>

struct Status_of_LEDs
{
int Led1 : 1;
int Led2 : 1;
int Led3 : 1;
int Led4 : 1;
int Led5 : 1;
int Led6 : 1;
int Led7 : 1;
int Led8 : 1;
};

int main()
{
  struct Status_of_LEDs status1;
  printf("Sizeof = %d", sizeof(status1));
  return 0;
}
