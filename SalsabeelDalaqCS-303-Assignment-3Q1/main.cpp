#include <iostream>
#include "function.h"
#include <stack>

int main() {
    std::string infixExp;
    std::cout << "Enter infix expression: ";
    std::getline(std::cin, infixExp);

    if (!isBalanced(infixExp)) {
        std::cout << "Invalid Expression" << std::endl;
    } else {
        std::string postfixExp = infixToPostfix(infixExp);
        std::cout << "Postfix expression: " << postfixExp << std::endl;
    }

    return 0;
}
