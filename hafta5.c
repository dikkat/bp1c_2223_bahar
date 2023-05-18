#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void main() {
    /*
    Kullanıcıdan bir kelime alınız.
    Bu kelimenin palindrome olup olmadığını bulunuz
    */
   /*
   char kelime[100];
   gets(kelime);

   int uzunluk = strlen(kelime); //string length

   bool palindrome = true;

   for(int i = 0; i < uzunluk / 2; i++) {
    // hanah\0
    // i = 0, kelime[0] == h, kelime[4] == h
    // i = 1, kelime[1] == a, kelime[3] == a
    // i = 2, kelime[2] == n, kelime[2] == n
    // i = 3, kelime[3] == a, kelime[1] == a
    // i = 4, kelime[4] == h, kelime[0] == h
    if (kelime[i] != kelime[uzunluk - i - 1]) {
        palindrome = false;
        printf("palindrome değildir");
        break;
    }
   }
   if (palindrome) {
    printf("palindromedur");
   }
   */

  /*
  char[30] tanımlayın. İçinde a'dan z'ye bütün harfler bulunsun. 26 harf
  */
    /*
    char dizi[30];
    char ch = 'a';

    for (int i = 0; i < 30; i++) {
        // ch = ch + 1; // 'b'
        // implicit casting
        if (ch > 'z') {
            break;
        }
        dizi[i] = ch++; // 'z' + 2 = '|'
    }
    printf("%s", dizi);
    */
   /*
   char[30] tanımlayın. Kullanıcıdan string alın. Sonra kullanıcıdan iki karakter alın. 
   Verilen ilk karakterin stringde geçtiği yerlerde ikinci karakter ile değiştirin.
   */
  
  char kelime[30];
  char d1, d2;

  printf("kelime giriniz:");
  gets(kelime);
  printf("degisecek olan karakter:");
  scanf("%c", &d1);
  fflush(stdin);
  printf("degisecek karakter:");
  scanf("%c", &d2);

  for (int i = 0; i < 30; i++) {
    if (kelime[i] == d1) {
        kelime[i] = d2;
    }
  }
  printf("%s", kelime);
}