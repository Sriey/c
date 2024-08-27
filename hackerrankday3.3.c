#include <stdio.h>

int charlie_eats(int a, int b) {
    int total_slices_eaten = 0;

    while (a != b) {
        if (a > b) {
            a -= (a - b) / 2;
            total_slices_eaten += (a - b) / 2;
        } else {
            b -= (b - a) / 2;
            total_slices_eaten += (b - a) / 2;
        }
    }

    return total_slices_eaten;
}

int main() {
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        int a, b;
        scanf("%d %d", &a, &b);
        printf("%d\n", charlie_eats(a, b));
    }

    return 0;
}
