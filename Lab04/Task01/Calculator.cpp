#include "Calculator.h"

int Calculator::getValue() {
    return field;
}
void Calculator::setValue(int val) {
    field = val;
}
void Calculator::add(int Value) {
    field += Value;
}
void Calculator::subtract(int Value) {
    field -= Value;
}
void Calculator::multiply(int Value) {
    field *= Value;
}
void Calculator::divideBy(int Value) {
    field /= Value;
}
void Calculator::clear() {
    field = 0;
}
string Calculator::display() {
    return "Calculator display 10";
}

