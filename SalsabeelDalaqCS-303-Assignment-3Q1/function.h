#ifndef FUNCTION_H
#define FUNCTION_H

#include <string>
// Function to check if a character is an operand (numeric digit)
bool isOperand(char ch);
// Function to check if a character is an operator (+, -, *, /, %)
bool isOperator(char ch);
// Function to determine the precedence of an operator
int precedence(char op);
// Function to convert an infix expression to postfix
std::string infixToPostfix(std::string exp);
// Function to check if parentheses in an expression are balanced
bool isBalanced(std::string exp);

#endif  
