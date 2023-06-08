#include <stdio.h>
#include <stdlib.h>
#include <string.h>


    // struct kütüphane
    // adi, sokak, mahalle
    // kitap[10]
    // struct kitap
    // adi, yazar adı, yazar soyadı, stok
    // kitap_al(Struct kütüphane, const char* kitap_adi) 
    // kütüphane kitaplarında verilen isimle kitap bulunursa stok değeri 1 düşürülsün yoksa kitap yoktur yazdırsın.

struct KUTUPHANE {
    const char* ad;
    const char* sokak;
    const char* mahalle;
    struct KITAP {
        const char* baslik;
        const char* yazar_ad;
        const char* yazar_soyad;
        int stok;
    }kitaplar[10];
}kutuphane;

void kitap_al(struct KUTUPHANE kutuphane, const char* kitap_baslik) {
    for (int i = 0; i < 10; i++) {
        if (kutuphane.kitaplar[i].baslik == kitap_baslik) {
            if (kutuphane.kitaplar[i].stok > 0) {
                kutuphane.kitaplar[i].stok--;
                printf("%s bulundu, stok değeri 1 azaltıldı.\n", kitap_baslik);
            } else {
                printf("%s bulundu ama stoklarda yok.\n", kitap_baslik);
            }
            return;
        }
    }
    printf("%s bulunamadı.", kitap_baslik);
}

struct OGRENCI {  // modularization
    int ogrenci_no;
    const char* ogrenci_ad;
    const char* ogrenci_soyad;
    int sinif;

    struct DERS {
        const char* ders_ad;
        const char* ders_kod;
    }ders;
}ogrenci;

union UNION {
    int i;
    const char* s;
    float f;
}uni;

typedef struct OGRENCI ogr;


void yazdir(ogr ogrenci) {
    printf("%d nolu %s %s öğrencisinin sınıfı %d'dir\n", ogrenci.ogrenci_no, ogrenci.ogrenci_ad, ogrenci.ogrenci_soyad, ogrenci.sinif);
}

void wadap(int* dizi) {
    printf("%d", *dizi);
    printf("%d", *(dizi+1));
}


int main() {
    const char* quiz = "aa";
    for (int i = 0; i < 10; i++) {
        char* pff = "aaa";
        strcat(pff, quiz);
        struct KITAP kitap = {pff, pff, pff, i}; // kitap ismini dinamikleştir, döngü içinde her adımda farklı isim ata
        kutuphane.kitaplar[i] = kitap; 
        printf("%s\n", kutuphane.kitaplar[i].baslik);
    }

    /*
    int ogrenci_no = 1;
    const char* ogrenci_ad = "ertuğrul";
    const char* ogrenci_soyad = "islamoğlu";
    int sinif = 1;
    const char* dersler[] = {"bp1", "intro to eem", "intro to bme"};

    int ogrenci_no_2 = 2;
    const char* ogrenci_ad_2 = "osman";
    const char* ogrenci_soyad_2 = "osmanoğlu";
    int sinif_2 = 1;
    const char* dersler_2[] = {"bp1", "intro to eem", "intro to bme"};

    int ogrenci_no_list[1000];
    const char* ogrenci_ad_list[1000];
    const char* ogrenci_soyad_list[1000];
    int sinif_list[1000];
    const char* dersler_list[1000][10];

    ogrenci_no_list[0] = 1;
    ogrenci_ad_list[0] = "ertuğrul";
    ogrenci_soyad_list[0] = "islamoğlu";
    sinif_list[0] = 1;

    ogrenci_no_list[1] = 1;
    ogrenci_ad_list[1] = "osman";
    ogrenci_soyad_list[1] = "osmanoğlu";
    sinif_list[1] = 1;
    */
    /*
    ogrenci.ogrenci_no = 1;
    ogrenci.ogrenci_ad = "ertuğrul";
    ogrenci.ogrenci_soyad = "islamoğlu";
    ogrenci.sinif = 1;

    yazdir(ogrenci);
    
    // C97+
    ogr osman = {2, "osman", "osmanoğlu", 1, {"bp1", "blm19203"}};
    yazdir(osman);
    printf("Osmanın aldığı dersler:\n");
    printf("%s %s", osman.ders.ders_kod, osman.ders.ders_ad);
    */
    /*
    uni.s = "string";
    uni.f = 1.05;
    printf("%.2f\n", uni.f);
    uni.i = 2;
    printf("%d\n", uni.i);
    printf("%s", uni.s);
    */

    // struct kütüphane
    // adi, sokak, mahalle
    // kitap[10]
    // struct kitap
    // adi, yazar adı, yazar soyadı, stok
    // kitap_al(Struct kütüphane, const char* kitap_adi) 
    // kütüphane kitaplarında verilen isimle kitap bulunursa stok değeri 1 düşürülsün yoksa kitap yoktur yazdırsın.
    
}