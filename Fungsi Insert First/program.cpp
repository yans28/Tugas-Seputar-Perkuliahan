#include <stdio.h>
#include <stdlib.h>

// Fungsi untuk menambahkan elemen baru pada awal array
void insertFirst(int arr[], int n, int newElement) {
    for(int i=n-1; i>=0; i--) {
        arr[i+1] = arr[i];
    }
    arr[0] = newElement;
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int n = sizeof(arr)/sizeof(arr[0]);

    printf("Array sebelum insert: ");
    for(int i=0; i<n; i++) {
        printf("%d ", arr[i]);
    }

    insertFirst(arr, n, 0);

    printf("\nArray setelah insert: ");
    for(int i=0; i<n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}