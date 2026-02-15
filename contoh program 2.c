/*Program : Opr1.c
deskripsi : penggunaan operator increment dan decrement
nama/NPM  : Ratih Purnama Sari
tanggal   : 22/12/2025
*/

#include <stdio.h>

int main (void)
{
    int a= 5;
    printf("Post Increment \n");
    printf("Isi variabel a: %d \n",a);
    printf("Isi variabel a: %d \n",a++);
    printf("Isi variabel a: %d \n",a);
    printf("Post Decrement \n");
    printf("Isi variabel a: %d \n",a);
    printf("Isi variabel a: %d \n",a--);
    printf("Isi variabel a: %d \n",a);

    printf("\n");

    int b = 5;
    printf("Pre Increment \n");
    printf("Isi variabel b: %d \n",b);
    printf("Isi variabel b: %d \n",++b);
    printf("Isi variabel b: %d \n",b);
    printf("Pre Decrement \n");
    printf("Isi variabel b: %d \n",b);
    printf("Isi variabel b: %d \n",--b);
    printf("Isi variabel b: \n",b);

    return 0;
    }
