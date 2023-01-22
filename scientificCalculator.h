#pragma once

#include "simpleCalculator.h"

class ScientificCalculator : public simpleCalculator
{
public:
    ScientificCalculator();       /// Constructor
    virtual ~ScientificCalculator() = default; /// Virtual destructor 
    virtual void welcome() const override;       
    virtual void parseOperation(const std::string& input) override; 
    void sin();
    void cos();
    void tan();
    void ln();
    void log();
    void abs();
    void pow();
};

