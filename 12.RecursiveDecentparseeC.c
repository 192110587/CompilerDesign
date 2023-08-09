#include <stdio.h>
#include <ctype.h>
#include <string.h>

char input[100];
int i, l;

int E(), EP(), T(), TP(), F();

int main() {
    printf("Recursive descent parser\n");
    printf("Grammar is: E->TE'\nE'->+TE'|@\nT->FT'\nT'->*FT'|@\nF->(E)|id\n");
    printf("Enter string to be checked: ");
    
    fgets(input, sizeof(input), stdin);
    l = strlen(input);
    i = 0;
    
    if (E() && i == l - 1) {
        printf("String is accepted\n");
    } else {
        printf("Not accepted\n");
    }

    return 0;
}

int E() {
    if (T() && EP()) {
        return 1;
    }
    return 0;
}

int EP() {
    if (input[i] == '+') {
        i++;
        if (T() && EP()) {
            return 1;
        } else {
            return 0;
        }
    }
    return 1; // E' can derive e (empty string)
}

int T() {
    if (F() && TP()) {
        return 1;
    }
    return 0;
}

int TP() {
    if (input[i] == '*') {
        i++;
        if (F() && TP()) {
            return 1;
        } else {
            return 0;
        }
    }
    return 1; // T' can derive e (empty string)
}

int F() {
    if (input[i] == '(') {
        i++;
        if (E() && input[i] == ')') {
            i++;
            return 1;
        } else {
            return 0;
        }
    } else if ((input[i] >= 'a' && input[i] <= 'z') || (input[i] >= 'A' && input[i] <= 'Z')) {
        i++;
        return 1;
    }
    return 0;
}
