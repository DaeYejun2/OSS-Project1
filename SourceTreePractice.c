#include<stdio.h>

int max_f(int a, int b) {
    if (a > b) return a;
    else return b;
}

int min_f(int a, int b) {
    if (a < b) return a;
    else return b;
}

int main() {

    int a, b;
    int max, min;
    scanf_s("%d %d", &a, &b);
    max = max_f(a, b);
    min = min_f(a, b);

    printf("최댓값: %d, 최솟값: %d", max, min);

    return 0;
}