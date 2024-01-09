#include <stdio.h>
#include <stdlib.h>

// Fungsi untuk menambahkan elemen terakhir pada array
void insertLast(int arr[], int n, int value) {
    if(n == 0) {
        arr[n] = value;
    } else {
        arr[n] = arr[n-1];
        arr[n-1] = value;
    }
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int n = sizeof(arr)/sizeof(arr[0]);

    printf("Array sebelum insert: ");
    for(int i=0; i<n; i++) {
        printf("%d ", arr[i]);
    }

    int value = 10;
    insertLast(arr, n, value);

    printf("\nArray setelah insert: ");
    for(int i=0; i<n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}