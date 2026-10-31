#include <stdio.h>
#include <string.h>

int main() {
    char str[100], sub[100];

    printf("Enter main string: ");
    scanf("%99s", str);

    printf("Enter string to search: ");
    scanf("%99s", sub);

    if (strstr(str, sub) != NULL)
        printf("String is present");
    else
        printf("String is not present");

    return 0;
}
