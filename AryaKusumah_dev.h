//#define AryaKusumah_dev.h
//#ifndef AryaKusumah_dev.h
#include <math.h>

//void pertambahan(int *a, int *b){
//	scanf("%d", &(*a));
//	scanf("%d", &(*b));
//}
//void proses(int a, int b, int hasil){
//	return hasil = a + b; 
//}
//void output(int a, int b,){
//	printf ("hasil %d + %d = %if "); 
//} 

//#endif

#include <stdio.h>

int main() {
    int dividend, divisor, modulus;

    printf("Masukkan nilai dividend: ");
    scanf("%d", &dividend);

    do {
        printf("Masukkan nilai divisor (tidak boleh 0): ");
        scanf("%d", &divisor);
    } while (divisor == 0);

    modulus = dividend % divisor;

    printf("Hasil modulus dari %d dibagi %d adalah %d", dividend, divisor, modulus);

    return 0;
}

