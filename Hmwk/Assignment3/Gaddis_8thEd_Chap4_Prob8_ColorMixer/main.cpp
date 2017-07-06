/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Carlos 
 *Color Mixer
 * Created on July 5, 2017, 10:59 PM
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
   float color1,color2,red,blue,yellow,purple,orange,green;
    cout<<"enter two colors from red, blue and yellow"<<endl;
    cin>>color1;
    cin>>color2;
    if (color1!= red||blue||yellow)
        cout<<"error message"<<endl;
    if (color2!= red||blue||yellow)
        cout<<"error message"<<endl;
    
    
     purple = red + blue;
    orange = red + yellow;
     green =  blue + yellow;
    
    
   

    return 0;
}

