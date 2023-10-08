#include <stdio.h>
int main(){
    long x, y;
    while (scanf("%ld %ld", &x, &y) == 2){
        printf("\n%ld", labs(x-y));
    }
}