/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Carlos 
 *Male and Female Percentages Program
 * Created on June 29, 2017, 11:01 PM
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
    double males,females,percentageF,percentageM;
    
            cout<<"how many males are registered in the class?"<<endl;
    cin >>males;
    cout <<"how many females are registered in the class?"<<endl;
    cin >>females;
    percentageF = 100 * (males / (males + females));
    percentageM = 100 *(females / (females + males));
    cout <<setprecision (1)<<fixed;
    cout <<"the percentage of females is "<<percentageF <<"%"<<endl;
    cout <<"the percentage of males is "<<percentageM<<"%"<<endl;
    
    
    return 0;
}

