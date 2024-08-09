#include <stdio.h>

int main() {
    int n, num, sum = 0;
    
    printf("Enter a number: ");
    scanf("%d", &n);    
    num = n;    
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }    
    if (num % sum == 0) {
        printf("Harshad number.\n");
    } else {
        printf("Not a Harshad number.\n");
    }    
    return 0;
}