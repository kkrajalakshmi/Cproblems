#include<stdio.h>
int main()
{
    char arr[]={'a','b'};
    char *p=arr;
    
    if(&p == &arr)
    printf("same");
    
    else
    printf("not same");
    
    return 0;
}
