#include "supermarket.h"

int milk  = 0, milk_price  = 110;
int water = 0, water_price = 80;

void menu()
{
    cout << "SHOP" << endl << endl;
    // Опция над которой работаю
    cout << "1. buy" << endl;
    // Скоро
    cout << "2. inventory" << endl;
    // Скоро
    cout << "3. history " << endl << endl;

    int* number = new int;
    cin >> *number;
    cout << endl;

    switch (*number)
    {
    case 1:
        buy();
        delete number;
        break;

    case 2:
        break;
    }
}

void buy()
{
    list();
    cout << endl;

    int *number = new int;
    

    while (true)
    {
        cin >> *number;
        cout << endl;

        switch (*number)
        {
        case 0:
            menu();
            break;

        case 1:
            cout << "+1 milk" << endl << endl;
            milk += 1;
            list();
            break;

        case 2:
            cout << "+1 water" << endl << endl;
            water += 1;
            list();
            break;

        case 3:
            if (water == 0)
            {
                cout << "your basket: " << endl;
                cout << "milk = " << milk << endl;
                cout << "total: " << milk * milk_price + water * water_price << endl;
            }
            else if (milk == 0)
            {
                cout << "your basket: " << endl;
                cout << "water = " << water << endl;
                cout << "total: " << milk * milk_price + water * water_price << endl;
            }
            else
            {
                cout << "your basket: " << endl;
                cout << "milk = " << milk << endl;
                cout << "water = " << water << endl;
                cout << "total: " << milk * milk_price + water * water_price << endl;
                //delete number;
                //oplata();
            }
            break;

        default:
            break;
        }
    }
}

void list()
{
    cout << "1. milk =  " << milk_price << endl;
    cout << "2. water =  " << water_price << endl;
    cout << "3. continue" << endl;
    cout << "0. exit" << endl;
}
// Завтра переделаю 
class products
{
public:
    int price;
    int count;


};