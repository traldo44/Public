#include <stdio.h>
#include <string.h>

typedef struct {
    char adi[15];
    char soyadi[15];
    unsigned int numarasi;
    char dogum_tarihi[15];
} ogrenci;

typedef struct {
    char ders_adi[30];
    int sinif_kodu;
    int kredisi;
    int ders_kodu;
} dersler;

typedef struct {
    int numarasi;
    int ders_kodu[2];
} ogrencinin_aldigi_dersler;

void ogrenci_bilgileri_ve_dersler(ogrenci ogr, dersler ders[], ogrencinin_aldigi_dersler al) {
    printf("---------ogrencinin bilgileri---------\n");
    printf("adi:%s\n", ogr.adi);
    printf("soyadi:%s\n", ogr.soyadi);
    printf("dogum tarihi:%s\n", ogr.dogum_tarihi);
    printf("---------ogrencinin aldigi dersler---------\n");

    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 4; ++j) {
            if (al.ders_kodu[i] == ders[j].ders_kodu) {
                printf("----Aldigi %d.Ders Bilgileri----\n", i + 1);
                printf("ders adi:%s\n", ders[j].ders_adi);
                printf("dersin sinif kodu:%d\n", ders[j].sinif_kodu);
                printf("dersin kredisi:%d\n", ders[j].kredisi);
                printf("ders kodu:%d\n", ders[j].ders_kodu);
            }
        }
    }
}

int main() {
    ogrenci ogrenciler[] = {{"Mert", "Aydingunes", 2210206002, "11.12.2002"},
                            {"Yusuf", "Kucuk", 2210206006, "10.10.2003"},
                            {"Basris", "Ceyhun", 2210206010, "19.12.2002"}};

    dersler derslerim[] = {{"Matematik", 351, 7, 1},
                            {"Fizik", 365, 5, 2},
                            {"Olasilik", 340, 4, 3},
                            {"Programlama Dilleri", 170, 8, 4}};

    ogrencinin_aldigi_dersler al[] = {{2210206002, {3, 4}},
                                      {2210206006, {1, 2}},
                                      {2210206010, {1, 4}}};

    int num;
    printf("bilgiler icin ogrenci numarasini girin:");
    scanf("%d", &num);

    for (int i = 0; i < 3; ++i) {
        if (al[i].numarasi == num) {
            ogrenci_bilgileri_ve_dersler(ogrenciler[i], derslerim, al[i]);
            break;
        }
    }

    printf("ogrenci listesi icin ders numarasi girin:");
    scanf("%d", &num);

    printf("---------%d nolu dersi alan ogrenciler---------\n", num);

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 2; ++j) {
            if (al[i].ders_kodu[j] == num) {
                printf("%d.ogrenci:\n", i + 1);
                printf("adi:%s\n", ogrenciler[i].adi);
                printf("soyadi:%s\n", ogrenciler[i].soyadi);
                printf("ogrenci numrasi:%u\n", ogrenciler[i].numarasi);
            }
        }
    }

    return 0;
}
