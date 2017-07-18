/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Carlos   
 *MarkUp Program
 */

#include <cstdlib>
#include <iostream>
#include <cmath>
#include <iomanip>


using namespace std;

void calculateRetail ();
int  main(int argc, char** argv)
{
    double calculateRetail (double cost, double percent);
    double whcost,retail,markPercent;
    
    cout<<"please enter the wholesale cost:"<<endl;
    cin>>whcost;
    cout<<"enter the markup percentage:"<<endl;
    cin>>markPercent;
    if (whcost<1 || markPercent<1)
    {
        cout<<"please enter a positive number"<<endl;
    return 0;
    }
    retail = calculateRetail (whcost,markPercent);
    
    cout<<"the price of the item is $"<<retail<<endl;
    
    
    return 0;
}

double calculateRetail (double cost, double percent)

{
    double retail;
    retail = cost+((cost * percent) / 100);
    return retail;
    
}


