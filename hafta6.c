#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
    /*int sayac = 0;
    for (int i = 0; i < 5; i++) {
        
        for (int j = 0; j < 5; j++) {
            if (i % 2 == 0) {
                sayac++;
                printf("%d ", sayac);
            }
            else {
                printf("%d ", sayac * 3);
            }
        }
        printf("\n");
    }*/

    /*
    int satir;
    printf("Satır sayısı giriniz:");
    scanf("%d", &satir);

    for (int i = 1; i <= satir; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        if (i % 2 == 1)
            printf("*");
        printf("\n");
    }
    */
   /*
   int matris[5][5];

   srand(time(0));

   for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++){
        matris[i][j] = (rand() % 20) + 11;
        printf("%d ", matris[i][j]);
    }
    printf("\n");
   }

    int genel_toplam = 0;
   for (int j = 0; j < 5; j++) {
    int toplam = 0;
    for (int i = 0; i < 5; i++) {
        genel_toplam += matris[i][j]; // matrix [0][0] matrix[1][0] matrix[2][0]
        toplam += matris[i][j];
    }
    printf("%d. sütun için sütun toplamı = %d, genel toplam = %d\n", j, toplam, genel_toplam);
   }*/

    char x[20];
   gets(x);

   char a;
   scanf("%c", &a);

   for (int i = 0; i < 30; i++) {
    if (x[i] == 'a' || x[i] == 'e') {
        x[i] = a;
    }
   }
   printf("%s", x);

}