#include <stdio.h>

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int len = sizeof(arr) / sizeof(arr[0]);

    int *p1 = arr;
    int * p2[10] = arr;
    printf("%p\n", arr);
    printf("%p\n", &arr);
    printf("%p\n", arr + 1);
    printf("%p\n", &arr + 1);

    for (int i = 0; i < len; i++)
    {
        printf("%d\n", *(p1 + i));
    }

    printf("%p\n", p1 + 1);
    // printf("%p\n", p2 + 1);
    return 0;
}