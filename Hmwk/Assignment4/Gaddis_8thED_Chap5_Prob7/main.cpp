/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Carlos 
 *Pennies Per Day 
 * Created on July 10, 2017, 10:50 PM
 */

#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>

using namespace std;

/*
 * 
 */
int main() 
{
    int days1;
    double pay = .01;
    int num;
    double pay1= .01 * .01;
    
    
    cout<< "how many days did you work"<<endl;
    cin>>days1;
    cout <<" day          salary"<<endl;
    cout <<"--------------------"<<endl;
    for (num = 1;num <= days1;num++)
        
        
        cout <<num<<"           "<<pay<<endl;
    return 0;
}

