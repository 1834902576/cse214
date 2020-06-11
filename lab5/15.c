/* Reverse the given array within the same array. Access the array using pointer. */

#include<stdio.h>
int main()
{
    int i;
    int *a, *b;
    int tag = 0;
    int arr1[100] = {1, 2, 3, 4, 5};
    int arr2[10];
    int size = 5;

    a = &arr1[0];
    b = &arr2[0];

    for(i=0; i<size; i++)
        printf("%d ",*(a+i));

    printf("\n");

    for(i=0; i<=size; i++)
    {
        tag = *(a+size-i);
        *(b+i-1) = tag;
    }

    for(i=0; i<size; i++)
        printf("%d ",*(b+i));

    return 0;
}
