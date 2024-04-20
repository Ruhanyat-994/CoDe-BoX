#include <stdio.h>

void findUnion(int A[], int n, int B[], int m) {
    // Initialize an array to store the union (with maximum possible size)
    int unionArr[n + m];
    int unionSize = 0;

    // Copy elements of A to the unionArr
    for (int i = 0; i < n; i++) {
        unionArr[unionSize++] = A[i];
    }

    // Iterate through the elements of B
    for (int i = 0; i < m; i++) {
        int found = 0;
        // Check if the current element of B is already in unionArr
        for (int j = 0; j < unionSize; j++) {
            if (B[i] == unionArr[j]) {
                found = 1;
                break;
            }
        }
        // If the element of B is not in unionArr, add it
        if (!found) {
            unionArr[unionSize++] = B[i];
        }
    }

    // Print the union array
    printf("Union of arrays A and B: ");
    for (int i = 0; i < unionSize; i++) {
        printf("%d ", unionArr[i]);
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

    findUnion(A, n, B, m);

    return 0;
}
