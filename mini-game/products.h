#include <iostream>
#include <string>

using namespace std;

class Products
{
private:
    int price;
    int count;

public:
    void get_price();
    void get_price(int c);

    void summa();
};
