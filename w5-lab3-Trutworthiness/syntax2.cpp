#include <iostream>

using namespace std;

float add(float x, float y)
{
    return x + y;

}

float multiply(float x, float y)
{

    return x * y;

}

 

float substract(float x, float y)
{

    return x - y;

}

 

float divide(float x, float y)
{
    if (y != 0)
        return x / y;
    else{
        cerr << "DIVISION BY ZERO! THE RESULT IS INCORRECT!" << endl;
        return NULL;
    }
}

 

float min (float x, float y)
{
    if (x > y)
      return y;
    else
        return x;
}

 

float max (float x, float y)
{
    if (x > y)
      return x;
    else
      return y;
}

int main()
{
    float a, b, r;
    char op;
    do{
       cout<< "Enter 2 numbers and the operation character: ";
       cin >> a >> op >> b;
       switch (op)
       {

           case '+': 
                r = add(a,b);
                break;

           case '*': 
                r = multiply(a,b);
                break;

           case '-': 
                r = substract(a,b);
                break;

           case 'M': 
                r = max(a,b);
                break;

           case 'm': 
                r = min(a,b);
                break;

           case '/': 
                r = divide(a,b);
                break;

           case 'q':
                break;

           default: 
                op='?';

       }

       if (op=='?')
          cout << "undefined operation\n";
       else if (op=='q')
          cout << "Byee\n";
       else
          cout << a << op << b << " = " << r << "\n";
    }
    while (op != 'q');

    return 0;

}