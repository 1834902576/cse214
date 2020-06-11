/*  Split an Array after Kth (take input K from user) elements
    into two different Arrays. Access the array using pointer */

#include <stdio.h>
int main()
{
    int i, K;
    int j = 0;
    int *p, *q, *r;
    int arr[100] = {1, 2, 3, 4, 5};
    int arr1[100];
    int arr2[100];
    int size = 5;
    int size1 = 0;
    int size2 = 0;

    p = &arr[0];
    q = &arr1[0];
    r = &arr2[0];

    scanf("%d",&K);

    for(i=0; i<size; i++)
        printf("%d ",*(p+i));

    for(i=0; i<size; i++)
    {
        if(i<K)
        {
            *(q+i) = *(p+i);
            size1++;
        }
        else
        {
            *(r+j++) = *(p+i);
            size2++;
        }
    }

    printf("\n");

    for(i=0; i<size1; i++)
        printf("%d ",*(q+i));

    printf("\n");

    for(i=0; i<size2; i++)
        printf("%d ", *(r+i));

    return 0;
}
