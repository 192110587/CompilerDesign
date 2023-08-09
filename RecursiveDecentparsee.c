#include <stdio.h>
#include <ctype.h>
char input[100];
int i= 0;
int E();
int EP();
int T();
int TP();
int F();
void consume() {
    i++;
}
int isValid(char c) {
    return isalpha(c) || isdigit(c) || c == '(' || c == ')' || c == '+' || c == '*' || c == '\0';
}

// Function to parse E
int E() {
    if (T() && EP()) {
        return 1;
    }
    return 0;
}
int EP() {
    if (input[i] == '+') {
        consume();
        if (T() && EP()) {
            return 1;
        }
        return 0;
    }
    return 1;
}
int T() {
    if (F() && TP()) {
        return 1;
    }
    return 0;
}
int TP() {
    if (input[i] == '*') {
        consume();
        if (F() && TP()) {
            return 1;
        }
        return 0;
    }
    return 1;
}
int F() {
    if (input[i] == '(') {
        consume();
        if (E() && input[i] == ')') {
            consume();
            return 1;
        }
        return 0;
    } else if (isalpha(input[i])) {
        consume();
        return 1;
    }
    return 0;
}

int main() {
    printf("Enter an expression: ");
    scanf("%s", input);

    int isValidInput = 1;
    while (input[i] != '\0') {
        if (!isValid(input[i])) {
            isValidInput = 0;
            break;
        }
        i++;
    }

    if (isValidInput && E() && input[i] == '\0') {
        printf("Parsing successful: Valid expression!\n");
    } else {
        printf("Parsing failed: Invalid expression!\n");
    }

    return 0;
}
