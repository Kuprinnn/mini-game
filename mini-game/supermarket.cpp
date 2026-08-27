#include "supermarket.h"

int milk  = 0, milk_price  = 110;
int water = 0, water_price = 80;

void menu()
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
        cout << "1. milk =  " << milk_price << endl;
        cout << "2. water =  " << water_price << endl;
        cout << "3. continue" << endl;
        cout << "0. exit" << endl << endl;
        cout << "==========================" << endl << endl;

        cin >> *number;
        cout << endl;

        switch (*number)
        {
            case 0:
            {
                menu();
                break;
            }

            case 1:
            {
                cout << " +1 milk " << endl << endl;
                milk += 1;
                break;
            }
              
            case 2:
            {
                cout << " +1 water " << endl << endl;
                water += 1;
                break;
            }

            case 3:
            {
                if (water == 0)
                {
                    cout << "============BASKET========== " << endl << endl;
                    cout << "milk = " << milk << endl;
                    cout << "total: " << milk * milk_price + water * water_price << endl << endl;
                    cout << " ============================ " << endl << endl;
                }

                else if (milk == 0)
                {
                    cout << "============BASKET========== " << endl << endl;
                    cout << "water = " << water << endl;
                    cout << "total: " << milk * milk_price + water * water_price << endl;
                }

                else
                {
                    cout << "============BASKET========== " << endl << endl;
                    cout << "milk = " << milk << endl;
                    cout << "water = " << water << endl;
                    cout << "total: " << milk * milk_price + water * water_price << endl;
                }

                delete number;
                return;
            }
        }
    }
}