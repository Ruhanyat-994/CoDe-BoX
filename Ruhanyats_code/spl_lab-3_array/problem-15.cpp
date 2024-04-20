
#include <stdio.h>

void replaceDivisibleByThree(int A[], int n) {
    for (int i = 0; i < n; i++) {
        if (A[i] % 3 == 0) {
            A[i] = -1;
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
    printf("Enter %d positive integers for array A: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }

    replaceDivisibleByThree(A, n);

    printf("Modified array A: ");
    printArray(A, n);

    return 0;
}
