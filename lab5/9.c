/* Find Maximum from the Array. Access the array using pointer */

#include<stdio.h>
int main()
{
    int i;
    int *max;
    int array[100] = {12,15,7,21,69,75,11,5,9,13};
    int size = 10;

    max = &array[0];

    for(i=0; i<size; i++)
        printf("%d ", *(max+i));

    printf("\n");

    for(i=1; i<size; i++)
        if(*(max+i)>*max)
            *max = *(max+i);

    printf("%d\n",*max);

    return 0;
}
