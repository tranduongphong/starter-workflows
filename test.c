#include <stdio.h>

int add(int a, int b);

int main() {
    if (add(2, 3) == 5) {
        printf("Unit test passed!\n");
        return 0;
    }

    printf("Unit test failed!\n");
    return 1;
}
