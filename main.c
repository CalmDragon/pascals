#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    printf("Enter the no of rows you want to see?");
    scanf("%d",&n);
    loop(n);

}
void loop(int n)
{
    int i,j,d;
    for(i=0;i<=n;i++)
    {

        for(j=0;j<=i;j++)
        {
            d=pascal(i,j);
            printf(" %d ",d);
        }
        printf("\n");
    }
}
int pascal(int i, int j)
{
    if(j==0)
        return 1;
    if(i==j)
        return 1;
    else
        return pascal(i-1,j-1)+pascal(i-1,j);
}

