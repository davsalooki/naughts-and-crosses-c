#include <stdio.h>

int main() {
    printf("Welcome to naughts and crosses!\n");
    printf("This is my first mini project in C.\n");
    printf("I will be learning C++ after a few C projects.\n\n");
    printf("Press any key to continue.\n");
    char ch = getchar();
    if (ch != 'q') {
        while (getchar() != '\n');
        main();
    }
    return 0;
}

