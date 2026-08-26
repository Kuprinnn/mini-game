#include "supermarket.h"

#include <iostream>
#include <string>

using namespace std;


int main() 
{
    menu();

    int* number = new int;
    cin >> *number;
    

    switch (*number)
    {
    case 1:
        buy();
        delete number;
        break;
    case 2:
        break;
    }

    return 0;
}
