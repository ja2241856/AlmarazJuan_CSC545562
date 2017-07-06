/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Carlos 
 *
 * Created on July 5, 2017, 10:37 PM
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
    float seconds,secondsPerMin,secondsPerHr,secondsPerDay;
    secondsPerMin = seconds / 60.0;
    secondsPerHr = seconds /3600;
    secondsPerDay = seconds / 86400;
    cout<<"please enter the number of seconds"<<endl;
    cin>>seconds;
    secondsPerMin = seconds / 60.0;
    secondsPerHr = seconds /3600;
    secondsPerDay = seconds / 86400;
    if (seconds >= 60)
        cout<<"it is "<<secondsPerMin<<" minutes"<<endl;
     if (seconds >= 3600)
        cout << "it is "<<secondsPerHr<<" hours"<<endl;
     if (seconds >= 86400)
        cout <<"it is "<<secondsPerDay<<" days"<<endl;
    
          
   
    return 0;
}

