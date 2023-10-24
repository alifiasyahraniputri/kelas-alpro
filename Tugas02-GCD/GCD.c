#include <stdio.h>

int main(){

    int m, n, r;
    printf(" ===== Operasi Mencari GCD =====    \n");
    printf(" Masukkan angka pertama : "); scanf ("%d",&m);
    printf(" Masukkan angka kedua   : "); scanf ("%d",&n);

    if (m!=0 && n!=0){

        while((r = m % n) != 0) {  
            m = n;
            n = r;
        }

        printf(" nilai dari gcd adalah : %d", n );
    }
    else{
        printf(" Input Nilai Tidak Boleh 0");
    }
}
