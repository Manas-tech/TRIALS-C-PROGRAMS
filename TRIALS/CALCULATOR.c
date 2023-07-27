//calculator
#include <stdio.h>
int main(){
    int q;
    int a, b, result;
    printf("Enter an Operator (+, *, *, /): ");
    scanf("%d", &q);
    printf("Enter two operands: \n");
    scanf("%d %d", &a, &b);
    
    switch(q){
        case '+':
            result = a + b;
            break;
        case '-':
            result = a - b;
            break;
        case '*':
            result = a * b;
            break;
        case '/':
            result = a / b;
            break;
    }
    printf("Result = %d", result);
    return 0;
}
