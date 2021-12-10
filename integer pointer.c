#include <stdio.h>
int main()
{
    int a[]={1,2,3,4,5,6};
    int *ptr = (int*)(&a+1);

    /*int=4bytes
    6*4=24*/
    printf("%d",*ptr-2);

    return 0;
}
