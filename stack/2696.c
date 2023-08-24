int minLength(char * s){
    int top = -1;
    char* stack = (char*)malloc(strlen(s) * sizeof(char) + 1);

    for (int i=0; i < strlen(s); i++) {
        if (top == -1) {
            stack[++top] = s[i];            
        }
        else {
            if (stack[top] == 'A' && s[i] == 'B' ||
            stack[top] == 'C' && s[i] == 'D')
                top--;
            else 
                stack[++top] = s[i];
        }
    }

    stack[++top] = '\0';
    return strlen(stack);
}