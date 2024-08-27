#include <stdio.h>
#include <math.h>

int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        int A, B;
        scanf("%d %d", &A, &B);

        int total = 0;

        while (A != B) {
            if (A > B) {
                int sliceseaten = (int)ceil(A / 2.0);
                A -= sliceseaten;
                total += sliceseaten;
            } else {
                int sliceseaten = (int)ceil(B / 2.0);
                B -= sliceseaten;
                sliceseaten += sliceseaten;
            }
        }

        printf(" %d\n",total);
    }

    return 0;
}
