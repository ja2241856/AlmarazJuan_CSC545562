

/* 
 * File:   main.cpp
 * Author: Carlos
 *Test Score Program
 * Created on June 29, 2017, 8:07 PM
 */

#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>

using namespace std;


int main() 
{
   long double test1, test2, test3, test4, test5;
   long double average;
    
    cout<<"please enter the first test score"<<endl;
    cin>>test1;
    cout<<"please enter the second test score"<<endl;
    cin>>test2;
     cout<<"please enter the third test score"<<endl;
    cin>>test3;       
    cout<<"please enter the fourth test score"<<endl;
    cin>>test4;
    cout<<"please enter the fifth test score"<<endl;
    cin>>test5;
    
    cout<<setprecision(1)<<fixed;
    average = (test1+test2+test3+test4+test5) / 5.0;
    cout<<"the average test score is "<<average<<endl;
 
    return 0;
}

