#include<stdio.h>
typedef struct {
    int a;
    int b;
    int c;
} fib;
int main(){
    fib f;
    int n;
    printf("Enter limit: ");
    scanf("%d", &n);
    f.a = 0;
    f.b = 1;
    printf("Fibonacci Series: ");
    printf("%d %d ", f.a, f.b);
    while(f.a + f.b <= n){
        f.c = f.a + f.b;
        printf("%d ", f.c);
        f.a = f.b;
        f.b = f.c;
    }
    return 0;
}

