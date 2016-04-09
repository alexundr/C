#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#define ESC 0x1B

int main(int argc, char *argv[])
{
  int code = 0;
  
  system("chcp 1251 > nul");
  printf("Ќажимайте клавиши - смотрите коды\n"
         "0X00ZZ - ASCII-код (обычна€ клавиша)\n"
         "0XZZ00 - Scan-code (управл€юща€ клавиша)\n"
         "ESC - конец\n"
  );
  
  do {
     code = getch(); // ввод символа с консои
     if (code == 0 || code == 0xE0) // управл€ющаю клавиша
        code = getch()<<8;
     printf("%#06X\n", code);
  } while (code != ESC);
  
  system("PAUSE");	
  return 0;
}
