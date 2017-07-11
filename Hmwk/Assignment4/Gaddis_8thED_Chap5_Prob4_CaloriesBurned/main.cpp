/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Carlos 
 *Calories Burned 
 * Created on July 10, 2017, 9:17 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv)
{
    double caloriesB = 3.6;
    int minMax = 30;
    int num ;
    cout <<"the amount of calories burned burned per 5 minutes are "<<endl;
    
    for(num = caloriesB;num <= minMax;num++)
        cout <<num <<"\t\t"<<(num * num)<<endl;
        
    
    return 0;
}

