#include <stdio.h>

int main()
{
    int x;
     int y;
     int z;
        printf("Menüye hoşgeldin");
        printf("1- Topla");
        printf("2- Carp");
        printf("3- Cikis");
    
    
        while(1){
            printf("Secim yapin: \n");
            scanf("%d", &x);
            switch(x) {
              case 1:
                printf("Birinci sayiyi girin: \n");
                scanf("%d", &y);
                printf("İkinci sayiyi girin yapin: \n");
                scanf("%d", &z);
                printf("Cevap:%d",y+z);
                printf("Secim yapin: \n");
                scanf("%d", &x);
                break;
              case 2:
                printf("Birinci sayiyi girin: \n");
                scanf("%d", &y);
                printf("İkinci sayiyi girin yapin: \n");
                scanf("%d", &z);
                printf("Cevap:%d",y*z);
                printf("Secim yapin: \n");
                scanf("%d", &x);
    
                break;
            case 3:
              // code block
              break;
    
            }
    
        }
        return 0;
}
