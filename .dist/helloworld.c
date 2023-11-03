#include<stdio.h>

int main(void)
{
    int a,b,c;
    char d[20];
    printf("enter your name \n");
    scanf("%s",d);
    printf("enter two numbers %d \n");
    scanf("%i %i",&a,&b);
    c=a+b;
    printf("the hexadecimal sum of the numbers is %x\n",c);
    return 0;
}
