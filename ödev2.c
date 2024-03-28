#include <stdio.h>
#include <string.h>
typedef struct ogrenci
{
    char adi[15];
    char soyadi[15];
    unsigned int numarasi;
    char dogum_tarihi[15];
}ogrenci;

typedef struct dersler
{
    char ders_adi[30];
    int sinif_kodu;
    int kredisi;
    int ders_kodu;
}dersler;

struct ogrencinin_aldigi_dersler
{
    int numarasi;
    int ders_kodu[2];

};

 int main()
 {
    int num,i=1;
    ogrenci ogrenci1;
    strcpy(ogrenci1.adi,"Mert");
    strcpy(ogrenci1.soyadi,"Aydingunes");
    ogrenci1.numarasi=2210206002;
    strcpy(ogrenci1.dogum_tarihi,"11.12.2002");
    ogrenci ogrenci2;
    strcpy(ogrenci2.adi,"Yusuf");
    strcpy(ogrenci2.soyadi,"Kucuk");
    ogrenci2.numarasi=2210206006;
    strcpy(ogrenci2.dogum_tarihi,"10.10.2003");
    ogrenci ogrenci3={"Basris","Ceyhun",2210206010,"19.12.2002"};
    dersler ders1;
    strcpy(ders1.ders_adi,"Matematik");
    ders1.sinif_kodu=351;
    ders1.kredisi=7;
    ders1.ders_kodu=1;
    dersler ders2;
    strcpy(ders2.ders_adi,"Fizik");
    ders2.sinif_kodu=365;
    ders2.kredisi=5;
    ders2.ders_kodu=2;
    dersler ders3={"Olasilik",340,4,3};
    dersler ders4={"Programlama Dilleri",170,8,4};
    struct ogrencinin_aldigi_dersler al1={2210206002,{3,4}};
    struct ogrencinin_aldigi_dersler al2={2210206006,{1,2}};
    struct ogrencinin_aldigi_dersler al3={2210206010,{1,4}};
    printf("bilgiler icin ogrenci numarasini girin:");
    scanf("%d",&num);
    if(al1.numarasi==num)
    {
        printf("---------ogrencinin bilgileri---------\n");
        printf("adi:%s\n",ogrenci1.adi);
        printf("soyadi:%s\n",ogrenci1.soyadi);
        printf("dogum tarihi:%s\n",ogrenci1.dogum_tarihi);
        printf("---------ogrencinin aldigi dersler---------\n");
        if(al1.ders_kodu[0]==ders1.ders_kodu || al1.ders_kodu[1]==ders1.ders_kodu)
        {
            printf("----Aldigi %d.Ders Bilgileri----\n",i);
            i++;
            printf("ders adi:%s\n",ders1.ders_adi);
            printf("dersin sinif kodu:%d\n",ders1.sinif_kodu);
            printf("dersin kredisi:%d\n",ders1.kredisi);
            printf("ders kodu:%d\n",ders1.ders_kodu);
        }
        if(al1.ders_kodu[0]==ders2.ders_kodu || al1.ders_kodu[1]==ders2.ders_kodu)
        {
            printf("----Aldigi %d.Ders Bilgileri----\n",i);
            i++;
            printf("ders adi:%s\n",ders2.ders_adi);
            printf("dersin sinif kodu:%d\n",ders2.sinif_kodu);
            printf("dersin kredisi:%d\n",ders2.kredisi);
            printf("ders kodu:%d\n",ders2.ders_kodu);
        }
        if(al1.ders_kodu[0]==ders3.ders_kodu || al1.ders_kodu[1]==ders3.ders_kodu)
        {
            printf("----Aldigi %d.Ders Bilgileri----\n",i);
            i++;
            printf("ders adi:%s\n",ders3.ders_adi);
            printf("dersin sinif kodu:%d\n",ders3.sinif_kodu);
            printf("dersin kredisi:%d\n",ders3.kredisi);
            printf("ders kodu:%d\n",ders3.ders_kodu);
        }
        if(al1.ders_kodu[0]==ders4.ders_kodu || al1.ders_kodu[1]==ders4.ders_kodu)
        {
            printf("----Aldigi %d.Ders Bilgileri----\n",i);
            i++;
            printf("ders adi:%s\n",ders4.ders_adi);
            printf("dersin sinif kodu:%d\n",ders4.sinif_kodu);
            printf("dersin kredisi:%d\n",ders4.kredisi);
            printf("ders kodu:%d\n",ders4.ders_kodu);
        }
    }
    if(al2.numarasi==num)
    {
        printf("---------ogrencinin bilgileri---------\n");
        printf("adi:%s\n",ogrenci2.adi);
        printf("soyadi:%s\n",ogrenci2.soyadi);
        printf("dogum tarihi:%s\n",ogrenci2.dogum_tarihi);
        printf("---------ogrencinin aldigi dersler---------\n");
        if(al2.ders_kodu[0]==ders1.ders_kodu || al2.ders_kodu[1]==ders1.ders_kodu)
        {
            printf("----Aldigi %d.Ders Bilgileri----\n",i);
            i++;
            printf("ders adi:%s\n",ders1.ders_adi);
            printf("dersin sinif kodu:%d\n",ders1.sinif_kodu);
            printf("dersin kredisi:%d\n",ders1.kredisi);
            printf("ders kodu:%d\n",ders1.ders_kodu);
        }
        if(al2.ders_kodu[0]==ders2.ders_kodu || al2.ders_kodu[1]==ders2.ders_kodu)
        {
            printf("----Aldigi %d.Ders Bilgileri----\n",i);
            i++;
            printf("ders adi:%s\n",ders2.ders_adi);
            printf("dersin sinif kodu:%d\n",ders2.sinif_kodu);
            printf("dersin kredisi:%d\n",ders2.kredisi);
            printf("ders kodu:%d\n",ders2.ders_kodu);
        }
        if(al2.ders_kodu[0]==ders3.ders_kodu || al2.ders_kodu[1]==ders3.ders_kodu)
        {
            printf("----Aldigi %d.Ders Bilgileri----\n",i);
            i++;
            printf("ders adi:%s\n",ders3.ders_adi);
            printf("dersin sinif kodu:%d\n",ders3.sinif_kodu);
            printf("dersin kredisi:%d\n",ders3.kredisi);
            printf("ders kodu:%d\n",ders3.ders_kodu);
        }
        if(al2.ders_kodu[0]==ders4.ders_kodu || al2.ders_kodu[1]==ders4.ders_kodu)
        {
            printf("----Aldigi %d.Ders Bilgileri----\n",i);
            i++;
            printf("ders adi:%s\n",ders4.ders_adi);
            printf("dersin sinif kodu:%d\n",ders4.sinif_kodu);
            printf("dersin kredisi:%d\n",ders4.kredisi);
            printf("ders kodu:%d\n",ders4.ders_kodu);
        }
    }
    if(al3.numarasi==num)
    {
        printf("---------ogrencinin bilgileri---------\n");
        printf("adi:%s\n",ogrenci3.adi);
        printf("soyadi:%s\n",ogrenci3.soyadi);
        printf("dogum tarihi:%s\n",ogrenci3.dogum_tarihi);
        printf("---------ogrencinin aldigi dersler---------\n");
        if(al3.ders_kodu[0]==ders1.ders_kodu || al3.ders_kodu[1]==ders1.ders_kodu)
        {
            printf("----Aldigi %d.Ders Bilgileri----\n",i);
            i++;
            printf("ders adi:%s\n",ders1.ders_adi);
            printf("dersin sinif kodu:%d\n",ders1.sinif_kodu);
            printf("dersin kredisi:%d\n",ders1.kredisi);
            printf("ders kodu:%d\n",ders1.ders_kodu);
        }
        if(al3.ders_kodu[0]==ders2.ders_kodu || al3.ders_kodu[1]==ders2.ders_kodu)
        {
            printf("----Aldigi %d.Ders Bilgileri----\n",i);
            i++;
            printf("ders adi:%s\n",ders2.ders_adi);
            printf("dersin sinif kodu:%d\n",ders2.sinif_kodu);
            printf("dersin kredisi:%d\n",ders2.kredisi);
            printf("ders kodu:%d\n",ders2.ders_kodu);
        }
        if(al3.ders_kodu[0]==ders3.ders_kodu || al3.ders_kodu[1]==ders3.ders_kodu)
        {
            printf("----Aldigi %d.Ders Bilgileri----\n",i);
            i++;
            printf("ders adi:%s\n",ders3.ders_adi);
            printf("dersin sinif kodu:%d\n",ders3.sinif_kodu);
            printf("dersin kredisi:%d\n",ders3.kredisi);
            printf("ders kodu:%d\n",ders3.ders_kodu);
        }
        if(al3.ders_kodu[0]==ders4.ders_kodu || al3.ders_kodu[1]==ders4.ders_kodu)
        {
            printf("----Aldigi %d.Ders Bilgileri----\n",i);
            i++;
            printf("ders adi:%s\n",ders4.ders_adi);
            printf("dersin sinif kodu:%d\n",ders4.sinif_kodu);
            printf("dersin kredisi:%d\n",ders4.kredisi);
            printf("ders kodu:%d\n",ders4.ders_kodu);
        }
    }
    printf("ogrenci listesi icin ders numarasi girin:");
    scanf("%d",&num);
    i=1;
    printf("---------%d nolu dersi alan ogrenciler---------\n",num);
    if(al1.ders_kodu[0]==num || al1.ders_kodu[1]==num)
    {
        printf("%d.ogrenci:\n",i);
        printf("adi:%s\n",ogrenci1.adi);
        printf("soyadi:%s\n",ogrenci1.soyadi);
        printf("ogrenci numrasi:%u\n",ogrenci1.numarasi);
        i++;
    }
    if(al2.ders_kodu[0]==num || al2.ders_kodu[1]==num)
    {
        printf("%d.ogrenci:\n",i);
        printf("adi:%s\n",ogrenci2.adi);
        printf("soyadi:%s\n",ogrenci2.soyadi);
        printf("ogrenci numrasi:%u\n",ogrenci2.numarasi);
        i++;
    }
    if(al3.ders_kodu[0]==num || al3.ders_kodu[1]==num)
    {
        printf("%d.ogrenci:\n",i);
        printf("adi:%s\n",ogrenci3.adi);
        printf("soyadi:%s\n",ogrenci3.soyadi);
        printf("ogrenci numrasi:%u\n",ogrenci3.numarasi);
        i++;
    }
    
    return 0;
 }