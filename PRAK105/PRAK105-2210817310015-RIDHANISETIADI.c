#include <stdio.h>
int main ()
{
    int a=9, b=5, x=8, y=8, hasil;
    printf("variabel a bernilai %d\n",a);
    printf("variabel b bernilai %d\n",b);
    printf("variabel x bernilai %d\n",x);
    printf("variabel y bernilai %d\n",y);
    hasil = a % b + x % y ;
    printf("Total sisa bagi dari a dibagi b dan x dibagi y adalah %d\n",hasil);
    return 0;
}