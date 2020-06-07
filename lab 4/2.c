#include<stdio.h>
int main()
{
    int i,size=5,a[10],b[10];

    printf("Enter Elements:\n");
    for(i=0; i<size; i++)
       {
        scanf("%d",&a[i]);
     }
     for(i=0; i<size; i++)
        {
        b[i]=a[size-1-i];
     }
      for(i=0; i<size; i++)
      {
          a[i]=b[i];
      }
       for(i=0; i<size; i++)
       {
           printf("%d\n",b[i]);
       }
       return 0;
}

