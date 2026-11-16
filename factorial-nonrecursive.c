#include<stdio.h>
#include<conio.h>
int fact(int);
void main()
{
    int n,i,f;
    printf("ENTER A VALUE FOR n:\n");
    scanf("%d",&n);
    f=fact(n);
    printf("THE FACTORIAL OF A GIVEN NO IS..%d",f);
    getch();
}
int fact(int n)
{
    int i,f=1;
    for(i=1;i<=n;i++)
        f=f*i;
    return(f);
}