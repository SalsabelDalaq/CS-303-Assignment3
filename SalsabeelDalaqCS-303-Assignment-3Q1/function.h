#ifndef FUNCTION_H
#define FUNCTION_H

#include <string>

bool isOperand(char ch);
bool isOperator(char ch);
int precedence(char op);
std::string infixToPostfix(std::string exp);
bool isBalanced(std::string exp);

#endif  
