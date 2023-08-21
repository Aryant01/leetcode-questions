int calPoints(char **operations, int operationsSize) {
    int *stack = (int *)malloc(operationsSize * sizeof(int));
    int top = -1;
    int op1, op2;
    
    for (int i = 0; i < operationsSize; i++) {
        if (strcmp(operations[i], "+") == 0) {
            op1 = stack[top - 1];
            op2 = stack[top];
            
            stack[++top] = op1 + op2;
        }
        else if (strcmp(operations[i], "D") == 0) {
            stack[++top] = 2 * stack[top];
        }
        else if (strcmp(operations[i], "C") == 0) {
            top--;
        }
        else {
            stack[++top] = atoi(operations[i]);
        }
    }

    int sum = 0;

    for (int j = 0; j <= top; j++) {
        sum += stack[j];
    }

    free(stack);

    return sum;
}
