#include<stdio.h>

typedef struct {
    int top;
    char items[MAX];
} Stack;
void infixToPostfix(const char* expression, char* output){
    Stack* stack = createStack();
    int j = 0;

    for (int i = 0; expression[i] != '\0'; i++) {
        char charAtI = expression[i];

        if (isalnum(charAtI)) {
            output[j++] = charAtI;
        }
        else if (charAtI == '(') {
            push(stack, charAtI);
        }
     
        else if (charAtI == ')') {
            while (!isEmpty(stack) && peek(stack) != '(') {
                output[j++] = pop(stack);
            }
            pop(stack);
        }
        else {
            while (!isEmpty(stack) && precedence(peek(stack)) >= precedence(charAtI)) {
                output[j++] = pop(stack);
            }
            push(stack, charAtI);
        }
    }
}
int main(){
    int num;
    printf("Enter the size of array:");
    scanf("%d",&num);
    int stk[num];
}