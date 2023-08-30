#include<stdio.h>
int main()
{
    char s1[80], s2[80];
    printf("enter s1,s2: ");
    scanf("%[0-9]%[a-zA-Z]", s1, s2);
    printf("%s,%s", s1, s2);
    return 0;
}
