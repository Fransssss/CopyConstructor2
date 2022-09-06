// Fransiskus Agapa
// 9/6/22
// Practices make improvement - Have Fun !!!
// :)

// ==============
// learn about copy constructor in a class work
// ==============

#include <iostream>
#include "CopCon.h"

using std::cout;
using std::endl;
using std::cin;
using std::string;

int main()
{
    string choice;                                                        // user choice
    cout << endl << "== Copy Constructor Learning ==" << endl;
    cout << "1. Default value" << endl;
    cout << "2. User-input value (copy constr called)" << endl;
    cout << "e. Exit" << endl;
    cout << "choice: ";
    cin >> choice;

    while(choice != "e" and choice != "E")
    {
        if(choice == "1")
        {
            cout << endl;
            CopCon newObj;                                                //  class object
            cout << newObj.GetData() << endl;
        }
        else if(choice == "2")
        {
            cout << endl;
            int userInput;                                               // digit from user input
            CopCon stObj;                                                // first class object
            cout << "Input a number: ";
            cin >> userInput;
            cout << endl;
            stObj.SetData(userInput);
            CopCon ndObj = stObj;                                               // second claass object - copy constructor called
            cout << endl << "Value 1st class object: " << endl;
            cout << stObj.GetData() << endl;
            cout << "Value 2nd class object: " << endl;
            cout << ndObj.GetData() << endl;
        }
        else
        {
            cout << endl << "[ Invalid choice ]" << endl;
        }

        cout << endl << "== Copy Constructor Learning ==" << endl;
        cout << "1. Default value" << endl;
        cout << "2. User-input value (copy constr called)" << endl;
        cout << "e. Exit" << endl;
        cout << "choice: ";
        cin >> choice;

    }

    if(choice == "e" or choice == "E")
    {
        cout << endl << "== Exit Program ==" << endl;
    }

    return 0;
}
