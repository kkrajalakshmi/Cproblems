#include <stdio.h>
int func(int i){
    if(i%2)
        return (i++);
    else
        return func (func(i-1));
}
int main()
{
    printf("%d\n",func(22));
    printf("%d",func(10));
    return 0;
}
