#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// Üretilecek şifrenin kaç haneli olacağı klavyeden girilir, şifre üretilir ve ekrana yazdırılır
// Şifredeki herhangi bir karakterin ASCII'deki min değeri 65, max değeri 122 olsun
// ASCII A: 65   Z: 90
//       a: 97   z: 122

int main()
   
{
 
 srand(time(0));
 int i,n;
 
 printf("rastgele uretmek istediginiz sifre kac haneli olsun?: ");
 scanf("%d",&n);
 
 int dizi[n];
 char SifreliDizi[n];
 
 for(i = 0 ; i < n ; i++)
 {
  dizi[i] = 65 + rand()%58; // min 65 , max 122 üretir
 }
 
 for(i = 0 ; i < n ; i++)
 {
  printf("%d ",dizi[i]); // üretilen sayısal değerler ekrana yazdırılır
 } 
 
 for(i = 0 ; i < n ; i++)
 {
  SifreliDizi[i] = (char)dizi[i]; // üretilen her sayısal değer ASCII'deki karakter değerine çevrilir 
 }
 
 printf("\n\nüretilen şifre: ");
 for(i = 0 ; i < n ; i++)
 {
  printf("%c",SifreliDizi[i]);
 }
 
 return 0;
 
}