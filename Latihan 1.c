
#include <stdio.h>

int main() {
    int angka[10];

    for (int i = 0; i < 10; i++) {
        printf("Masukkan bilangan ke-%d: ", i + 1);
        scanf("%d", &angka[i]);
    }

    printf("\nDaftar bilangan ganjil: ");
    for (int i = 0; i < 10; i++) {
        if (angka[i] % 2 != 0) {
            printf("%d ", angka[i]);
        }
    }

    printf("\nDaftar bilangan genap: ");
    for (int i = 0; i < 10; i++) {
        if (angka[i] % 2 == 0) {
            printf("%d ", angka[i]);
        }
    }

    printf("\n");

    return 0;
}
