#include <stdio.h>
int Sum(int a, int b) {
    return a + b;
}
int main() {
    int p, q;
    
    printf("Enter two integer values:\n");
    scanf("%d %d", &p, &q);
    
    printf("Result: %d + %d = %d\n", p, q, Sum(p, q));
    return 0;
}