
#include <stdio.h>

int main() {
    int n = 5;
    int a[5] = {1, 2, 3, 4, 5};

    for (int i = 0; i < n; i++) {
        
        printf("Gia tri ban dau  %d\n", a[i]);

       
        if (a[i] % 2 == 0) {
            a[i] += 3;
        } else {
            a[i] += 2; 
        }

       
        printf("Gia tri sau khi dieu chinh  %d\n", a[i]);
    }

    return 0;
}
