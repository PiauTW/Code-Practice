#include <stdio.h>

int n;

int main(){
    scanf("%d", &n);
    if(n < 0)
        n = -n;
    printf("%d", n);
}
