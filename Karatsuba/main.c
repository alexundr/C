#include <stdio.h>
#include <stdlib.h>
#include <math.h> 

int main(int argc, char *argv[])
{
    karatsuba(49823261,44269423);
  system("PAUSE");	
  return 0;
}

int karatsuba(long x, long y)
{
	int a, b, c, d, tmp, n;
	double res;
	
	n = getN(x);
	tmp = powl(10, n/2);
    a = floor(x/pow(10,n/2));
	b = x % tmp;
    c = floor(y/pow(10,n/2));
	d = y % tmp;

	res = pow(10,n)*a*c + pow(10,n/2)*((a+b)*(c+d)-a*c-b*d) + b*d;
	printf("%.0f WORKS!\n", res);
    return 0;
}

int getN (int d)
{
    if (d < 10) return 1;
    else if (d < 1) return 0;
    
    int n = 0;
    while (d / pow(10,n) >= 1)
          n++;
    return n;
}
