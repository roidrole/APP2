#include <stdio.h>

int factorielle(int n) {
    int total = 1;
    for(int i=1; i <= n;){
        total *= i;
        i++;
    }
    return total;
}

void main() {
    int w = 0;
    w = factorielle(4);
    printf("%d", w);
}

