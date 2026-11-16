#include<stdio.h>
#include<conio.h>
#include<math.h>
int gcdnonrecursive(int m,int n)
{
    int remainder;
    remainder=m-(m/n*n);
    if(remainder==0)
        return n;
    else
        gcdnonrecursive(n,remainder);
}
void main()
{
    int a,b,igcd;
    printf("enter the two numbers whose gcd is to be found:");
    scanf("%d %d",&a,&b);
    printf("GCD of a,b is %d",gcdnonrecursive(a,b));
    getch();
}