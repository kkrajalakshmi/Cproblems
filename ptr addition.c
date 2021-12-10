#include <stdio.h>
int main()
{
    int a[]={1,2,3,4,5,6};
    int b = &a;
    int c = &a+1;
    /*int=4bytes
    6*4=24*/
    printf("%d\n",b);
    printf("%d\n",c);
    printf("%d",c-b);

    return 0;
}
