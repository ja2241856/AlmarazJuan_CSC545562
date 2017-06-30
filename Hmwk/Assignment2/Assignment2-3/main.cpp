

/* 
 * File:   main.cpp
 * Author: Carlos 
 *Average rainfall
 * Created on June 29, 2017, 8:57 PM
 */

#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>

using namespace std;


int main() 
{
    double rain1,rain2, rain3, average;
     double Answer1,Answer2, Answer3;
    
     
    cout<<"please enter the three months of rain fall"<<endl;
    cin>>Answer1;
    cout<<"please enter the second month of rain fall"<<endl;
    cin>>Answer2;
    cout<<"please enter the third month of rain fall"<<endl;
    cin>>Answer3;
    
    cout<<"please enter the amount of rain that fell in the first month"<<endl;
    cin>>rain1;
    cout<<"please enter the amount of rain that fell in the first month"<<endl;
    cin>>rain2;
    cout<<"please enter the amount of rain that fell in the first month"<<endl;
    cin>>rain3;
    
    
    average = (rain1+rain2+rain3)/3.0;
    cout <<"the average rain fail for "<<Answer1<<", "<<Answer2", and "<<Answer3<<" is"<<average;
    
    return 0;
}

