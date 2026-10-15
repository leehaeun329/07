#include <stdio.h>

int main(void) {
    int i;
    for (i=0; i< 5; i++) {
        int temp = i;
        printf("temp = %d\n", temp);
        temp++;
    }
    return 0;
}