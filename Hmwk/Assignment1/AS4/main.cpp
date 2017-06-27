
/* 
 * File:   main.cpp
 * Author: Carlos
 *
 * Created on June 26, 2017, 11:16 PM
 * Restaurant Bill 
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main() 
{
    double bill = 88.67, tax,billPlusTax,tip,billTotal;
    tax = bill * .0675;
    billPlusTax = bill + tax;
    tip = billPlusTax * .20;
    billTotal = billPlusTax + tip;
    
    
    cout << "the meal cost is $" << bill <<endl; 
    cout << "the tax is $" << tax <<endl;
    cout << "the tip is $" << tip <<endl;
    cout << "the total bill is$" << billTotal <<endl;
    
   
 
    
    return 0;
}

