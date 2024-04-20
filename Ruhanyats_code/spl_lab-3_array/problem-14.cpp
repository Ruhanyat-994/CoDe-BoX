#include <stdio.h>

void swapArrays(int A[], int n, int B[], int m) {
    int temp[m]; // Temporary array to store elements of array B

    // Copy elements of array B to the temporary array
    for (int i = 0; i < m; i++) {
        temp[i] = B[i];
    }

    // Copy elements of array A to array B
    for (int i = 0; i < n; i++) {
        B[i] = A[i];
    }

    // Copy elements of the temporary array to array A
    for (int i = 0; i < m; i++) {
        A[i] = temp[i];
    }
}

void printArray(int arr[], int size, char arrayName) {
    printf("Array %c: ", arrayName);
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n, m;
    printf("Enter the size of array A: ");
    scanf("%d", &n);
    int A[n];
    printf("Enter %d integers for array A: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }

    printf("Enter the size of array B: ");
    scanf("%d", &m);
    int B[m];
    printf("Enter %d integers for array B: ", m);
    for (int i = 0; i < m; i++) {
        scanf("%d", &B[i]);
    }

    swapArrays(A, n, B, m);

    printArray(A, n, 'A');
    printArray(B, m, 'B');

    return 0;
}
