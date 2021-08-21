#include<stdio.h>

int x;
int main()
{
    printf("Enter integer");
    scanf("%d",&x);

    for(int i =1;i<=x;i++)
    {
        if(x==1)
        {
        printf("*");
        break;
        }
        printf("*");
        if(i==1||i==x)
        {
            for(int j=2;j<x;j++)
            {
                printf("*");
            }
        }
        else
        {
            for(int j=2;j<x;j++)
            {
                printf(" ");
            }
        }

        printf("*");
        printf("\n");
    }

  return 0;
}
