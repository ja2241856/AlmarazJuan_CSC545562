/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Carlos 
 *21 Blackjack
 * Created on July 20, 2017, 
 */

#include <cstdlib>
#include <iostream>
#include <cmath>
#include <iomanip>
#include <ctime>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv)
{
    int house;
    char dealer;
    int char playerCard;
    char yes;
    srand (static_cast<unsigned int>(time(0)));
    
    cout<<"Hello Welcome to Casino Carlos"<<endl;
    cout<<"Do you want to play Blackjack? If you do enter yes"<<endl;
    
    cin>>yes;
    if (yes)
        cout <<"Thank you, Here are your card" <<endl;
    cout <<srand<<" , "<<srand<<endl;
    
    
    return 0;
    
}


