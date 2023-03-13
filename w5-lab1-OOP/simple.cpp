#include "simpleClass.h"

SimpleClass::SimpleClass(){
    privateInteger = 0;
}
SimpleClass::SimpleClass(int iValue){
    privateInteger = iValue;
}
void SimpleClass::setInteger(int iNewValue){
    privateInteger = iNewValue;
}
int SimpleClass::getInteger(){
    return privateInteger;
}