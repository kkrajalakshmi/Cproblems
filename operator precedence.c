#include <stdio.h>
int main()
{
    int i;
    i=1,2,3;
    printf("i=%d\n",i);
    return 0;
}




#include <stdio.h>
int main()
{
    int i;
    i=(1,2,3);  /*compiler prints last value only*/
    printf("i=%d\n",i);
    return 0;
}
