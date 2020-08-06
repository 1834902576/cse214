#include<stdio.h>
int main()
{
    int ar[100];
    int i = 0, j;
    for(i = 0; i < 100; i++)
    {
        scanf("%d",&ar[i]);
        if(ar[i] == 0)
        {
            break;
        }
    }
    for(j = 0; j < i; j++)
    {
        printf("%d,",ar[j]);
    }
    return 0;
}


