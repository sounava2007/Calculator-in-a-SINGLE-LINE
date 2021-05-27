#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main(){
    float num1, num2, result;
    char opt;
    printf("Perform Full Mathematical Operation Here:\t");
    scanf("%f %c %f", &num1, &opt, &num2);

    fflush(stdin);
    if (opt == '+'){
        result = num1 + num2;
        printf("Result is %.2f\n", result);
    }
    else if (opt == '-'){
        result = num1 - num2;
        printf("Result is %.2f\n", result);
    }
    else if (opt == '*'){
        result = num1 * num2;
        printf("Result is %.2f\n", result);
    }
    else if (opt == '/'){
        result = num1 / num2;
        printf("Result is %.2f\n", result);
    }
    else{
        printf("Invalid Statement\n");
    }
}
