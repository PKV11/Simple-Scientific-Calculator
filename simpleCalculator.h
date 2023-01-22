#pragma once

class simpleCalculator
{
protected:
    double result; 
    double mem;    

public:
    simpleCalculator();           /// Constructor
    virtual ~simpleCalculator() = default;    /// Virtual destructor to prevent delete errors
    void add();             /// Functions to get user input and do operation
    void subtract();
    void multiply();
    void divide();
    void square();
    void sqrt();
    void setMem();          /// Functions to get and set mem
    void printMem() const;

    double parseInput(const std::string&) const;

    ///overloaded
    virtual void welcome() const;

    /// parse input and decide which member func to call
    virtual void parseOperation(const std::string&);

/// protected so derived class can access.

};


