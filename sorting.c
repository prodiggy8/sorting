#include <stdio.h>

void doIt(int a[], int n) {
    int i, j, t;
    
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) { 
            
            if (a[j] > a[j+1]) {
                t = a[j];
                a[j] = a[j+1];
                a[j+1] = t;
            }
        }
    }
}

int main() {
    int data[] = {5, 2, 8, 1, 9};
    int n = sizeof(data) / sizeof(data[0]);
    
    doIt(data, n);
    
    for (int i = 0; i < n; i++) {
        printf("%d ", data[i]);
    }
    printf("\n");
    
    return 0;
}
