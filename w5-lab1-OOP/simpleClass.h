#pragma once

class SimpleClass
{
    private:
        int privateInteger;
    public:
        SimpleClass();
        SimpleClass(int iValue);
        void setInteger(int iNewValue);
        int getInteger();
};