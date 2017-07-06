/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Carlos 
 *Areas of Rectangles 
 * Created on July 5, 2017, 10:02 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main()
{
    float length1,length2,width1,width2;
    cout<<"please enter the length and width of the first rectangle"<<endl;
    cin>>length1;
    cin>>width1;
    cout<<"please enter the length and width of the second rectangle"<<endl;
    cin>>length2;
    cin>>width2;
    double area1 = length1 * width1;
    double area2 = length2 * width2;
    
    if (area1 > area2)
        cout <<"rectangle 1 is bigger"<<endl;
    else if (area2 > area1)
        cout <<"rectangle 2 is bigger"<<endl;
    
    return 0;
}

