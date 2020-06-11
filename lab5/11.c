/* Find Second Maximum from the Array. Access the array using pointer */

#include<stdio.h>
int main()
{
    int *max;
    int i,max2 ;
    int array[100] = {12,18,34,54,76,11,98,49,50,13};
    int size = 10;

    max = &array[0];

    for(i=0; i<size; i++)
        printf("%d ",*(max+i));

    printf("\n");

    for(i=0; i<size; i++)
    {
        if(*(max+i)>*max)
        {
          max2 = *max;
            *max = *(max+i);
        }
        else if(*(max+i)>max2 && *(max+i)<*max)
            max2 = *(max+i);
    }

    printf("%d\n", max2 );

    return 0;
}

