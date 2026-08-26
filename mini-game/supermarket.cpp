#include "supermarket.h"

int milk = 0;



void buy()
{
    list();
    cout << endl;

    int *number = new int;
    cin >> *number;

    switch (*number)
    {
    case 1:
        cout << "+1 milk";

        delete number;
        break;
    case 2:
        break;
    }



}

void list()
{
    cout << "1.milk" << endl;
    cout << "2.water" << endl;
}

// Начальное меню
void menu()
{
    cout << "SHOP" << endl << endl;
    cout << "1.buy" << endl;
    cout << "2.inventory" << endl;
}

void box()
{
    milk = +1;



}