#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi,i,max1,max2;

    max1=-99999;
    max2=-99999;

    for(i=1;i<=10;i++){
        printf("%d. sayiyi girin",i);
        scanf("%d",&sayi);

        if(sayi>max1){
            max2=max1;
            max1=sayi;
        }
        else if(max2<sayi && max1!=sayi){
            max2=sayi;
        }
    }
    printf("max2: %d",max2);


    return 0;
}
