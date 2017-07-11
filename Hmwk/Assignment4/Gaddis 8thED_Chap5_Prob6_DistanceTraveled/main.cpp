/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: carlos 
 *Distance Traveled 
 * Created on July 10, 2017, 10:12 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv)
{
    int speed,time,num;
    int a = 1;
    
    cout <<"how fast was the vehicle going? "<<endl;
    cin >> speed;
    cout <<"How many hours did it travel?"<<endl;
    cin >>time;
    cout <<"Hour                       Distance Traveled"<<endl;
    cout <<"--------------------------------------------"<<endl;
            
    for(num = speed;num <= time;num++)
        cout << num <<"\t\t" <<(num * num)<<endl;
    
        
        
    
    
    
    return 0;
}

