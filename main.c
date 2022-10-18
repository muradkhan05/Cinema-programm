#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <unistd.h>



int main()
{
    /*

    int biletSoni = 100;
    char roz;
    for(;biletSoni > 0;){
        printf("Bilet Olishni Hohlaysizmi:");
        scanf(" %c",&roz);
        if(roz == 'H' || roz == 'h'){
         int biSon;
          printf("Nechta bilet Olasiz:");
          scanf("%d",&biSon);
          if(biletSoni >= biSon){
                biletSoni = biletSoni - biSon;
                printf("Sotuv amalga Oshmoqda");
            for(int i = 0; i < 3;i++){
                printf(".");
                sleep(1);
            }
            printf("\nSotuv Bajarildi!\n");
            system("COLOR A");
          }else {
            printf("Iltimos boricha bilet Oling\n\a");
            system("COLOR C");
            printf("Sotuvda qolgan biletlar soni %d\n",biletSoni);
          }
        }else {
            printf("Yana kelib Turing!\n");
            system("COLOR 9");
          break;
        }


    }

    if(biletSoni == 0){
        printf("\n\nSotib Olganingiz Uchun Raxmat!!!\n");
        printf("Biletlar TUGADI!!!\n\a");
    }else {
      printf("Sotilgan Biletlar Soni:%d\n",100-biletSoni);
      printf("\t va Qolgan biletlar Soni:%d",biletSoni);
    }


    */
    char soz[10];
    char *to,*no;

    printf("So'z kiriting:");
    gets(soz);
    //non\0
    for(to=soz;*to != '\0';to+=1);
    for(no=soz,to--;to>=no;){
        if(*to == *no){
            to--;
            no++;
        }else {
           break;
        }
    }

    if(to < no) {
        printf("So'z Palindrom");
    }else {
      printf("So'z Palindrom Emas!");
    }



    return 0;
}
