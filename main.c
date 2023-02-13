#include <stdio.h>
#include <stdlib.h>
#include "header\mahesya_dev.h"
#include "header\AryaKusumah_dev.h"
#include "header\adinda_dev.h"
#include "header\Faisal_dev.h"
#include "header\AhmadFauzy_dev.h"
#include "header\syira_dev.h"
#include <ctype.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
double perform_operation(double num1, double num2, char operator) {
    switch (operator) {
        case '^':
            return calculatepangkat(num1, num2);
        case '*':
            return perkalian(num1,num2);
        case '/':
            return prosesPembagian(num1,num2);
        case '+':
            return proses(num1,num2);
        case '-':
            return pengurangan(num1,num2);
        case 'v':
        	return calculateRoot(num2,num1);
        case 'c':
        	return calculateArscin(num2);
        default:
            printf("Invalid operator: %c", operator);
            exit(1);
    }
}

int get_priority(char operator) {
    switch (operator) {
        case '^':
        case'v':
            return 3;
        case '*':
        case '/':
            return 2;
        case '+':
        case '-':
            return 1;
        default:
            printf("Invalid operator: %c", operator);
            exit(1);
    }
}
int main(int argc, char *argv[]) {
    char inputan[100];
    printf("Masukkan inputan: ");
    scanf("%s", inputan);

    double stack_num[100];
    int stack_num_top = -1;
    char stack_op[100];
    int stack_op_top = -1;
    int i;
    for (i = 0; inputan[i]; i++) {
        if (isdigit(inputan[i])) {
            char number[100];
            int number_top = 0;
            while (isdigit(inputan[i]) || inputan[i] == '.') {
                number[number_top++] = inputan[i++];
            }
            number[number_top] = '\0';
            stack_num[++stack_num_top] = strtod(number, NULL);
            i--;
        } else if (inputan[i] == '(') {
            stack_op[++stack_op_top] = inputan[i];
        } else if (inputan[i] == ')') {
            while (stack_op[stack_op_top] != '(') {
                double num2 = stack_num[stack_num_top--];
                double num1 = stack_num[stack_num_top--];
                char operator = stack_op[stack_op_top--];
                stack_num[++stack_num_top] = perform_operation(num1, num2, operator);
            }
            stack_op_top--;
        } else {
            while (stack_op_top >= 0 && get_priority(stack_op[stack_op_top]) >= get_priority(inputan[i])) {
                double num2 = stack_num[stack_num_top--];
                double num1 = stack_num[stack_num_top--];
                char operator = stack_op[stack_op_top--];
                stack_num[++stack_num_top] = perform_operation(num1, num2, operator);
            }
            stack_op[++stack_op_top] = inputan[i];
}
}
while (stack_op_top >= 0) {
    double num2 = stack_num[stack_num_top--];
    double num1 = stack_num[stack_num_top--];
    char operator = stack_op[stack_op_top--];
    stack_num[++stack_num_top] = perform_operation(num1, num2, operator);
}

printf("Result: %g\n", stack_num[0]);
return 0;
}


