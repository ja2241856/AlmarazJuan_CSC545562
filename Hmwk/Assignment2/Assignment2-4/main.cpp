/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Carlos 
 *How Many Widgets Program 
 * Created on June 29, 2017, 9:31 PM
 */

#include <Iostream>
#include <iomanip>
#include <cmath>
#include <string>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) 
{
   long double widgetWeight = 12.5; 
   long double pallet;
   double palletWidgetWeight;
    
   
    
    
    long double totalWidgets;
    totalWidgets = (palletWidgetWeight - pallet) / widgetWeight;
    cout << "please enter the pallet weight" <<endl;
    cin >> pallet;
    cout << "please enter the pallet weight with widgets" <<endl;
    cin >> palletWidgetWeight;
  
    cout <<"the number of widgets on the pallet is "<< totalWidgets<<endl;
            
    
    
    
  
    return 0;
}

