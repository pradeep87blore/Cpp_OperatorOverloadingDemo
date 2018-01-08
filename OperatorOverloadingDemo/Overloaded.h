#pragma once
/* This class shall be used to demonstrate operator overloading*/
class Overloaded
{
private:
    int m_iValue;
public:
    Overloaded(int iValue = 10); // Default constructor

    ~Overloaded();

    int GetValue();

    void SetValue(int iValue);

    void PrintValue();
};

