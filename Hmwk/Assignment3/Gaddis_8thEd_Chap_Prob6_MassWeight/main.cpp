/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Carlos 
 *Mass and Weight 
 * Created on July 5, 2017, 10:18 PM
 */

#include <iostream>
#include <cmath>

using namespace std;

/*
 * 
 */
int main()
{
   float mass,weight,total;
    weight = mass * 9.8; 
    total = weight;
    
    cout<<"please enter the mass of an object to calculate the weight in newtons"<<endl;
    cin>>mass;
    if (weight > 1000)
        cout<<"the object is too heavy"<<endl;
    else if (weight < 10)
        cout <<"your object is too light "<<endl;
    else if (weight >= 10||weight<= 1000 )
    cout<<"the weight is "<<total<<endl;
 
    
    
    return 0;
}

