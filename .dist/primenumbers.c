#include<stdio.h>
#include<stdbool.h>

bool (is_prime(n))
{
    if(n<=1)
    {
        return false;
    }
    for (int i = 2; i*i <= n; i++)
    {
        if (n%i==0)
        {
            return false;
        } 
    }
    return true;   
}
int main(void)
{
    int a,b;
    printf("Enter the lower bound of the range: ");
    scanf("%d",&a);
    printf("\n Enter the upper bound of the range:");
    scanf("%d",&b);
    for (int z=a;z<=b; z++)
    {
        if (is_prime(z))
        {
            printf("%d ",z);
        }
    }
}