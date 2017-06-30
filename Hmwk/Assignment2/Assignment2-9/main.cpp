/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Carlos 
 *Automobile cost Program 
 * Created on June 29, 2017, 10:50 PM
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
    double loanPayment, insurance,gas, oil, tires,maintenance, monthTotal, annualTotal;
    cout <<"please enter the loan payment expense"<<endl;
    cin >>loanPayment;
    cout <<"please enter the insurance payment expense"<<endl;
    cin >>insurance;
    cout <<"please enter the gas payment expense"<<endl;
    cin >>gas;
    cout <<"please enter the oil payment expense"<<endl;
    cin >>oil;
    cout <<"please enter the tires payment expense"<<endl;
    cin >>tires;
    cout <<"please enter the maintenance payment expense"<<endl;
    cin >>maintenance;
    
    monthTotal = loanPayment + insurance + gas + oil + tires + maintenance;
    annualTotal = monthTotal * 12;
    cout <<"your monthly total expenses are $"<<monthTotal<<endl;
    cout <<"your annual total expenses are $"<<annualTotal<<endl;
    
    
    return 0;
}

