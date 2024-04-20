#include <stdio.h>

void findIntersection(int A[], int n, int B[], int m) {
    printf("Intersection of arrays A and B: ");
    int found = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (A[i] == B[j]) {
                printf("%d ", A[i]);
                found = 1;
                break;
            }
        }
    }

    if (!found) {
        printf("Empty set");
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

    findIntersection(A, n, B, m);

    return 0;
}
