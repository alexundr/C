// �������

#include <stdio.h>
#include <stdlib.h>

#define BUFSIZE 10

int main(int argc, char *argv[])
{
    const s = 5;
    int a[s];// ����������� ������� �� ���������
    int b[BUFSIZE]; // ����������� ������� �� ���������� ���������
    
    // ����� ����������� ��������
    int c[BUFSIZE] = {0,15,33}; 

    // ��� ��� ������ ������� �� ������, �� ���������� ��������� ���������� 
    // ��������� ��������, � ��� ���������� ��������� �������� �������
    int c1[] = {0,15,33}; 
    
    // �������� ������ ������������� ������� ������ (������ �������� ����, � 
    // ��� ��� ��������� ����, �� ���������� ������ ����������� �� ���� ������.
    // ��� ����� ��� ����� �����)
    int d[BUFSIZE] = {0}; 
    
    // ������������� ����������� ������� (������� ����� ������ - �������� \n)
    char s1[] = {'H','e','l','l','o','\n'};
    
    // ������������� ����������� ������� - ������� ������
    char s2[] = "Hello";
    
    // ���������� ������������ ������� (� ��� �� ����, �� ����� �������� ������
    // ��������)
    int m[3][4];

    // ������������� ������������ ������� (������)
    int m1[3][4] = { {-5,12,3,6}, {7,5,33,55}, {-11,-44,42,7} };

    // ������������� ������������ �������, ������ ������� ������� (�����) 
    // ����������� ��������� ������������ (���������� �� ������� ��� ��������)
    int m2[][4] = { -5,12,3,6,7,5,33,55,-11,-44,42,7 };

    // ������������� ������������ ������� (�� ������)
    // ������ �������� - ��������, ������ - ������, � ��������� - ����
    int m3[3][4] = { {1,2}, {3,4}, {5,6} };

    // ������������� ������������ ������� (�� ������)
    // ������� ���� �� �������, ��������� ���������� ������
    int m4[3][4] = { {1,2}, {3,4}, {5,6} };
    
    lab2_2();
    
    system("PAUSE");	
    return 0;
}

// �������� �� ����� �������
int lab2_1()
{
    int x, i;
    printf("Enter x: ");
    scanf("%d", &x);
    for (i = 2; x%i != 0; i++);
    i == x && printf("Yes\n") || printf("No\n");
}

// ����� n ������� �����
int lab2_2()
{
    int a[20] = {2};
    int n, i, j, k; // k - ���������� ��������� �����
    
    printf("Enter n: ");
    scanf("%d", &n);
    
    for (k = 1, i = 3; n > k ; i += 2) {
        for (j = 3; i % j != 0; j++) ;
        if (i == j) a[k++] = i;
    }
    for (i = 0; i < n; i++)
        printf("a[%d] = %d\n", i, a[i]);
}


// ����� �������� ����� ���� ��������� ��������������� � ����� ���������
int lab1_1()
{
    int a[] = {5, 9, 6, 3, 5, 7, 1, 9, 2, 4, 0};
    // ���������� ����� ������� ����� ������� ��� ������� �� ������ ������ ��.
    const int n = sizeof a / sizeof a[0];
    int i, x;
    
    // ������ �������
    for (i=0; i<n; i++)
        printf("%d, ", a[i]);
    printf("\b\b \n"); // ������� �� 2 ������� ����� � ������ ������� - ������
    printf("\n");
    
    // �������� ����� (v1)
    printf("Enter value:");
    scanf("%d", &x);
    for (i = 0; i < n && a[i] != x; i++) ;
    i < n && printf("a[%d] = %d\n", i+1, x) || printf("Not found\n");
}

// ����� �������� ����� ���� ��������� ��������������� � �����! ��������
// ������������ "����� �������(���������)", ����� � ����� ������� �������������
// ����� ��� �������� ��������, ����� �������, �������� ������ �� ������� 
// ������� ����� ��������, ���� ��������� �������� � ������� ����� ���������
int lab1_2()
{
    int a[] = {5, 9, 6, 3, 5, 7, 1, 9, 2, 4, 0};
    // ���������� ����� ������� ����� ������� ��� ������� �� ������ ������ ��.
    const int n = sizeof a / sizeof a[0];
    int i, x;
    
    // ������ �������
    for (i=0; i<n; i++)
        printf("%d, ", a[i]);
    printf("\b\b \n"); // ������� �� 2 ������� ����� � ������ ������� - ������
    printf("\n");
    
    // �������� ����� (v1)
    printf("Enter value:");
    scanf("%d", &x);
    a[n-1] = x; // ������ ������ (��������) �� ����������������� ����� �������
    for (i = 0; a[i] != x; i++) ; // ����� ������ �� ������ �������
    i < n-1 && printf("a[%d] = %d\n", i+1, x) || printf("Not found\n");
}
