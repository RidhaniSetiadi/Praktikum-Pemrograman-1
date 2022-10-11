#include <stdio.h>
int main ()
{
    printf("diketahui\n");
    float putaran = 5,kilometer = 14,r;
    printf("pak Dengklek mengelilingi taman  = %.0f putaran\n",putaran);
    printf("jarak tempuh Pak Dengklek = %.0f kilometer\n",kilometer);
    r = kilometer/22/7*putaran;
    printf("jari-jari taman yang dikelilingi pak dengklek adalah = %.2f kilometer\n:",r);
    return 0;
}