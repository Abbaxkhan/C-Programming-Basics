#include<stdio.h>

int main()

{
    char str1[50], str2[50], str3[50];
 printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);
//    String Length
printf("Length of first string: %d\n", strlen(str1));
    printf("Length of second string: %d\n", strlen(str2));
    strcpy(str3, str1);
    printf("\n\n After copying, str3 = %s", str3);
    strcat(str1, str2);
    printf("\n\n After concatenation, str1 = %s", str1);
    if (strcmp(str2, str3) == 0)
        printf("\n\n str2 and str3 are equal");
    else
        printf("\n\n str2 and str3 are not equal");
return 0;

    
    

}