/* Cyclically permute the elements of an array. Access the array using pointer */

#include <stdio.h>
int main()
{
    int i;
    int *p;
    int arr[100] = {1, 2, 3, 4, 5};
    int size = 5;

    p = &arr[0];
    for(i=0; i<size; i++)
        printf("%d ",*(p+i));

    printf("\n");

    *(p+size) = *p;

    for (i=0; i<size; i++)
        *(p+i) = *(p+i+1);

    for(i=0; i<size; i++)
        printf("%d ",*(p+i));

    return 0;
}
