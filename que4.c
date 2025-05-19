#include<stdio.h>

int main()
{
    for(int i=1;i<=5;i++)
    {
        for(int k=1;k<=i-1;k++)
        {
            printf("  ");
        }
        for(int j=1;j<=6-i;j++)
        {
            if(j%2==1)
            {
                printf("1 ");
            }
            else
            {
                printf("0 ");
            }
        }
        printf("\n");
    }
    return 0;
}