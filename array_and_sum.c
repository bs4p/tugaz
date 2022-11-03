#include <stdio.h>

void main()
{
    int arr[] = {1, 3, 5, 7, 9};
    int arr_size = sizeof(arr) / sizeof(arr[0]);
    int sum = 0;

    printf("Program untuk menjumlahkan seluruh nilai array :\n");
    printf("---------------\n");
    printf("nilai array : ");
    for (int i = 0; i < arr_size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    for (int i = 0; i < arr_size; i++)
    {
        sum += arr[i];
    }
    printf("jumlah seluruh nilai array : %d", sum);
}