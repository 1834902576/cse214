#include<stdio.h>
int main()
{
    int i,size=5,a[10];

    printf("Enter Elements:\n");
    for(i=0; i<size; i++)
       {
        scanf("%d",&a[i]);

    }
    for(i=size-1; i>=0; i--)
        {
        printf("%d\t",a[i]);
    }
     return 0;
}

