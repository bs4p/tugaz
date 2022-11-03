#include <stdio.h>

void main()
{
    int bil, detik, menit, jam, hari;

    printf("bilangan : ");
    scanf("%d", &bil);

    detik = bil % 60;
    bil /= 60;

    menit = bil % 60;
    bil /= 60;

    jam = bil % 60;

    hari = bil / 24;

    printf("%d hari %d jam %d menit %d detik", hari, jam, menit, detik);
}