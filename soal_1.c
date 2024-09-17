#include <stdio.h>
#include <stdlib.h>

void bubbleSort(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                // Tukar arr[j] dan arr[j+1]
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main() {
    int N;
    
    // Membaca jumlah nilai
    scanf("%d", &N);

    // Mendeklarasikan array untuk menyimpan nilai
    int* nilai = (int*)malloc(N * sizeof(int));
    if (nilai == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Membaca nilai-nilai dari input
    for (int i = 0; i < N; i++) {
        scanf("%d", &nilai[i]);
    }

    // Mengurutkan nilai secara menaik menggunakan bubble sort
    bubbleSort(nilai, N);

    // Mencetak nilai yang sudah diurutkan
    for (int i = 0; i < N; i++) {
        printf("%d\n", nilai[i]);
    }

    // Membebaskan memori
    free(nilai);

    return 0;
}
