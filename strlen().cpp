#include <stdio.h>
#include <string.h>
int main()
{
    char a[20]="Unschool";
    char b[20]={'U','n','s','c','h','o','0','l'};
    printf("Length of string a = %zu \n",strlen(a));
    printf("Length of string b = %zu \n",strlen(b));

    return 0;
}
