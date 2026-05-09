#include<stdio.h>
#include<stdint>

uint32_t Setbit(uint32_t Data, uint8_t bitno)
{
  Data |= 1<<bitno;
  return Data;
}

uint32_t Resetbit(uint32_t Data, uint8_t bitno)
{
  Data &= ~(1<<bitno);
  return Data;
}

int main()
{
  uint32_t Number=11;
  printf("SET Bit Number = 0x%x and Reset Bit Number = 0x%x", Setbit(Number, 5), Resetbit(Number , 5));
  return 0;
}
