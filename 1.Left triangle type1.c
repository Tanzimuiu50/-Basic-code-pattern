5
54
543
5432
54321



#include<stdio.h>
int main()
{
    int n;
    printf("enter the patterns number:\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        int k=n;
        for(int j=1;j<=i;j++)
        {
            printf("%d",k);
            k--;

        }
        printf("\n");
    }
}
