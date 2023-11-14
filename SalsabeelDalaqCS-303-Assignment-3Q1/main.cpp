#include <iostream>
#include "function.h"
#include <stack>

int main() {
    // Prompt the user to enter an infix expression
    std::string infixExp;
    std::cout << "Enter infix expression: ";
    std::getline(std::cin, infixExp);
    // Check if the parentheses in the infix expression are balanced
    if (!isBalanced(infixExp)) {
        std::cout << "Invalid Expression" << std::endl;
    } else {
        // Convert the balanced infix expression to postfix
        std::string postfixExp = infixToPostfix(infixExp);
        
        // Display the resulting postfix expression
        std::cout << "Postfix expression: " << postfixExp << std::endl;
    }

    return 0;
}
