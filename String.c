/***
char getString(){
    char str="Test for String";
    return str;
}
#include <stdio.h>
int main()
{
    printf("%s",getString());

    return 0;
}
***/
char* getString(){
    char* str="Test for String";
    return str;
}
#include <stdio.h>
int main()
{
    printf("%s",getString());

    return 0;
}
