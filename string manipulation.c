#include <stdio.h>
#include <string.h>

int main() {
    char str1[50], str2[50], result[50];
    int choice;

    printf("Enter first string: ");
    gets(str1);

    printf("Enter second string: ");
    gets(str2);

    printf("\n--- STRING OPERATIONS ---\n");
    printf("1. Length of strings\n");
    printf("2. Concatenation\n");
    printf("3. Copy string2 to string1\n");
    printf("4. Compare strings\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {

        case 1:
            printf("Length of str1 = %lu\n", strlen(str1));
            printf("Length of str2 = %lu\n", strlen(str2));
            break;

        case 2:
            strcpy(result, str1);
            strcat(result, str2);
            printf("After concatenation: %s\n", result);
            break;

        case 3:
            strcpy(result, str2);
            printf("Copied string (str2 → result): %s\n", result);
            break;

        case 4: {
            int cmp = strcmp(str1, str2);
            if (cmp == 0)
                printf("Strings are equal.\n");
            else if (cmp > 0)
                printf("str1 is greater.\n");
            else
                printf("str2 is greater.\n");
            break;
        }

        default:
            printf("Invalid choice.\n");
    }

    return 0;
}
