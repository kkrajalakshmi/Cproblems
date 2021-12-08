#include <stdio.h>
int main()
{
    static int i=5;
    printf("%d\n",i);
    if(--i){
        main();
        
    }
    return 0;
}
