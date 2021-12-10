#include <stdio.h>
int main()
{
    int a=1,b=0;
    b=++a + ++a;
    printf("%d\n%d\n",a,b);

    return 0;
}
