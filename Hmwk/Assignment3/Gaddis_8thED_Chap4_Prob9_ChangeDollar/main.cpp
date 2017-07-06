/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Carlos 
 *Change for a dollar game program
 * Created on July 6, 2017, 10:22 AM
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
  
    float total;
    
    int pennies,nickels, dimes,quarters;
        
    cout <<"please enter the amount of pennis,nickels,dimes and quarters that make up a dollar"<<endl;
    cin>>pennies;
    cin>>nickels;
    cin>>dimes;
    cin>>quarters;
       
    total = pennies * .01 + nickels *.05 + dimes * .10 + quarters *.25;
     
    if (total > 1.00)
        cout<<"the combination is more than a dollar"<<endl;
    else if (total < 1.00 )
        cout<<" the combination is under a dollar"<<endl;
     if (total == 1.00)
        cout<<"Congratulations you won!"<<endl;
    
    
         
    return 0;
}

