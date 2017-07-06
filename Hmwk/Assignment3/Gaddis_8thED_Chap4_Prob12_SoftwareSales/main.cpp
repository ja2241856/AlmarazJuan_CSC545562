/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Carlos 
 *
 * Created on July 6, 2017, 11:13 AM
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
    int software,discount1,discount2,discount3,discount4,quantity;
    software = 99;
    float total;
    
    
    cout<<"please enter the total quantity sold"<<endl;
    cin >>quantity;
    total = quantity * 99;
    discount1= total*.20;
    discount2 = total * .30;
    discount3 = total * .40;
    discount4 = total * .50;
    
    
    
    
     if (quantity >10 || quantity <19)
     {
        cout <<"you get 20% discount"<<endl;
     cout <<total - discount1 <<" this is your total"<<endl;
     }
   
      if (quantity >20 || quantity < 49)
      {
     cout <<"you get 30% discount" <<endl;
     cout << total - discount2 <<" This is you discount"<<endl;
     
      }
     
    if (quantity >50 || quantity <99)
        cout <<"you get 40% discount" <<endl;
    cout << total - discount3 <<" this is you discount"<<endl;
    
    if (quantity > 100)
        cout << "you get 50% discount"<<endl;
    cout <<total - discount4 << "this is your discount"<<endl;
    
    
       
    
    
    
        
    
    return 0;
}

