/*program : input_output1
deskripsi : Penggunaan fungsi input dan output dalam bahasa C
Nama/NPM  : Ratih purnama sari/251013023
Tanggal   : 22/12/2025
*/

#include <stdio.h>
#include <stdlib.h>

int main ()
{
    //Pendefenisian dan Pengisian variabel
    int A = 25000;
    unsigned int B = 70000000;
    float C = 2.7182818;
    char prodi[10]="informatika";
    char alamat[11]= {'P','A','Y','A','K','U','M','B','U','H'};
    char nama[50];

    //Menampilkan isi variabel
    printf("Data Awal\n");
    printf("Nilai A = %d \n", A);
    printf("Nilai B = %u \n", B);
    printf("Nilai C = %f \n", C);
    printf("Nama Prodi : %s \n", prodi);
    printf("Alamat : %s \n", alamat);

    //Penggunaan gets untuk mengisi variabel string dengan penggunaan spasi
    printf("\nMasukan nama anda = ");
    gets(nama);
    printf("\n=========================================================");
    printf("\nNama\t\t\tProdi\t\t\tAlamat\n");
    printf("===========================================================\n");
    printf("%s\t\t%s\t\t%s\n", nama, prodi, alamat);

    //Pengisian nilai variabel melalui keyboard
    printf("\nMasukan nilai A = ");
    scanf("%d", &A);
    printf("Masukan nilai B = ");
    scanf("%u", &B);
    printf("Masukan nilai C = ");
    scanf("%f", &C);

    //Menampilkan isi variabel yang baru dengan menggunakan panjang medan
    printf("\n");
    printf("Nilai A = %8d \n", A);
    printf("Nilai B = %8u \n", B);
    printf("Nilai C = %5.6f \n", C);

    return 0;

    }
