#include <iostream>
#include <cmath>
int main(void){
    int i;
    int j;
    char op;
    std::cout << "Enter first number: ";
    std::cin >> i;
    std::cout << "Enter second number: ";
    std::cin >> j;
    std::cout << "Enter operation: ";
    std::cin >> op;

    switch(op) {
        case '+':
            std::cout << i << " + " << j << " = " << i+j << std::endl;
            break;
        case '-':
            std::cout << i << " - " << j << " = " << i-j << std::endl;
            break;
        case '*':
            std::cout << i << " * " << j << " = " << i*j << std::endl;
            break;
        case '/':
            std::cout << i << " / " << j << " = " << i/j << std::endl;
            break;
        case '^':
            std::cout << i << " ^ " << j << " = " << pow(i,j) << std::endl;
            break;
    }
    return 0;

}