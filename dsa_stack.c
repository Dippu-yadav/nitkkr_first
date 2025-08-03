#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_SIZE 1000

typedef struct {
    int top;
    int items[MAX_SIZE];
} Stack;

void initStack(Stack* s) {
    s->top = -1;
}

int isEmpty(Stack* s) {
    return s->top == -1;
}

void push(Stack* s, int item) {
    if (s->top < MAX_SIZE - 1) {
        s->items[++(s->top)] = item;
    }
}

int pop(Stack* s) {
    if (!isEmpty(s)) {
        return s->items[(s->top)--];
    }
    return 0; 
}

void addLargeNumbers(char* num1, char* num2) {
    Stack stack1, stack2, resultStack;
    initStack(&stack1);
    initStack(&stack2);
    initStack(&resultStack);

    for (int i = 0; i < strlen(num1); i++) {
        push(&stack1, num1[i] - '0'); 
    }

    for (int i = 0; i < strlen(num2); i++) {
        push(&stack2, num2[i] - '0'); 
    }

    int carry = 0;

    while (!isEmpty(&stack1) || !isEmpty(&stack2) || carry) {
        int sum = carry;

        if (!isEmpty(&stack1)) {
            sum += pop(&stack1);
        }
        if (!isEmpty(&stack2)) {
            sum += pop(&stack2);
        }

        carry = sum / 10;
        push(&resultStack, sum % 10);
    }

    printf("Sum: ");
    while (!isEmpty(&resultStack)) {
        printf("%d", pop(&resultStack));
    }
    printf("\n");
}

int main() {
    char num1[MAX_SIZE], num2[MAX_SIZE];
    printf("Enter the first large number: ");
    scanf("%s", num1);
    printf("Enter the second large number: ");
    scanf("%s", num2);

    addLargeNumbers(num1, num2);
    return 0;
}