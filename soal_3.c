#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool isPrime(unsigned long long n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    
    // Cek pembagi dari 5 hingga sqrt(n)
    for (unsigned long long i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    
    return true;
}

int main() {
    unsigned long long N;
    
    // Membaca bilangan N
    scanf("%llu", &N);
    
    // Memeriksa apakah N adalah bilangan prima
    if (isPrime(N)) {
        printf("PRIMA\n");
    } else {
        printf("BUKAN\n");
    }
    
    return 0;
}
