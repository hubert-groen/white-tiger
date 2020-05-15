#include <iostream>
#include "calculator.h" //we include class Operation

using namespace std;

int main()
{
    for(;;)
//this loop will enable user to use calculator many times in one run
    {
        Operation o1;
        o1.input_numbers();
        o1.show_calculator();
        o1.choose_operation();
        o1.display_outcome();
//activating functions in the class
    }

    return 0;
}
