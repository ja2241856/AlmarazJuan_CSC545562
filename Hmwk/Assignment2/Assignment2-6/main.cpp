/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Carlos 
 *How Many Calories Program 
 * Created on June 29, 2017, 10:03 PM
 */

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;


/*
 * 
 */
int main()
{
    double calorie,cookie,totalCalories;
    calorie = 30;
    
  
    cout <<"how many cookies did you eat?" <<endl;
    cin >> cookie;
    totalCalories =cookie * calorie;
    cout <<"you consumed " <<totalCalories;
    
    return 0;
}

