/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author:Carlos 
 *Ocean Levels 
 * Created on July 10, 2017, 8:53 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) 
{
    double mmPerY = 1.5;
    int maxYears = 25;
    int num;
    
    cout << " the ocean grows at a rate of 1.5 millimeters per year, this how much it will grow in 25 years"<<endl;
    
    cout << "Year         millimeters" <<endl;
    cout << "------------------------" <<endl;
    
    for (num = mmPerY; num <= maxYears;num++)
        cout <<num <<"\t\t" <<(num * num) <<endl;
    
  
    return 0;
}

