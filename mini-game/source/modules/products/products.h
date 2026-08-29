//#ifndef PRODUCTS_H
//#define PRODUCTS_H

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Product
{
public:
    int id;
    string name;
    double price;
    int count;
};

extern vector <Product> products;

//#endif