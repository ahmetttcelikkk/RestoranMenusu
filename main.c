#include <stdio.h>
#include <stdlib.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL,"Turkish");
    int sipariskodu;
    float toplamTutar;
    float porsiyon;
    printf("Menu\t\tSiparis Kodu\tFiyati\n");
    printf("Baslangiclar\t1\t\t5.5 TL\nAra Sicaklar\t2\t\t7.5 TL\nSalatalar\t3\t\t12 TL\nAna Yemekler\t4\t\t17.75 TL\nTatlilar\t5\t\t11.25 TL\nIcecekler\t6\t\t2.25 TL\n");
    menu: printf("Lutfen secmek istediginiz menunun siparis kodunu giriniz...\n");
    scanf("%d",&sipariskodu);
    if(sipariskodu==-1) {
    goto cikis;
}
    if(sipariskodu>0 && sipariskodu<13) {
    printf("Lutfen secmek istediginiz urunun porsiyon sayisini giriniz...\n");
    scanf("%f",&porsiyon);

    switch(sipariskodu) {
    case 1:
    if(porsiyon>0) {
    toplamTutar+=5.5*porsiyon;
    printf("Toplam Tutar:%f\n",toplamTutar);
    }
    else {
        printf("Lutfen 0'dan buyuk bir deger giriniz...\n");
    }
    break;
    case 2:
    if(porsiyon>0) {
    toplamTutar+=7.5*porsiyon;
    printf("Toplam Tutar:%f\n",toplamTutar);
    }
    else {
        printf("Lutfen 0'dan buyuk bir deger giriniz...\n");
    }
    break;
    case 3:
    if(porsiyon>0) {
    toplamTutar+=12*porsiyon;
    printf("Toplam Tutar:%f\n",toplamTutar);
    }
    else {
    printf("Lütfen 0'dan buyuk bir deger giriniz...\n");

    }

    break;
    case 4:
    if(porsiyon>0) {
    toplamTutar+=17.75*porsiyon;
    printf("Toplam Tutar:%f\n",toplamTutar);
     }

    else {
    printf("Lütfen 0'dan buyuk bir deger giriniz...\n");

    }


    break;
    case 5:
    if(porsiyon>0) {
    toplamTutar+=11.25*porsiyon;
    printf("Toplam Tutar:%f\n",toplamTutar);
        }
    else {
    printf("Lütfen 0'dan buyuk bir deger giriniz...\n");

    }
    break;
    case 6:
    if(porsiyon>0) {
    toplamTutar+=2.25*porsiyon;
    printf("Toplam Tutar:%f\n",toplamTutar);

        }
        else {
    printf("Lütfen 0'dan buyuk bir deger giriniz...\n");

    }
    break;

    case 7:
    if(porsiyon>0) {
        toplamTutar-=5.5*porsiyon;
        printf("Toplam Tutar:%f\n",toplamTutar);
        printf("1 nolu siparisiniz iptal edilmistir\n");
    }
              else {
    printf("Lütfen 0'dan buyuk bir deger giriniz...\n");

    }

        break;
    case 8:
        if(porsiyon>0) {
           toplamTutar-=7.5*porsiyon;
         printf("Toplam Tutar:%f\n",toplamTutar);
        printf("2 nolu siparisiniz iptal edilmistir\n");
        }
          else {
    printf("Lütfen 0'dan buyuk bir deger giriniz...\n");

    }
        break;

    case 9:
      if(porsiyon>0) {
           toplamTutar-=12*porsiyon;
         printf("Toplam Tutar:%f\n",toplamTutar);
        printf("3 nolu siparisiniz iptal edilmistir\n");
      }
         else {
    printf("Lütfen 0'dan buyuk bir deger giriniz...\n");

}
        break;

    case 10:
         if(porsiyon>0) {
         toplamTutar-=17.75*porsiyon;
         printf("Toplam Tutar:%f\n",toplamTutar);
        printf("4 nolu siparisiniz iptal edilmistir\n");
         }
         else {
    printf("Lütfen 0'dan buyuk bir deger giriniz...\n");

    }
        break;
    case 11:
         if(porsiyon>0) {
        toplamTutar-=11.25*porsiyon;
         printf("Toplam Tutar:%f\n",toplamTutar);
        printf("5 nolu siparisiniz iptal edilmistir\n");
         }
         else {
    printf("Lütfen 0'dan buyuk bir deger giriniz...\n");

    }

        break;

    case 12:
        if(porsiyon>0) {
         toplamTutar-=2.25*porsiyon;
         printf("Toplam Tutar:%f\n",toplamTutar);
        printf("6 nolu siparisiniz iptal edilmistir\n");
        }
         else {
    printf("Lütfen 0'dan buyuk bir deger giriniz...\n");

    }
        break;

    default:

    printf("Geçersiz bir siparis kodu girdiniz.Lutfen 1-6 arasi  degerler giriniz..\n");


    break;

    }
    }

    else {
    printf("Hatali bir siparis kodu girdiniz lutfen Tekrar deneyiniz..\n");
}

    goto menu;
    cikis:  printf("Siparisiniz tamamlanmistir.\n");
            printf("Toplam Tutar:%f\n",toplamTutar);

    return 0;
}
