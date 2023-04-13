#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

void main() {
    /*
    Boyutunu tanımladığınız int tipindeki {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}
    dizisinin elemanlarının ortalamasını hesaplayan C programını yazınız.
    */

   /*
   int dizi[10] = {1, 2, 3, 4, 5, 25, 7, 8, 9, 10};
   
   int toplam = 0;
   for (int i = 0; i < 10; i++) {
    toplam += dizi[i];
   }
   float ortalama = toplam / 10.0;
   printf("%d\n", toplam);
   printf("%.1f", ortalama);
   */
  /*
  Elemanları kullanıcıdan alınan 5 boyutlu bir dizinin elemanları toplamını 
  ve en büyük elemanını bulan C programını yazınız.
  */
  /*
  int dizi[5];
  int en_buyuk;
  int toplam = 0;

  printf("değerleri giriniz\n"); 

  for (int i = 0; i < 5; i++) {
    scanf("%d", &dizi[i]); //whitespace
    if (i == 0) {
        en_buyuk = dizi[i];
    } else if (dizi[i] > en_buyuk) {
        en_buyuk = dizi[i];
    }
    toplam += dizi[i];
  }
  
  printf("%d ", toplam);
  printf("%d", en_buyuk);
  */
 /*
 Kullanıcıdan -1 girilene kadar bir sayi isteyen ve girilen sayinin {81, 39, 19, 18, 23} dizisinde olup olmadığını bulan metodu yazarak test eden C programını yazınız.
 */
/*
  int dizi[] = {81, 39, 19, 18, 23};

  int input = 0;
  

  while (input != -1) {
    printf("Sayi giriniz:");
    scanf("%d", &input);

    bool vardir = false;
    for (int i = 0; i < 5; i++) {
        if (dizi[i] == input) {
            vardir = true;
            break;
        }
    }

    if (vardir) {
        printf("Sayi dizide vardir\n");
    } else {
        printf("Sayi dizide yoktur\n");
    }

  }
  printf("programdan çıkıldı");*/
  /*
  Kullanıcıdan en fazla 15 karakterli bir kelime alan ve yine kullanıcıdan alınan bir 
  karakterin bu metinde kaç defa geçtiğini bulan ve geçtiği indisleri ekrana yazdıran C programını yazınız.
  */
  char kelime[15];
  char harf;
  printf("Kelimeyi giriniz:");
  scanf("%15s", &kelime);
  fflush(stdin);
  printf("Karakteri giriniz:");
  scanf("%c", &harf);
  
  int sayac = 0;
  for (int i = 0; i < 15; i++) {
    if (kelime[i] == harf) {
        sayac++;
        printf("%d ", i);
    }
  }
  printf("\n%d defa geçmiştir", sayac);

}