/*  Search a value “X” (take input X from user) in the array
    and print the location if “X” found in the array otherwise
    print -1. Access the array using pointer */

#include<stdio.h>
int main()
{
    int *p;
    int i, X, loc;
    int array[100] = {10,20,30,40,50,60,70,80,90,100};
    int size = 10;
    int tag = 0;

    scanf("%d",&X);

    p = &array[0];

    for(i=0; i<size; i++)
    {
        if(*(p+i)==X)
        {
            loc= i;
            tag++;
        }
    }

    if(tag==1)
        printf("%d",loc);
    else
        printf("-1");

    return 0;
}
