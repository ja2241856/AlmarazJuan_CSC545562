/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Carlos 
 *
 * Created on June 29, 2017, 10:20 PM
 */

#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>

using namespace std;

/*
 * 
 */
int main()
{
    long double cost,totalBill;
    
    cout <<"please enter the amount of cost for the building" <<endl;
    cin >> cost;
   
    totalBill= cost * .80;
    cout <<"you should buy this amount of insurance for your building"<<endl;
    cout <<"$"<<totalBill;
  
    return 0;
}

