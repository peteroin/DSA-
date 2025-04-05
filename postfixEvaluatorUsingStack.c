#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>  // for isdigit()

#define MAX 100

int stack[MAX];
int top = -1;

// Push value to stack
void push(int value) {
    if (top >= MAX - 1) {
        printf("Stack overflow\n");
        exit(1);
    }
    stack[++top] = value;
}

// Pop value from stack
int pop() {
    if (top < 0) {
        printf("Stack underflow\n");
        exit(1);
    }
    return stack[top--];
}

// Evaluate postfix expression
int evaluatePostfix(char* expr) {
    for (int i = 0; expr[i] != '\0'; i++) {
        char ch = expr[i];

        // Skip whitespace
        if (ch == ' ')
            continue;

        // If it's a digit, push to stack
        if (isdigit(ch)) {
            push(ch - '0');
        }
        // Otherwise, it should be an operator
        else {
            int val2 = pop();
            int val1 = pop();
            int result;

            switch (ch) {
                case '+': result = val1 + val2; break;
                case '-': result = val1 - val2; break;
                case '*': result = val1 * val2; break;
                case '/': result = val1 / val2; break;
                default:
                    printf("Invalid operator: %c\n", ch);
                    exit(1);
            }

            push(result);
        }
    }

    return pop();
}

int main() {
    char expr[MAX];

    printf("Enter a postfix expression (with spaces): ");
    fgets(expr, MAX, stdin);

    for (int i = 0; expr[i] != '\0'; i++) {
        if (expr[i] == '\n') {
            expr[i] = '\0';
            break;
        }
    }

    int result = evaluatePostfix(expr);
    printf("Result = %d\n", result);

    return 0;
}
