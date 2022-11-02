#include <stdio.h>
#include <string.h>

struct data_nilai
{
    char nim[11];
    char nama[50];
    double nilai;
};

struct data_nilai data[10];
int j = 0;

void tambah_data()
{
    char jawab[2];

    while (1)
    {
        printf("nim : ");
        gets(data[j].nim);

        printf("nama : ");
        gets(data[j].nama);

        printf("nilai ujian : ");
        scanf("%lf", &data[j].nilai);

        fflush(stdin);
        printf("ada data lagi (y/t) : ");
        gets(jawab);

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