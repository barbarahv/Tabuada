#include <stdio.h>

int main() {
    int i;
    int n;
    
    scanf("%d", &n);
    for (i = 1; i <= 10; i++){
        printf("%d x %d = %d\n",i,n ,n*i);
    }
    return 0;
}
    