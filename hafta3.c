#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

/*Kullanıcıdan gelen sayısının asal olup olmadığını bulan programı kodlayınız.
*/

int main() {
    /*Kullanıcıdan gelen sayısının asal olup olmadığını bulan programı kodlayınız.
    */
 /*  int sayi;
   printf("sayiyi giriniz:");
   scanf("%d", &sayi); // 1'e ve kendisine hariç hiçbir bir sayıya bölünemiyorsa

   bool asal = false;
   for (int i = 2; i < sayi; i++) {
    if (sayi % i == 0) {
        break;
    }
    if (i == sayi - 1) {
        asal = true;
    }
   }

   printf("ilk döngü sonucu: %d \n", asal);

   asal = true;
   for (int i = 2; i < sayi; i++) {
    if (sayi % i == 0) {
        asal = false;
        break;
    }
   }

   printf("ikinci döngü sonucu %d", asal);
   */
  // Kullanıcının girdiği herhangi bir sayının herhangi bir kuvvetini bulan programı for döngüsü ile kodlayınız.
  // 3 ^ 5 = 3 * 3 * 3 * 3 * 3 = 
  /*int taban;
  int us;

  printf("sayi ve üssünü giriniz:");
  scanf("%d %d", &taban, &us);

  int carpim = 1;
  for (int i = 0; i < us; i++) {
    // carpim = carpim * sayi;
    carpim *= taban;
  }

  printf("%d", carpim);*/

    /*
    int n = 4, k;
    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            if (j == 1) {
                printf("%d", j);
            }
            else {
                k = pow(j, i);
                printf("-%d", k);
            }
        }
        printf("\n");
    }
    */

   /*Kullanıcının girdiği sayının kaç basamaktan oluştuğunu bulan programı kodlayınız.
    */
   int sayi = 25;
   printf("sayiyi giriniz:");
   scanf("%d", &sayi);

   int sayac = 0;
   while (sayi != 0) {
    sayi = sayi / 10;
    sayac++;
   }
   printf("%d", sayac);
}