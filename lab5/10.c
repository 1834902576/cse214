/* Find Minimum from the Array. Access the array using pointer */

#include<stdio.h>
int main()
{
    int i;
    int *min;
    int array[100] = {3, 8, 12, 44, 31, 7, 75, 9, 3, 5};
    int size = 10;

    min = &array[0];

    for(i=0; i<size; i++)
        printf("%d ",*(min+i));

    printf("\n");

    for(i=1; i<size; i++)
        if(*(min+i)<*min)
            *min = *(min+i);

    printf("%d\n",*min);

    return 0;
}
