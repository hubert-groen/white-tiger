#include <iostream>

using namespace std;

class Operation
{
    public:
//we need to set public access to operate on this data
//and let user change x and y at choice
    float x, y;
//variables for two numbers
    int number_of_operation;
//int for operation of user's choice

    void input_numbers();
    void show_calculator();
    void choose_operation();
    void display_outcome();
//our function in the class (methods)
};
