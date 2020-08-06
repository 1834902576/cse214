#include<stdio.h>
int main()
{
    int *p;
    int i, a, location;
    int ar[20] = {23,53,42,16,8};
    int size = 5;
    int tag = 0;

    scanf("%d",&a);

    p = &ar[0];

    for(i=0; i<size; i++)
    {
        if(*(p+i)==a)
        {
            location= i;
            tag++;
        }
    }

    if(tag==1)
        printf("Index no: %d",location);
    else
        printf("-1");

    return 0;
}
