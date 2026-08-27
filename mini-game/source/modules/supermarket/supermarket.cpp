#include "supermarket.h"

using namespace std;

// ==========================
// ==========Товары==========
Products milk("milk", 100, 0);
Products water("water", 80, 0);
//===========================

void start()
{
    cout << "===========SHOP===========" << endl << endl;
    cout << "1. buy" << endl;
    cout << "2. inventory" << endl;
    cout << "3. history " << endl << endl;
    cout << "==========================" << endl << endl;

    int* number = new int;

    cin >> *number;
    cout << endl;

    switch (*number)
    {
    case 1:
        buy();
        delete number;
        break;
    }
}

void buy()
{
    cout << endl;

    int *number = new int;
    
    while (true)
    {
        cout << "===========BUY============" << endl << endl;
        cout << "1. " << milk.name << " = " << milk.price << "p. " << endl;
        cout << "2. " << water.name << " = " << water.price  << "p." << endl;
        cout << "3.  continue ->" << endl;
        cout << "0.  <- back " << endl << endl;
        cout << "==========================" << endl << endl;

        cin >> *number;
        cout << endl;

        switch (*number)
        {
            case 0:
            {
                start();
                break;
                return;
            }

            case 1:
            {
                cout << " +1 milk " << endl << endl;
                milk.count += 1;
                break;
            }
              
            case 2:
            {
                cout << " +1 water " << endl << endl;
                water.count += 1;
                break;
            }

            case 3:
            {
                if (water.count == 0)
                {
                    cout << "============BASKET==========" << endl << endl;
                    cout << milk.name << " = " << milk.count << endl;
                    cout << "total: " << milk.count * milk.price + water.count * water.price << "p." << endl << endl;
                    cout << "=============================" << endl << endl;


                }

                else if (milk.count == 0)
                {
                    cout << "============BASKET==========" << endl << endl;
                    cout << water.name << " = " << water.count << endl;
                    cout << "total: " << milk.count * milk.price + water.count * water.price << "p." << endl << endl;
                    cout << "============================" << endl << endl;
                }

                else
                {
                    cout << "============BASKET==========" << endl << endl;
                    cout << milk.name << " = " << milk.count << endl;
                    cout << water.name << " = " << water.count << endl;
                    cout << "total: " << milk.count * milk.price + water.count * water.price << "p." << endl << endl;
                    cout << "=============================" << endl << endl;
                }

                delete number;
                return;
            }

            default:
            {
                cout << "ERROR! NUMBER FROM 0-4" << endl << endl;
                break;
            }
        }
    }
}