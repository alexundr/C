#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#define ESC 0x1B

int main(int argc, char *argv[])
{
  int code = 0;
  
  system("chcp 1251 > nul");
  printf("��������� ������� - �������� ����\n"
         "0X00ZZ - ASCII-��� (������� �������)\n"
         "0XZZ00 - Scan-code (����������� �������)\n"
         "ESC - �����\n"
  );
  
  do {
     code = getch(); // ���� ������� � ������
     if (code == 0 || code == 0xE0) // ����������� �������
        code = getch()<<8;
     printf("%#06X\n", code);
  } while (code != ESC);
  
  system("PAUSE");	
  return 0;
}
