#include <stdio.h>
int main() {
    int add, subtract, multiply, divide, n1, n2;
    printf("Enter two integers: ");
    scanf("%d %d", &n1, &n2);

    add = n1 + n2;
    subtract = n1 - n2;
    multiply = n1*n2;
    divide= n1/n2;

    printf("%d+%d=%d\n",n1,n2,add);
    printf("%d-%d=%d\n",n1,n2,subtract);
    printf("%d*%d=%d\n",n1,n2,multiply);
    printf("%d/%d=%d\n",n1,n2,divide);

    return 0;
}
