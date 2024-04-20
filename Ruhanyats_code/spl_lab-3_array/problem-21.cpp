#include <stdio.h>

// Function to check if an element exists in an array
int existsInArray(int key, int arr[], int size) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            return 1; // Element exists in the array
        }
    }
    return 0; // Element doesn't exist in the array
}

void findDifference(int A[], int n, int B[], int m) {
    printf("Difference of arrays A and B (A - B): ");
    // Iterate through the elements of array A
    for (int i = 0; i < n; i++) {
        // Check if the current element of A is not present in array B
        if (!existsInArray(A[i], B, m)) {
            printf("%d ", A[i]); // Print the element if it's not present in B
        }
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
    printf("Enter %d positive integers for array B: ", m);
    for (int i = 0; i < m; i++) {
        scanf("%d", &B[i]);
    }

    findDifference(A, n, B, m);

    return 0;
}
