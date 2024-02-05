#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    printf("HESAP MAKINESINE HOS GELDINIZ.\n\n");
    int hesapmakinesituru,islem,a,b,c,i=1;
    float x,y,z,sayi;

while(i!=0) {

    printf("1:basit hesap makinesi\n2:gelismis hesap makinesi\n");
    printf("islem yapmak istediginiz hesap makinesi turunu seciniz: ");
    scanf("%d",&hesapmakinesituru);

    if(hesapmakinesituru==1) {

    printf("1:toplama\n2:cikarma\n3:carpma\n4:bolme\n");
    printf("islem seciniz: ");
    scanf("%d",&islem);


    switch (islem) {

     case 1:
     printf("1. sayiyi girin: ");
     scanf("%f",&x);
     printf("2. sayiyi girin: ");
     scanf("%f",&y);
     printf("sonuc:%f\n",z=x+y); break;

     case 2:
     printf("1. sayiyi girin: ");
     scanf("%f",&x);
     printf("2. sayiyi girin: ");
     scanf("%f",&y);
     printf("sonuc:%f\n",z=x-y); break;

     case 3:
     printf("1. sayiyi girin: ");
     scanf("%f",&x);
     printf("2. sayiyi girin: ");
     scanf("%f",&y);
     printf("sonuc:%f\n",z=x*y); break;

     case 4:
     printf("1. sayiyi girin(taban): ");
     scanf("%f",&x);
     printf("2. sayiyi girin: ");
     scanf("%f",&y);
     printf("sonuc:%f\n",z=x/y);
     break;

     default:printf("yanlis tuslama yaptiniz.\n"); break;

    }

    }

    else if (hesapmakinesituru==2) {

      printf("1:mod alma\n2:karekok alma\n3:us alma\n4:logaritma\n");
      printf("islem seciniz: ");
      scanf("%d",&islem);


      switch (islem) {

      case 1:
      printf("1. sayiyi girin: ");
      scanf("%d",&a);
      printf("2. sayiyi girin: ");
      scanf("%d",&b);
      printf("sonuc:%d\n",c=a%b); break;

      case 2:
      printf("sayi giriniz: ");
      scanf("%f",&sayi);
      printf("sonuc:%f\n",sqrt(sayi)); if(sayi<0) { printf("tanimsiz deger.\n");}  break;

      case 3:
      printf("1. sayiyi girin: ");
      scanf("%f",&x);
      printf("2. sayiyi girin: ");
      scanf("%f",&y);
      printf("sonuc:%f\n",pow(x,y)); break;

      case 4:
      printf("1. sayiyi girin(taban): ");
      scanf("%f",&x);

      printf("2. sayiyi girin: ");
      scanf("%f",&y);
      printf("sonuc:%f\n",log(y)/log(x)); if(y<0 || x==1 || x<0) {printf("tanimsiz deger.\n"); } break;

      default:printf("yanlis tuslama yaptiniz.\n"); break;

        }
    }

     else {
        printf("yanlis tuslama yaptiniz.\n");
     }


    printf("\nhesap makinesini kullanmaya devam etmek icin 1'e, hesap makinesinden cikmak icin 0'a basiniz: \n");
    scanf("%d",&i); }

    printf("\nHESAP MAKINESINDEN CIKILIYOR...\n");
    return 0;
}
