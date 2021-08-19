#include <iostream>
#include "headers/cal.h"

using namespace std;

int main()
{
    float a, b, r;
    char op;

    for(;;)
    {
        cout << "Input a: ";
        cin >> a;
        cout << "Input operator(+,-,*,/): ";
        cin >> op;
        cout << "Input b: ";
        cin >> b;

        switch(op)
        {
            case '+':
                r = add(a,b);
                break;
            case '-':
                r = sub(a,b);
                break;
            case '*':
                r = mul(a,b);
                break;
            case '/':
                r = divide(a,b);
                break;
            default: 
            	r = -1;
            	cout << "Error, invalid operator" << endl;
        }

        cout << a << " " << op << " " << b << " = " << r << endl;
        cout << "Continue? [y/n]: ";
        cin >> op;
        if(op == 'y')
        {
            ;
        }
        else
            return 0;
    }
}
