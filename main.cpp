// Some Learnings: Polymorphism, Function Overriding, inheritance, virtual functions, Upcasting
#include <iostream>
#include <iomanip>
#include "simpleCalculator.h"
#include "scientificCalculator.h"

using namespace std;

int main()
{
    simpleCalculator simpCalc;
    ScientificCalculator sciCalc;

    simpleCalculator* calcPtr = &simpCalc;

    ///scientific calc status
    bool sciActive = false;

    cout << "Calculator\n\n"
    << "You can change calculator mode using the 'change' keyword.\n\n"
    << "This app has 2 other special keywords, result and mem.\n"
    << "result stores the result of the previous calculation.\n"
    << "mem allows you to store and access a number.\n";

    calcPtr->welcome();
    cout << setprecision(15);

    string input = "";
    while (cin >> input && input != "exit")
    {
        ///switch mode
        if (input == "change")
        {
            if (sciActive)
            {
                calcPtr = &simpCalc;
                sciActive = false;
                cout << "\nSimple Calculator Activated";
            } else 
            {
                calcPtr = &sciCalc;
                sciActive = true;
                cout << "\nScientific Calculator Activated";
            }
        }
        calcPtr->parseOperation(input);
        calcPtr->welcome();
    }

    return 0;
}
