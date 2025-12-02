// Calculator Program

#include <iostream>

int main(){

    char choice;
    int num1, num2;

    std::cout << "********** Calculator **********" << '\n';
start:
    std::cout << "Enter #1: ";
    std::cin >> num1;

    std::cout << "Enter #2: ";
    std::cin >> num2;

input_choice:
    std::cout << "\nEnter the corresponding operator :\n"
              << "Addition (+)\n"
              << "Subtraction (-)\n"
              << "Multiplication (*)\n"
              << "Division w/ Quotient (/)\n"
              << "Division w/ Remainder (%)\n";
    std::cin >> choice;

    switch(choice){
        case '+':
            std::cout << '\n' << num1 << " + " << num2 << " = " << num1 + num2;
            break;
        case '-':
            std::cout << '\n' << num1 << " - " << num2 << " = " << num1 - num2;
            break;
        case '*':
            std::cout << '\n' << num1 << " * " << num2 << " = " << num1 * num2;
            break;
        case '/':
            if (num2 == 0){
                std::cout << "\nCannot divide by zero! Enter again...\n";
                goto start;
            }
            std::cout << '\n' << num1 << " / " << num2 << " = " << num1 / num2;
            break;
        case '%':
            if (num2 == 0){
                std::cout << "\nCannot divide by zero! Enter again...\n";
                goto start;
            }
            std::cout << '\n' << num1 << " % " << num2 << " = " << num1 % num2;
            break;
        default:
            std::cout << "\nIllegal operator!!";
            goto input_choice;
    }

    std::cout << '\n' << "********************************";

    return 0;
}