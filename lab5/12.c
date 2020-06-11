/* Find Second Minimum from the Array. Access the array using pointer */

#include<stdio.h>
int main()
{
    int *min;
    int i,min2;
    int array[100] = {11,12,34,53,23,56,75,87,8,19};
    int size = 10;

    min = &array[0];

    for(i=0; i<size; i++)
        printf("%d ",*(min+i));

    printf("\n");

    for(i=0; i<size; i++)
    {
        if(*(min+i)<*min)
        {
           min2 = *min;
            *min = *(min+i);
        }
        else if(*(min+i)<min2 && *(min+i)!=*min)
           min2 = *(min+i);
    }

    printf("%d\n",min2);

    return 0;
}


