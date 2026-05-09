#include<stdio.h>
#include<stdint.h>

uint32_t Swap_bytes(uint32_t Data)
{
  uint32_t output=0X0;
  uint8_t temp=0x0;
  for (int i=0; i<4;i++)
    {
      output = output<<8;
      temp = data>>(8*i) & 0xFF;
      output +=temp;
    }
  return output;
}
int main()
{
  uint32_t input = FA56CDB3, Output = Swap_bytes(input);
  printf("Input = 0x%x and Output = 0x%x",input,Output);
}
