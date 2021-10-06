#include<stdio.h>
#include<conio.h>
int main()
{
    int x=20,y=1232;
    int *p1=&x,*p2=&y;
    int temp=*p1;
    *p1=y,*p2=temp;
    printf("x=%d,y=%d",x,y);
    return 0;
}