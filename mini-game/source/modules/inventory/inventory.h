#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Характеристики купленных товаров
class Inventory
{
public:
    int id;
    string name;
    double price;
    double count;

    // Подсчитывает общую сумму
    void total();
};

extern vector <Inventory> list;