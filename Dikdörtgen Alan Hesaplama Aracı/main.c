#include <stdio.h>
#include <stdlib.h>

int main()
{

    int kisakenar,uzunkenar,alan;
   printf("***** Dikdortgen Alan Hesaplama Araci *****\n\n\n");
   printf("Hesaplamak istediginiz dikdortgenin kisa kenar uzunlugunu giriniz : \n");
   scanf("%d",&kisakenar);
   printf("Hesaplamak istediginiz dikdortgenin uzun kenar uzunlugunu giriniz : \n");
   scanf("%d",&uzunkenar);
   alan = kisakenar * uzunkenar;
   printf("--- Dikdortgeninizin alani = %d ---\n",alan);
}
