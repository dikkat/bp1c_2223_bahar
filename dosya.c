#include <stdio.h>

void main()
{
    /*
    Kullanıcıdan üç integer değer alınız ve girilen değerlerin ortalamasını
    ekrana yazdırın.
    int x, y, z;
    printf("Üç değeri de giriniz, aralarında virgül koyarak: ");
    scanf("%d,%d,%d", &x, &y, &z);

   printf("İlk değeri giriniz: ");
   scanf("%d", &x);

   printf("İkinci değeri giriniz: ");
   scanf("%d", &y);

   printf("Üçüncü değeri giriniz: ");
   scanf("%d", &z);

    int sum = x + y + z;
    printf("Toplam = %d\n", sum);

    // float average = /*casting*\/(float)sum / 3;
    float average = sum / 3.0;
    printf("Ortalama = %.5f", average);
    */

    /*
     Kullanıcıdan gerekli değerleri alarak aşağıdaki hesaplamaları yapınız ve
     sonucu ekrana yazdırın.
     A. Dairenin alanını hesaplayın.
     B. Dairenin çevresini hesaplayın.
     C. Dikdörtgenin alanını hesaplayın.
     D. Dikdörtgenin çevresini hesaplayın.
    */
  /* int radius;

   printf("Daire yarıçapını giriniz:");
   scanf("%d", &radius);

   int taller_edge, shorter_edge;
   printf("Dikdörtgenin uzun kenarını giriniz: ");
   scanf("%d", &taller_edge);

   printf("Dikdörtgenin kısa kenarını giriniz: ");
   scanf("%d", &shorter_edge);

   float PI = 3.14;
   printf("Dairenin alanı = %.2f ve çevresi = %.2f\n", PI * radius * radius, 2 * PI * radius);
   printf("Dikdörtgenin alanı = %d ve çevresi = %d", taller_edge * shorter_edge, 2 * (taller_edge + shorter_edge));

*/
    int x = 10;
    
    int y;
    y = x++; //increment operator
    y = --x; //decrement operator
    printf("%d, %d\n", x, y);

}