
#include <stdio.h>

int main()
{
    short int i=65000;
    while(i++ !=0);
    printf("I is: %d\n",i);

    return 0;
}



#include <stdio.h>

int main()
{
    unsigned int i=65000;
    while(i++ !=65000);
    printf("I is: %d\n",i);

    return 0;
}
