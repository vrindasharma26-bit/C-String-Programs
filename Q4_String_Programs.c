#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], copy[100];

    printf("Enter first string: ");
    scanf("%99s", str1);

    printf("Enter second string: ");
    scanf("%99s", str2);

    strcpy(copy, str1);

    if (strcmp(copy, str2) == 0)
        printf("Strings are equal");
    else
        printf("Strings are not equal");

    return 0;
}
