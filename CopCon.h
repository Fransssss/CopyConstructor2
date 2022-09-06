// Fransiskus Agapa
// Declaration of CopCon class

#ifndef COPYCONSTRUCTOR2_COPCON_H
#define COPYCONSTRUCTOR2_COPCON_H


class CopCon
{
private:
    int* _data;
public:
    CopCon();                            // default constructor
    void SetData(const int& theData);
    int GetData() const;                 // get value
    CopCon(const CopCon& theData);       // copy constructor
    ~CopCon();                           // destructor
};

#endif //COPYCONSTRUCTOR2_COPCON_H
