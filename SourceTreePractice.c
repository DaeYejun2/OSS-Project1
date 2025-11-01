#include<stdio.h>

int max_f(int a, int b) {
    if (a > b) return a;
    else return b;
}

int main() {

    int a, b;
    int max, min;
    scanf_s("%d %d", &a, &b);
    max = max_f(a, b);

    printf("%d", max);

    return 0;
}