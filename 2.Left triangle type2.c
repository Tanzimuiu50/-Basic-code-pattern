/*5
56
567
5678
56789*/



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
            k++;

        }
        printf("\n");
    }
}
