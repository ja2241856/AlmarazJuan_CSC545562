/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Carlos 
 *Member Fees 
 * Created on July 10, 2017, 9:37 PM
 */

#include <iostream>

using namespace std;


int main(int argc, char** argv)
{
    int long  memFee = 2500;
    double raise = .04;
    int result = memFee * raise;
    int total = result + memFee;
    int years = 6;
    int num ;
    
    cout <<"the membership fees will increase at 4 percent per year"<<endl;
    cout << "below are the projections per year"<<endl;
    
    for(num = result;num <= total ;num++)
        cout << num <<"\t\t" <<(num + num)<<endl;
    
   
    
        
    
    return 0;
}

