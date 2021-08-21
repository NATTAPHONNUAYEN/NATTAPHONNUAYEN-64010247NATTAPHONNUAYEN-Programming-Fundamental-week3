#include<stdio.h>

int x;
int main()
{
    printf("Enter integer : ");
    scanf("%d",&x);
    for(int i =1;i<=x;i++)
    {
        for(int j=1;j<=x;j++)
        {
            if(i==1||i==x)
            {
                printf("*");
            }
            else
            {
                if(j==1||j==x)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }

            }

        }
            printf("\n");
    }

  return 0;
}

