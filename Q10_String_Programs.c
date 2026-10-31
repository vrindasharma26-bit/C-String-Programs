#include <stdio.h>
#include <string.h>

char *strrev(char str[]) {
    int i, j;
    char temp;

    for (i = 0, j = (int)strlen(str) - 1; i < j; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }

    return str;
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%99s", str);

    printf("Reversed string = %s", strrev(str));

    return 0;
}
