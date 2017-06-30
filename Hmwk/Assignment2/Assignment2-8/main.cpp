/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Carlos 
 *Ingredient adjuster Program 
 * Created on June 29, 2017, 10:32 PM
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
    double sugar = 1.5 / 48;
    double butter = 1.0 / 48;
    double flour = 2.75/48;
    double cookies;
    cout <<"how many cookies do you want to cook?"<<endl;
    cin >> cookies;
    
    double cookieIngredient1 = cookies * sugar;
    double cookieIngredient2 = cookies * butter;
    double cookieIngredient3 = cookies * flour;
    
    cout <<"you will need "<<cookieIngredient1<<" cups of sugar"<<endl;
    cout <<"you will need "<<cookieIngredient2<<" cups of butter"<<endl;
    cout <<"you will need "<<cookieIngredient3<<" cups of flour"<<endl;
    
    
    return 0;
}

