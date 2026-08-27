#ifndef PRODUCTS_H
#define PRODUCTS_H

#include <iostream>
#include <string>

using namespace std;

class Products
{
public:
    string name;
    int price;
    
    int count;

    Products(string n, int p, int c);
};
#endif // PRODUCTS_H