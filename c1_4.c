#include <stdio.h>
#include <string.h>

struct data_nilai
{
    char nim[10];
    char nama[20];
    double nilai;
};

struct data_nilai data[10];
int j = 0;

void tambah_data()
{
    char jawab[2];

    while (1)
    {
        fflush(stdin);
        printf("nim : ");
        scanf("%s", &data[j].nim);
        printf("nama : ");
        scanf("%s", &data[j].nama);
        printf("nilai ujian : ");
        scanf("%1f", &data[j].nilai);
        printf("ada data lagi (y/t) : ");
        scanf("%s", &jawab);
        if (strcmp(jawab, "y") == 0)
        {
            j++;
            continue;
        }
        else if (strcmp(jawab, "t") == 0)
        {
            break;
        }
    }
}

void tampil()
{
    int i;
    printf("data mahasiswa yang telah diinput :\n");
    printf("nim\tnama\tnilai\n");
    for (i = 0; i <= j; i++)
    {
        printf("%s\t%s\t%.2f\n", data[i].nim, data[i].nama, data[i].nilai);
    }
}

void main()
{
    tambah_data();
    tampil();
}