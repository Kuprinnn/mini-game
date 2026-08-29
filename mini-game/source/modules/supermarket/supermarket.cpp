#include "supermarket.h"

void menu()
{
    cout << "===========SHOP===========" << endl;
    cout << "1. buy" << endl;
    cout << "2. inventory" << endl;
    cout << "3. history " << endl;
    cout << "==========================" << endl;
    cout << "enter the option: ";

    int* number = new int;

    cin >> *number, system("cls");

    switch (*number)
    {
    case 1:
    {
        buy();
        delete number;
    }break;
    }
}

void buy()
{
    cout << "============BASKET==========" << endl;

    for (Product myProduct : products)
    {
        cout << myProduct.id << ".";
        cout << myProduct.name << " - ";
        cout << myProduct.price << " p. " << endl;
    }

    cout << "=============================" << endl;


    int id;
    cout << "enter the product ID: ";
    cin >> id, system("cls");

    for (Product myProduct : products)
    {
        if (myProduct.id == id)
        {
            cout << myProduct.id << ".";
            cout << myProduct.name << " - ";
            cout << myProduct.price << " p. " << endl;

            cout << "enter the quantity of the product: ";
            cin >> myProduct.count, system("cls");
            menu();
            return;
        }
    }

    cout << "ERROR, there is no such ID." << endl;
}