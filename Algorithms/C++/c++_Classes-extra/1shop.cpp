#include<iostream>
using namespace std;
class shop
{
    int itemId[100];
    int itemPrice[100];
    int counter =0;

    public:
        void setPrice(void);
        void displayPrice(void);
};   int i;                         //i is a static variable(Global variable) and it default value is 0
void shop :: setPrice(void)
{
    cout << "Enter Id of your id no " << counter+1 << " :  ";
    cin >> itemId[counter];
    cout << "Enter Price of your item " << " :  ";
    cin >> itemPrice[counter];
    counter++;
}
void shop :: displayPrice(void)
{
    for(i=0; i<counter; i++)
    {
        cout << "The price of item with Id " << itemId[i] << " is " << itemPrice[i] << endl;
    }
}

int main()
{
    shop dukaan;
    // cout << i << endl;
    int items ;
    cout << "how many Product do you want to Buy :  ";
    cin >> items;
    for(i=1; i<=items; i++)
    {
        dukaan.setPrice();
    }
        dukaan.displayPrice();
    
}