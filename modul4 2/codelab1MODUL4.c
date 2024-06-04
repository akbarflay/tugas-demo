#include <stdio.h>

int main()
{
    int N, i = 1, sum = 0;

    // Meminta pengguna memasukkan angka N
    printf("Masukkan angka N: ");
    scanf("%d", &N);

    // Menghitung jumlah angka dari 1 hingga N menggunakan while loop
    while (i <= N)
    {
        sum += i;
        i++;
    }

    // Menampilkan hasilnya
    printf("Jumlah angka dari 1 hingga %d adalah %d\n", N, sum);

    return 0;
}