#include "supermarket.h"


void menu()
{
    cout << "===========SHOP===========" << endl;
    cout << "1. buy" << endl;
    cout << "2. inventory" << endl;
    cout << "3. history " << endl;
    cout << "0. exit" << endl;
    cout << "==========================" << endl;
    cout << "enter the option: ";

    int* number = new int;

    cin >> *number, system("cls");

    switch (*number)
    {
        case 0:
        {
            return;
        }break;

        case 1:
        {
            buy();
            delete number;
        }break;

        case 2:
        {
            get_inventory();
            delete number;
        }break;

        case 3:
        {
            cout << "there is no function..." << endl << endl;
            menu();
        }break;

        default:
        {
            cout << "Error, enter an option from 1 to 3." << endl << endl;
            menu();
        }break;
    }
}

void buy()
{
    cout << "==========BASKET==========" << endl;
    for (Product myProduct : products)
    {
        cout << myProduct.id << ". ";
        cout << myProduct.name << " - ";
        cout << myProduct.price << " p. " << endl;
    }

    cout << "0. exit" << endl;
    cout << "==========================" << endl;


    int id;
    cout << "enter the product ID: ";
    cin >> id, system("cls");

    for (Product myProduct : products)
    {
        // Подставляет значения из ветора Products
        if (myProduct.id == id)
        {
            cout << myProduct.id << ". ";
            cout << myProduct.name << " - ";
            cout << myProduct.price << " p. " << endl;

            cout << "enter the quantity of the product: ";
            cin >> myProduct.count, system("cls");
            
            cout << myProduct.name << " - ";
            cout << "product: " << myProduct.count << " - ";
            cout << myProduct.price * myProduct.count << " p. " << endl;
            

            int next;
            cout << "1. pay" << endl;
            cout << "0. exit" << endl;
            cout << "enter the option: ";
            cin >> next, system("cls");

            switch (next)
            {
                case 1:
                {
                    cout << "the payment was successful :>" << endl << endl;

                    for (Inventory& item : list)
                    {
                        if (item.id == myProduct.id)
                        {
                            item.count += myProduct.count;
                            menu();
                            return;
                        }

                    }
                   
                    Inventory inventory;
                    if (inventory.id != myProduct.id)
                    {
                        inventory.id = myProduct.id;
                        inventory.name = myProduct.name;
                        inventory.price = myProduct.price;
                        inventory.count = myProduct.count;
                    }

                    list.push_back(inventory);

                    menu();
                    return;
                }

                case 0:
                {
                    buy();
                    //return;
                }break;
            }
        }

        //else
        //{
        //    menu();
        //    //return;
        //}
    }

    cout << "ERROR, there is no such ID." << endl;
}

void get_inventory()
{
    cout << "============INVENTORY==========" << endl;

    for (Inventory& my : list)
    {
        cout << my.id << ".";
        cout << my.name << " - ";
        cout << my.count << endl;
    }
    cout << "===============================" << endl;

    int enter;
    cout << "click enter to return: ";
    cin >> enter, system("cls");

    menu();
}