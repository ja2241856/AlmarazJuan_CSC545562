/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Carlos 
 *Sum of numbers 
 * Created on July 10, 2017, 8:25 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv)
{
    int number,number1;
    float totalSum = 0;
    
    cout << "enter a number starting other than zero"<<endl;
    cin >> number1;
    for (int number = 0;number <= number1;number++)
        
    {
        totalSum = totalSum + number1;
        number++;
    }
    if (number1 < 1)
    {
        cout << "this number is not acceptable"<<endl;
    }
    else
    {
        cout << "the sum of 1 through  "<<number1<< " is "<<totalSum <<endl;
    }
    return 0;
}

