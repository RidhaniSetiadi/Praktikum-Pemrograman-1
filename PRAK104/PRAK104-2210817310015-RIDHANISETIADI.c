#include <stdio.h>
int main ()
{
    int a=400000, b= 350000,x,y,hasil;
    printf ("Harga sepatu a :%d\n",a);
    printf ("Harga sepatu b :%d\n",b);
    x= (a-(a*13/100)); 
    y= (b-(b*21/100)); 
    printf("Sepatu A mendapat diskon 13%% sehingga harga menjadi %d\n",x);
    printf("Sepatu B mendapat diskon 21%% sehingga harga menjadi %d\n",y);
}