#include <stdio.h>
int main ()
{
    int a=4, b=5, c=7,keliling,meter,hasil;
    printf("Panjang sisi segitiga berturut-turut adalah %d,%d,%d\n", a, b,c );
    keliling = 16;
    printf("Keliling tanah Pak Dengklek adalah %d\n",16);
    meter = 85000;
    printf("Harga tanah per meter adalah %d\n",85000);
    hasil = keliling * meter;
    printf("Biaya yang diperlukan Pak Dengklek adalah Rp %d\n",hasil);
    return 0;
}