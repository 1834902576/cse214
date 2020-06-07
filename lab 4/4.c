#include<stdio.h>
int main ()
{
    int a[10]={1,2,3,4,5,6,7,8,9,10} ;
    int b[10]={10,9,8,7,6,5,4,3,2,1};
    int i, count = 0,size = 10;

    for(i = 0; i <size; i++)
    {
        printf("%d ",a[i]);

    }
    printf("\n");
    for(i = 0; i <size; i++)
    {
        printf("%d ",b[i]);

    }
        printf("\n");
    for(i = 0; i <size; i++)
    {
        if(a[i] == b[i])
        {
            count++;
        }
    }
    if(count == size)
    {
        printf("\n100% Same!\n");
    }
    else
    {
        printf("\n Not Same!\n");
    }
    return 0;
}

