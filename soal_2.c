#include <stdio.h>
#include <string.h>

int main() {
    char A[101], B[101];
    
    // Membaca dua string A dan B
    fgets(A, sizeof(A), stdin);
    fgets(B, sizeof(B), stdin);
    
    // Menghapus newline character jika ada
    A[strcspn(A, "\n")] = '\0';
    B[strcspn(B, "\n")] = '\0';
    
    // Membandingkan panjang string
    if (strlen(A) != strlen(B)) {
        printf("BERBEDA\n");
    } else {
        // Membandingkan string satu per satu
        if (strcmp(A, B) == 0) {
            printf("IDENTIK\n");
        } else {
            printf("MIRIP\n");
        }
    }
    
    return 0;
}
