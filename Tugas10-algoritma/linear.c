#include <stdio.h>
#include <time.h>
#define SIZE 100

size_t linearSearch(const int array[], int key, size_t size);
int main(void){

    int a[SIZE];

    for (size_t x = 0; x < SIZE; ++x)
    {
        a[x] = 3 * x;
        printf("a = %d\n", a[x]);
    }
    printf("Enter integer search key: ");
    int searchKey;
    scanf("%d", &searchKey);

    clock_t begin = clock();
    size_t index = linearSearch(a, searchKey, SIZE);
    clock_t end = clock();

    if (index != -1){
        printf("Found value at index %d\n", index);
    }else{
        puts("Value not found");
    }
    double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
    printf("waktu yang dibutuhkan : %f detik \n", time_spent);

    }

    size_t linearSearch(const int array[], int key, size_t size){
        for (size_t n = 0; n < SIZE; ++n)
        {
            if (array[n] == key)
            {
                return n;
            }
        }
        return -1;
    }
