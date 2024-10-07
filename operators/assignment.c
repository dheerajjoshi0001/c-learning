#include <stdio.h>
int main() {
    int a = 10;
    
    a += 10;
    printf("a+10 = %d \n", a); // a is now 20
    
    a -= 10;
    printf("a-10 = %d \n", a); // a is now 10 again
    
    a *= 10;
    printf("a*10 = %d \n", a); // a is now 100
    
    a /= 10;
    printf("a/10 = %d \n", a); // a is now 10 again
    
    a %= 10;
    printf("a%c10 = %d \n", '%', a); // a is now 0 (10 % 10 = 0)
    
    return 0;
}
