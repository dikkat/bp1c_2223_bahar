#include <stdio.h>
#include <math.h>

// Parametre olarak aldığı iki int sayı aralığındaki sayıları ekrana yazdıran fonksiyonu yazınız.
void aralik_yazdiran(int a, int b) {
    if (a < b) {
        for (int i = a; i <= b; i++) {
            printf("%d ", i);
        }
    } else {
        for (int i = b; i <= a; i++) {
            printf("%d ", i);
        }
    }
}

// İki double sayıyı çarpıp sonucunu geri döndüren metodu yazınız.
double carpma(double a, double b) {
    return a * b;
}

double ortalama(int a, int b, double c, double d) {
    return (a + b + c + d) / 4;
}

// Parametre olarak verilen sayının faktöriyelini geri döndüren metodu kodlayınız.
int faktoriyel(int sayi) {
    int toplam = 1;
    while (sayi > 1) {
        toplam *= sayi;
        sayi--;
    }
    return toplam;
}

/*
Parametre olarak verilen bir sayının asal olup olmadığını geri döndüren metodu kodlayınız. 
Parametre olarak gelen sayı asal ise 1 , asal değil ise 0 döndürülecek.
*/

int asaldir(int sayi) {
    for (int i = 2; i < sayi; i++) {
        if ((sayi / (double)i) == (sayi / i)) {
            return 0;
        }
    }
    return 1;
}

int main() {
    // double ortalama_ = ortalama(1, 4, 2.5, 10.25);
  
    /*
    Verilen değere kadar Fibonacci serisini ekrana yazdıran kodu yazınız.
    Değeri tam sayı olarak kullanıcıdan alınız.
    */

    /*
    int x = 100;

    int f1 = 0;  // f1 = 1 - f1 = 1 - f1 = 2
    int f2 = 1;  // f2 = 1 - f2 = 2 - f2 = 3
    int f3 = 1;  // f3 = 2 - f3 = 3 - f3 = 5

    printf("%d %d ", 1, 1);
    while (f3 < x) {
        f1 = f2;
        f2 = f3;
        printf("%d ", f3);
        f3 = f1 + f2;
    }
    */

    // Bu metodu kullanarak kullanıcı -1 girene kadar gelen sayıların faktöriyelini hesaplayınız.
    
    /*
    int sayi = 0;

    while (sayi != -1) {
        printf("Sayiyi giriniz: ");
        scanf("%d", &sayi);
        if (sayi == -1)
            break;
        printf("Verilen sayi icin faktoriyel degeri: %d\n", faktoriyel(sayi));
    }
    */

    if (asaldir(37) == 1) {
        printf("sayi asaldir.");
    } else {
        printf("asal degildir.");
    }
}


