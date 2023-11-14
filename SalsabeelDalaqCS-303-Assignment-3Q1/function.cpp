#include "function.h"
#include <stack>

bool isOperand(char ch) {
    return (ch >= '0' && ch <= '9');
}

bool isOperator(char ch) {
    return (ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '%');
}

int precedence(char op) {
    if (op == '+' || op == '-')
        return 1;
    else if (op == '*' || op == '/' || op == '%')
        return 2;
    else
        return 0;
}

std::string infixToPostfix(std::string exp) {
    std::stack<char> st;
    std::string postfixExp = "";
    for (int i = 0; i < exp.length(); i++) {
        char ch = exp[i];
        if (isOperand(ch)) {
            postfixExp += ch;
        } else if (isOperator(ch)) {
            while (!st.empty() && st.top() != '(' && precedence(ch) <= precedence(st.top())) {
                postfixExp += st.top();
                st.pop();
            }
            st.push(ch);
        } else if (ch == '(') {
            st.push(ch);
        } else if (ch == ')') {
            while (!st.empty() && st.top() != '(') {
                postfixExp += st.top();
                st.pop();
            }
            if (!st.empty() && st.top() == '(') {
                st.pop();
            } else {
                return "Invalid Expression";
            }
        }
    }
    while (!st.empty()) {
        if (st.top() == '(' || st.top() == ')') {
            return "Invalid Expression";
        }
        postfixExp += st.top();
        st.pop();
    }
    return postfixExp;
}

bool isBalanced(std::string exp) {
    std::stack<char> st;
    for (int i = 0; i < exp.length(); i++) {
        char ch = exp[i];
        if (ch == '{' || ch == '[' || ch == '(') {
            st.push(ch);
        } else if (ch == '}' || ch == ']' || ch == ')') {
            if (st.empty()) {
                return false;
            }
            if ((ch == '}' && st.top() == '{') || (ch == ']' && st.top() == '[') || (ch == ')' && st.top() == '(')) {
                st.pop();
            } else {
                return false;
            }
        }
    }
    return st.empty();
}
