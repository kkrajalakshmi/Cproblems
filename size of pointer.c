#include<stdio.h>
int main()
{
    int arr[]={1,2,3};
    char *p=arr;
    printf("%d\n",sizeof(p));
    printf("%d\n",sizeof(arr));
    printf("---------------\n");
    
    char arr1[]={1,2,3};
    printf("%d\n",sizeof(p));
    printf("%d\n",sizeof(arr1));
    return 0;
}
