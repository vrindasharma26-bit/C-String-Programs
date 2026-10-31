#include <stdio.h>
#include <string.h>

int main() {
    char str1[200], str2[100];

    printf("Enter first string: ");
    scanf("%99s", str1);

    printf("Enter second string: ");
    scanf("%99s", str2);

    strcat(str1, str2);

    printf("Concatenated string = %s", str1);

    return 0;
}
