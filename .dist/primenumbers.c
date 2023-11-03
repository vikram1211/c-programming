#include<stdio.h>

int main(void)
{
    int a,b;
    printf("Enter the lower bound of the range: ");
    scanf("%d",&a);
    printf("\n Enter the upper bound of the range:");
    scanf("%d",&b);
    for (int i=a;i<=b; i++)
    {
        if(i%1==0)
        {
            if(i==1)
            {
                printf("%d ",i);
            }
            else if(i%2==0)
            {
                if (i==2)
                {
                    printf("%d ",i);
                }
                else
                {
                   continue;
                }
                
            }
            else if(i%3==0)
            {
                if(i==3)
                {
                    printf("%d ",i);
                }
                else
                {
                    continue;
                }
                
            }
            else if(i%5==0)
            {
                if(i==5)
                {
                    printf("%d ",i);
                }
                else
                {
                    continue;
                }
            }
            else if(i%7==0)
            {
                if(i==7)
                {
                    printf("%d ",i);
                }
                else
                {
                    continue;;
                }
            }
            else
            {
                printf("%d ",i);
            }
        }
        else
        {
            continue;
        }
    }  
}