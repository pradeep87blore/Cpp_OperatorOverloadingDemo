#include "Overloaded.h"

#include <string>
#include <iostream>

using namespace std;

// Default constructor
Overloaded::Overloaded(int iValue) : m_iValue(iValue)
{

}


Overloaded::~Overloaded()
{
}


int Overloaded::GetValue() 
{ 
    return m_iValue; 
}

void Overloaded::SetValue(int iValue)
{
    m_iValue = iValue;
}

void Overloaded::PrintValue()
{
    cout << GetValue() << endl;
}