#include <stdio.h>

void removeDuplicates(int A[], int *n) {
    for (int i = 0; i < *n; i++) {
        for (int j = i + 1; j < *n;) {
            if (A[j] == A[i]) {
                for (int k = j; k < *n - 1; k++) {
                    A[k] = A[k + 1];
                }
                (*n)--;
            } else {
                j++;
            }
        }
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
    printf("Enter %d integers for array A: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }

    removeDuplicates(A, &n);

    printf("Modified array A: ");
    printArray(A, n);

    return 0;
}
