#include <stdio.h>

void replaceOddIndexWithZero(int A[], int n) {
    for (int i = 1; i < n; i += 2) {
        A[i] = 0;
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n;
    printf("Enter the size of array A: ");
    scanf("%d", &n);
    int A[n];
    printf("Enter %d positive integers for array A: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }

    replaceOddIndexWithZero(A, n);

    printf("Modified array A: ");
    printArray(A, n);

    return 0;
}

