#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  
  int a = 10, b = 15, c = 0;

  unsigned char ch = 0xCA, r, m;
  printf("%2X = %d%d%d%d%d%d%d%d\n", ch, 
              ch >> 7, (ch >> 6)%2, (ch >> 5)%2, (ch >> 4)%2, (ch >> 3)%2,
              (ch >> 2)%2, (ch >> 1)%2, ch%2);

  r = ~ch;
  printf("%2X = %d%d%d%d%d%d%d%d\n", r, 
              r >> 7, (r >> 6)%2, (r >> 5)%2, (r >> 4)%2, (r >> 3)%2,
              (r >> 2)%2, (r >> 1)%2, r%2);
  m = 0x0F;
  r = ch & m;
  printf("%2X = %d%d%d%d%d%d%d%d\n", m, 
              m >> 7, (m >> 6)%2, (m >> 5)%2, (m >> 4)%2, (m >> 3)%2,
              (m >> 2)%2, (m >> 1)%2, m%2);
  printf("%2X = %d%d%d%d%d%d%d%d\n", r, 
              r >> 7, (r >> 6)%2, (r >> 5)%2, (r >> 4)%2, (r >> 3)%2,
              (r >> 2)%2, (r >> 1)%2, r%2);

  r = ch | m;
  printf("%2X = %d%d%d%d%d%d%d%d\n", r, 
              r >> 7, (r >> 6)%2, (r >> 5)%2, (r >> 4)%2, (r >> 3)%2,
              (r >> 2)%2, (r >> 1)%2, r%2);
              
  r = ch ^ m;
  printf("%2X = %d%d%d%d%d%d%d%d\n", r, 
              r >> 7, (r >> 6)%2, (r >> 5)%2, (r >> 4)%2, (r >> 3)%2,
              (r >> 2)%2, (r >> 1)%2, r%2);
/*
  printf("%.3f\n", 20/40.);
  printf("%d\n", a);
*/

  system("PAUSE");	
  return 0;
}
