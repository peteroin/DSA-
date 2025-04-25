#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define MAX 100

int stack[MAX];
int top = -1;

void push(int value) {
    if (top >= MAX - 1) {
        printf("Stack Overflow\n");
    } else {
        stack[++top] = value;
    }
}

int pop() {
    if (top < 0) {
        printf("Stack Underflow\n");
        exit(1);
    } else {
        return stack[top--];
    }
}

int evaluatePostfix(char* expr) {
    int i, op1, op2, result;
    for (i = 0; expr[i] != '\0'; i++) {
        char ch = expr[i];

        if (isdigit(ch)) {
            // Convert char digit to integer and push
            push(ch - '0');
        } else if (ch == '+' || ch == '-' || ch == '*' || ch == '/') {
            op2 = pop();
            op1 = pop();

            switch (ch) {
                case '+': result = op1 + op2; break;
                case '-': result = op1 - op2; break;
                case '*': result = op1 * op2; break;
                case '/': result = op1 / op2; break;
            }

            push(result);
        }
    }

    return pop();
}

int main() {
    char postfixExpr[MAX];

    printf("Enter postfix expression (single digits, e.g. 231*+9-): ");
    scanf("%s", postfixExpr);

    int result = evaluatePostfix(postfixExpr);
    printf("Result: %d\n", result);

    return 0;
}
