/* Merge the Elements of two Sorted Array. Access the array using pointer */
#include <stdio.h>
int main()
{
    int i, j, size, tag;
    int *p, *q;
    int array1[100] = {12,13,42,45,67,69,76,78,81,11};
    int array2[100] = {18,27,36,48,51,57,62,70,83,99};
    int size1 = 10;
    int size2 = 10;
    p = &array1[0];
    q = &array2[0];
    for(i=0; i<size1; i++)
        printf("%d ",*(p+i));
    printf("\n");
    for(i=0; i<size2; i++)
        printf("%d ",*(q+i));
    size = size1 + size2;
    for(i=size1, j=0; i<=size; i++,j++)
    {
        size1++;
        *(p+i)=*(q+j);
    }
    printf("\n");
    for(i=0; i<size; i++)
        printf("%d ",*(p+i));
    printf("\n");
    for(i=0; i<size; i++)
    {
        for(j=i+1; j<size; j++)
        {
            if(*(p+i)>*(p+j))
            {
                tag = *(p+i);
                *(p+i) = *(p+j);
                *(p+j) = tag;
            }
        }
    }
    for(i = 0; i < size; i++){
        printf("%d ",*(p+i));
    }
}
