#include <stdio.h>

int main(){
    int num1; int num2;
    int result;
    printf("Input the first integer: ");
    scanf("%d", &num1);
    printf("Input the second integer: ");
    scanf("%d", &num2);
    result = num1 + num2;
    printf("Sum of the above two integers: %d", result);

    return 0;
}
