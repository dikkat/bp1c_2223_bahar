#include <math.h>
#include <stdio.h>

// İki değişkeni pointer kullanarak değiştiren C metodunu yazınız.
void swap(int* a, int* b) { //pass by reference, pass by value
    int temp = *a; //temp -> 16
    *a = *b; // *a -> 24
    *b = temp; // *b -> 16
    printf("metod içinde adres a: %d\n", a);
    printf("metod içinde adres b: %d\n", b);
    printf("metod içinde a: %d\n", *a);
    printf("metod içinde b: %d\n", *b);
}

// Verilen bir sayının üssünü pointer kullanarak hesaplayan C metodunu yazınız.

void us_hesap(int* sayi, int us) { //hexadecimal number
    *sayi = pow(*sayi, us);
}

// Verilen bir diziyi diğer bir diziye kopyalayan metodu pointer kullanarak yazınız.
void dizi_kopyala(int a[], int b[]) {
    // b -> a
    int* a_ptr = a;
    int* b_ptr = b;

    printf("Döngü içinde\n");
    for (int i = 0; i < 3; i++) {
        *(a_ptr + i) = *(b_ptr + i);
        printf("%d ", a[i]);
    }
}

int main() {
    // int a = 16;
    // int b = 24;
    // printf("adres a: %d\n", &a);
    // printf("adres b: %d\n", &b);
    // swap(&a, &b);
    // printf("metod sonrası adres a: %d\n", &a);
    // printf("metod sonrası adres b: %d\n", &b);
    // printf("metod sonrası a: %d\n", a);
    // printf("metod sonrası b: %d\n", b);
    int a[] = {9215, 3, 5};
    // *a -> bellekte
    // a = 1, a + 1 = 3, a + 2 = 5
    // a[3] -> a + 3
    // a[3] = 7 -> a + 3 = 7
    int b[] = {10, 30, 50};
    
    dizi_kopyala(a, b);

    printf("\nDöngü sonrası\n");
    for (int i = 0; i < 3; i++) {
        printf("%d ", a[i]);
    }
    // us_hesap(&a, 10);
    // a = pow(a, 10);

    // printf("%d", a);
    // printf("%d\n", *b);
    // printf("%d\n", a);
    
}