
#include<stdio.h>
int main()
{
    int i,size=5,arr1[10],arr2[20];

    printf("Enter Arr1 Elements:\n");
    for(i=0; i<size; i++)
       {
        scanf("%d",&arr1[i]);

    }

    for(i=0; i<size; i++)
        {
        arr2[i]=arr1[i];
    }
    printf("Elements of arr2:\n");
    for(i=0; i<size; i++)
        {
        printf("\n arr2[%d]=%d",i,arr2[i]);
    }
    return 0;
}
