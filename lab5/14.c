/* Copy the given array into another array. Access the array using pointer */

#include<stdio.h>
int main()
{
    int i;
    int *p, *q;
    int tag = 0;
    int arr1[100] = {1, 2, 3, 4, 5};
    int arr2[10];
    int size = 5;

    p = &arr1[0];
    q = &arr2[0];

    for(i=0; i<size; i++)
        printf("%d ",*(p+i));

    printf("\n");

    for(i=0; i<size; i++)
    {
        tag = *(p+i);
        *(q+i) = tag;
    }

    for(i=0; i<size; i++)
        printf("%d ",*(q+i));

    return 0;
}

