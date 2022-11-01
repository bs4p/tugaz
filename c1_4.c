#include <stdio.h>

#include <string.h>

Struct data_nilai
{
    Char nim[10];
    Char nama[20];
    Double nilai;
};
Struct data_nilai data[10];
Int j = 0;
Void tambah_data()
{
    Char jawab[2];
    While(1)
    {
        fflush(stdin);
        printf(“nim
               : “);
        scanf(“ % s”, &data[j], nim);
        printf(“nama
               : “);
        scanf(“ % s”, &data[j].nama);
        printf(“nilai ujian
               : “);
        scanf(“ % 1 f”, &data[j].nilai);
        printf(“ada data lagi(y / t)
               : “);
        scanf(“ % s”, &jawab);
        if ((strcmp(jawab, “y”) == 0) ||
            (strcmp(jawab, “y”) == 0))
        {
            j++;
            continue;
        }
        else if ((strcmp(jawab, ”t”) == 0) ||
                 (strcmp(jawab, “t”) == 0))
            Break;
    }
}
Void tampil()
{
    Int i;
    Printf(“data mahasiswa yang telah diinput
           : \n”);
    Printf(“nim\ tnama\ tnilai\ n”);
    For(i = o; i <= j; i++)
    {
        Printf(“5\ t % s | t % 6. sf\ n”, data[i].nim,
               data[i].nama, data[i].nilai);
    }
}
Void main()
{
    Tambah_data();
    Tampil();
}