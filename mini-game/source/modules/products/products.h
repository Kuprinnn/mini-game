#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Характеристики товаров
class Product
{
public:
    int id;
    string name;
    double price;
    double count;
    //double total(double price, double count);
};

extern vector <Product> products;