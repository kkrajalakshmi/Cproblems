#include <stdio.h>
int main()
{
    char str[]="Engineering";
    char *s1=str;
    
    for(int i=0;i<4;i++){
       printf("The s1 pointer is :%c\n",*s1);
       printf("The str pointer: %c\n",*str);
       s1++;
    }
    return 0;
}


#include <stdio.h>
int main()
{
    char str[]="Data science the sexiest job";
    char *s1=str;
    
    for(int i=0;i<4;i++){
       printf("The s1 pointer is :%c\n",*s1);
    //   printf("The str pointer: %c\n",*str);
       s1++;
    }
    return 0;
}
