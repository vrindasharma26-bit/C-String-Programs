#include <stdio.h>
#include <string.h>

int main() {
    char first[100], last[100];

    printf("Enter first name: ");
    scanf("%49s", first);

    printf("Enter last name: ");
    scanf("%49s", last);

    strcat(first, " ");
    strcat(first, last);

    printf("Full name = %s", first);

    return 0;
}
