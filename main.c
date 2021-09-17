#include <stdio.h>

int main() {
    char ans = 'n';
    do {
        int n1 = 0, n2 = 1, n3, num;
        printf("Enter the number of elements :");
        scanf(" %d", &num);
        if (num == 0) {
            printf("No fibonacci series for 0 elements");
        } else if (num == 1) {
            printf("%d", n1);
        } else if (num == 2) {
            printf("%d %d", n1, n2);
        } else if (num > 2) {
            printf("%d %d", n1, n2);//printing 0 and 1
            for (int i = 2; i < num; ++i) { //loop from 2 because 0 and 1 are printed beforehand
                n3 = n1 + n2;
                printf(" %d", n3);
                n1 = n2;
                n2 = n3;
            }
        } else {
            printf("Enter valid number of elements");
        }
        printf("\nDo you want to get fibonacci series again (y/n)");
        scanf(" %c", &ans);
    } while (ans == 'y');
    return 0;
}
