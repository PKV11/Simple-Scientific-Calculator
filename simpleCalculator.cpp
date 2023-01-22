#include <iostream>
#include "simpleCalculator.h"
#include <cmath>
#include <string>
#include <array>

using namespace std;

simpleCalculator::simpleCalculator() : result(0.0), mem(0.0) {}

void simpleCalculator::add()
{
    string a, b;
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;
    result = parseInput(a) + parseInput(b);
    cout << "The result is " << result;
}
void simpleCalculator::subtract()
{
    string a, b;
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;
    result = parseInput(a) - parseInput(b);
    cout << "The result is " << result;
}
void simpleCalculator::multiply()
{
    string a, b;
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;
    result = parseInput(a) * parseInput(b);
    cout << "The result is " << result;
}
void simpleCalculator::divide()
{
    string a, b;
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;
    result = parseInput(a) / parseInput(b);
    cout << "The result is " << result;
}
void simpleCalculator::square()
{
    std::string a;
    std::cout << "Enter a number: ";
    std::cin >> a;
    double parsedA = parseInput(a);
    result = parsedA * parsedA;
    std::cout << "The result is " << result;
}
void simpleCalculator::sqrt()
{
    string a;
    cout << "Enter a number: ";
    cin >> a;
    result = std::sqrt(parseInput(a));
    std::cout << "The result is " << result;
}
void simpleCalculator::setMem()
{
    std::string a;
    std::cout << "Enter a number: ";
    std::cin >> a;
    mem = parseInput(a);
    cout << "The mem is " << mem;
}
void simpleCalculator::printMem() const
{
    cout << "The mem is " << mem;
}
/// subs in number value when strings result or mem are entered
double simpleCalculator::parseInput(const string& input) const
{
    if (input == "result")
    {
        return result;
    }
    else if (input == "mem")
    {
        return mem;
    }
    else
    {
        return stod(input);
    }
}
void simpleCalculator::welcome() const
{
    cout << "\n\nEnter an operation (+, -, /, *, sqrt, square, change, setmem, printmem) or exit\n";
}
/// parse input and decide which member func to call
void simpleCalculator::parseOperation(const string& input)
{
    if (input == "+" || input == "add" || input == "addition" || input == "sum")
    {
        add();
    }
    else if (input == "-" || input == "sub" || input == "subtraction" || input == "minus")
    {
        subtract();
    }
    else if (input == "/" || input == "divide" || input == "div")
    {
        divide();
    }
    else if (input == "*" || input == "mul" || input == "multiply" || input == "times")
    {
        multiply();
    }
    else if (input == "sqrt")
    {
        sqrt();
    }
    else if (input == "square")
    {
        square();
    }
    else if (input == "setmem")
    {
        setMem();
    }
    else if (input == "printmem")
    {
        printMem();
    }
}
