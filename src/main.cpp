/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Kaylee Laughner
 */
#include "main.h"

class operations {
  public: void performOp( const string op, const double op1, const double op2 ) {
    double result;
    if (op == ("+") || op == "plus" || op == "pl") {
      result = add(op1, op2);
      print(result, op, op1, op2);
    }
    else if (op == "-" || op == "minus" || op == "min"){
      result = sub(op1, op2);
      print(result, op, op1, op2);
    }
    else if (op == "/" || op == "div" || op=="divide") {
      result = div(op1, op2);
      print(result, op, op1, op2);
    }
    else if (op =="*" || op=="mul" || op == "multiply") {
      result = mul(op1, op2);
      print(result, op, op1, op2);
    }
  }
  public: double add(const double op1, const double op2) {
    double result = op1+op2;
    return result;
  }
  public: double sub(const double op1, const double op2) {
    int result = op1-op2;
    return result;
  }
  public: double div(const double op1, const double op2) {
    double result = op1/op2;
    return result;
  }
  public: double mul(const double op1, const double op2) {
    double result = op1*op2;
    return result;
  }
  public: void print(const double result, const string op, const double op1, const double op2) {
    std::cout << "The result is: ";
    std::cout << op1 << op << op2 << "=" << result;
  }
};
int main() {
  std::cout << "Enter an operator followed by two operands separated by spaces: ";
  std::string op;
  double operand1;
  double operand2;
  std::cin >> op >> operand1 >> operand2;
  operations o;
  o.performOp(op, operand1, operand2);
}
