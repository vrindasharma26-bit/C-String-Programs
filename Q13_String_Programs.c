#include <stdio.h>
#include <string.h>

int main() {
    char str[100], ch;
    char *ptr;

    printf("Enter a string: ");
    scanf("%99s", str);

    printf("Enter a character: ");
    scanf(" %c", &ch);

    ptr = strrchr(str, ch);

    if (ptr != NULL)
        printf("Last occurrence at position %d", (int)(ptr - str) + 1);
    else
        printf("Character not found");

    return 0;
}
