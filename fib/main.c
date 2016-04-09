// Печать N чисел Фибоначчи: 1, 0 | 1, 1, 2, 3, 5 ...

#include <stdio.h>
// #include <stdlib.h>

int main(int argc, char *argv[])
{
    int N,   // Количество чисел Фибоначчи
        i,   // счетчик цикла
        a,b,c;   //числа Фибоначчи: c = a + b
    
    printf("Enter N:");
    scanf("%d", &N);
    
    for (a = 1, b = 0, i = 0; i < N; i++, a = b, b = c) {
        printf("%d\n", c = a + b);
    }
    
    system("PAUSE");	
    return 0;
}
