#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[6];

    printf("Enter a string: ");
    scanf("%99s", str1);

    strncpy(str2, str1, 5);
    str2[5] = '\0';

    printf("Copied string = %s", str2);

    return 0;
}
