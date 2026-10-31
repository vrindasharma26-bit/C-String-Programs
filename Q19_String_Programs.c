#include <stdio.h>
#include <string.h>

int main() {
    char str1[300] = "";
    char str2[100], str3[100], str4[100];

    printf("Enter first string: ");
    scanf("%99s", str2);

    printf("Enter second string: ");
    scanf("%99s", str3);

    printf("Enter third string: ");
    scanf("%99s", str4);

    strcat(str1, str2);
    strcat(str1, " ");
    strcat(str1, str3);
    strcat(str1, " ");
    strcat(str1, str4);

    printf("Combined sentence = %s", str1);

    return 0;
}
