#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main(){
    int num1, num2, result;
    char opt;
    printf("Perform Full Mathematical Operation Here:\t");
    scanf("%d %c %d", &num1, &opt, &num2);

    fflush(stdin);
    if (opt == '+'){
        result = num1 + num2;
        printf("Result is %d\n", result);
    }
    else if (opt == '-'){
        result = num1 - num2;
        printf("Result is %d\n", result);
    }
    else if (opt == '*'){
        result = num1 * num2;
        printf("Result is %d\n", result);
    }
    else if (opt == '/'){
        result = num1 / num2;
        printf("Result is %d\n", result);
    }
    else{
        printf("Invalid Statement\n");
    }
}