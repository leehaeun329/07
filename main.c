#include <stdio.h>

int inc(int counter);

int main(void) {
    int i;
    printf("before the function call, i = %d\n", i);
    inc(i);
    printf("after the function call, i = %d\n", i);
    return 0;
}
int inc(int counter) {
    counter++;
    return counter;
}