

/* 
 * File:   main.cpp
 * Author: Carlos 
 *
 * Created on June 26, 2017, 11:39 PM
 */

#include <iostream>

using namespace std;

int main()
{
    double item1 = 15.95;
    double item2 = 24.95;
    double item3 = 6.95;
    double item4 = 12.95;
    double item5 = 3.95;
    double subTotal = item1 + item2 + item3 + item4 + item5;
    double salesTax = subTotal * .07;
    double total = subTotal + salesTax;
    cout <<"item 1 $" <<item1 <<endl;
    cout <<"item 2 $" <<item1 <<endl;
    cout <<"item 3 $" <<item1 <<endl;
    cout <<"item 4 $" <<item1 <<endl;
    cout <<"item 5 $" <<item1 <<endl;
    cout <<"sub total $" <<subTotal <<endl;
    cout <<"sales tax $" <<salesTax <<endl;
    cout << "the total is $" <<total <<endl;
    
    
    

    return 0;
}

