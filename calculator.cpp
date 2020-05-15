#include <iostream>
#include <conio.h> //to user getch()
#include <stdio.h> //to use exit()
#include <cstdlib> //to use system ("cls")
#include "calculator.h" //we include class Operation

using namespace std;

//below are the methods of class Operation
//we have just one class, but for program safety
//we will specifically connect it: name_of_class::method()

void Operation::input_numbers()
{
    cout << "Input first number: ";
    cin >> x;
    cout << "Input second number: ";
    cin >> y;
}
//user chooses his number to make calculations

void Operation::show_calculator()
{
    cout << endl;
    cout << "CHOOSE OPERATION:" << endl;
    cout << "--------------" << endl;
    cout << "1. ADDITION" << endl;
    cout << "2. SUBTRACTION" << endl;
    cout << "3. MULTIPLICATION" << endl;
    cout << "4. DIVISION" << endl;
    cout << "5. FINISH" << endl;
    cout << endl;
}
//displaying menu of calculator

void Operation::choose_operation()
{
    number_of_operation = getch();
}
//getting the operation choice from user

void Operation::display_outcome()
{
        switch(number_of_operation) //using switch command to manage the choices
    {
        case '1': cout << "Sum = " << x+y;   break;
        case '2': cout << "Difference = " << x-y;   break;
        case '3': cout << "Product = " << x*y;  break;
        case '4':
        {
            if (y!=0) cout << "Quotient = " << x/y;
            else cout << "Diving over zero is not possible in set of real numbers." << endl;
        }
        //we cannot divide by zero, code protection
        break;
        case '5':
        {
           system("cls");
           cout << "GOODBYE!" << endl;
           exit(0);
        }
        //option 5
        //cleans the console, displays the text
        //and finishes program with exit(0)
        break;
        default: cout << "Incorrect choice of operation.";
        //case if uses chooses number different that 1-4
    }

    getchar(); getchar();
    system("cls");
    //we wait for any button
    //then the console is cleaned
    //and calculator runs again due to for(;;) loop in main.cpp
}
