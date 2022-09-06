// Fransiskus Agapa
// Implemenrtation of CopCon class

#include "CopCon.h"
#include <iostream>

using std::cout;
using std::endl;

CopCon::CopCon()
{
    cout << "= Default Constructor Called =" << endl;
    _data = new int;                             // allocate nwe memory
    *_data = -1;                                 // set default value
}

void CopCon::SetData(const int& theData)
{
    cout << "= Setter Called =" << endl;
    _data = new int;                           // allocate new nemory
    *_data = theData;
}

int CopCon::GetData() const
{
    cout << "= Getter Called =" << endl;
    return *_data;                               // return data member's value
}

CopCon::CopCon(const CopCon &theData)
{
    cout << "= Copy Constructor Called =" << endl;
    _data = new int;                             // allocate new memory
    *_data = *theData._data;                     // assign a value
}

CopCon::~CopCon()
{
    cout << "= Destructor Called =" << endl;
    delete _data;                               // deallocate new memory
}
