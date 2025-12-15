

#include<stdio.h>
int main()
{
    int n;
    printf("enter the patterns number:\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {

        for(int j=1;j<=n;j++)
        {
           if(j==1 || j==n ||
              (n%2==1&& i==(n/2+1))
               || (n%2==0&&i==(n/2+1) ) )

                printf("*");
           else
            printf(" ");

        }
        printf("\n");
    }
}
