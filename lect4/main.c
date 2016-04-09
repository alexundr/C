#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int x,y,z;
  char c;
  
//  system ("chcp cp1251");
  
  for (x = 0; x < 256; x++) {
      switch (x) {
          case 0x7:
          case 0x8:
          case 0x9:
          case 0xA:
          case 0xD: c = ' '; break;
          default:  c = x;   break;
      }
      printf ("%c %2X%c", c, x, 
                  (x & 0x0F) != 0xF ? '\xBA' : '\n'
             );
  }
  
  /*
  puts("=====================TRANSPORATION (ver1)==================\n");
  
  for (x = 0; x < 16; x++) {
      for (y = 0; y < 16; y++) {
          z = y * 16 + x;
          switch (z) {
              case 0x7:
              case 0x8:
              case 0x9:
              case 0xA:
              case 0xD: c = ' '; break;
              default:  c = z;   break;
          }
          printf ("%c %2X%c", c, z, 
                      y != 15 ? '\xBA' : '\n'
                 );
      }
  }*/
  
  puts("=====================TRANSPORATION (ver2)==================\n");
  
  for (x = 0; x < 256; x++) {
      y = (x & 0x0F) << 4 | (x & 0xF0) >> 4;
      switch (y) {
          case 0x7:
          case 0x8:
          case 0x9:
          case 0xA:
          case 0xD: c = ' '; break;
          default:  c = y;   break;
      }
      printf ("%c %2X%c", c, y, 
                  (y & 0xF0 ) != 0xF0 ? '\xBA' : '\n'
             );
  }
  
  system("PAUSE");	
  return 0;
}
