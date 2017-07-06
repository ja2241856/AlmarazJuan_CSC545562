/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Carlos 
 *Running The Race Program 
 * Created on July 6, 2017, 12:37 PM
 */

#include <iostream>
#include <string>



using namespace std;

/*
 * 
 */
int main() 
{
    int time1,time2,time3;
    string runner1,runner2,runner3; // string get names from the cin
            
    cout << "please enter the name of the first runner and his time" <<endl;
    cin >> runner1 >> time1;
    
    cout << "please enter the name of the second runner and his time" <<endl;
    cin >> runner2>>time2;
    
    cout << "please enter the name of the third runner and his time" <<endl;
    cin >> runner3 >> time3;
            
    
    
    if (time1 > time2 > time3)
        cout << runner1 << " is the fastest"<<endl;
    if  (time2 >time3)
        cout << runner2 << "is the second fastest" <<endl;
    if (time3 < time2 < time1)
    cout << runner3 << " is the third fastest"<<endl;
    
    
    return 0;
}

