#include<stdio.h>
int main ()
{
    int ar[20] = {4,5,34,4,12};
    int i, j, a, tag=0, size=5;
    scanf("%d",&a);
    for( i = 0; i < size; i++)
    {
        printf("%d ",ar[i]);
    }
    printf("\n");
    for( j = 0; j <= size; j++)
    {
        if(a==ar[j])
        {
            for( i = j; i <= size; i++)
            {
                ar[i] = ar[i+1];
            }
            size--;
            tag++;
            j--;
        }
    }
    if(tag==0)
    {
        printf("\nNot Found\n");
    }
    else
    {
        for( i = 0; i < size; i++)
            printf("%d ",ar[i]);
    }
    return 0;
}
