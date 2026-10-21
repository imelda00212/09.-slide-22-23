
#include <stdio.h>

int main() {
    float suhu[7];
    float total = 0;
    float rataRata;
    float palingDingin, palingPanas;

    for (int i = 0; i < 7; i++) {
        printf("Masukkan suhu hari ke-%d: ", i + 1);
        scanf("%f", &suhu[i]);

        total = total + suhu[i];
    }

    palingDingin = suhu[0];
    palingPanas = suhu[0];

    for (int i = 1; i < 7; i++) {
        if (suhu[i] < palingDingin) {
            palingDingin = suhu[i];
        }

        if (suhu[i] > palingPanas) {
            palingPanas = suhu[i];
        }
    }

    rataRata = total / 7;

    printf("\n===== HASIL TEMPERATUR MINGGUAN =====\n");
    printf("Suhu rata-rata : %.2f\n", rataRata);
    printf("Suhu terdingin : %.2f\n", palingDingin);
    printf("Suhu terpanas  : %.2f\n", palingPanas);

    return 0;
}
