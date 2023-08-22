char * removeDuplicates(char * s){
    int top = -1;
    char* stack = (char*)malloc(strlen(s) * sizeof(char));

    for (int i=0; i < strlen(s); i++) {
        if (top != -1) {
            if (s[i] != stack[top]) stack[++top] = s[i];
            else top--;
        }
        else stack[++top] = s[i];
    } 
    stack[++top] = '\0';
    printf("size of stack = %d", strlen(stack));
    return stack;
}