

#include<stdio.h>
int main()
{
    int n;
    printf("enter the patterns number:\n");
    scanf("%d",&n);
    for(int i=n-1;i>=0;i--)
    {

        for(int j=0;j<n-1-i;j++)
        {
           printf(" ");
        }
        for(int j=0;j<((2*i)+1);j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
