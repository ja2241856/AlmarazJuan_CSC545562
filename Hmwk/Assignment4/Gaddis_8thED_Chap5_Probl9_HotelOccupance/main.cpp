

/* 
 * File:   main.cpp
 * Author: Carlos 
 *Hotel Occupancy 
 * Created on July 11, 2017, 9:33 PM
 */

#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv)

{
    float floor, rooms,occupied,occupPer;
    float unoccupied;
    unoccupied = rooms - occupied;
    floor < 13;
   
    
    int num;
    
    for (num = 0;num <= floor;num++)
    {
    
    cout <<"How many floors does your hotel have? "<<endl;
    cin>>floor;
    
    cout <<"How many rooms does each floor have? "<<endl;
    cin>>rooms;     
    cout <<"How many rooms are occupied? "<<endl;
    cin>>occupied;
    
    // calculates the formulas for giving the results
    float totalRoom,totalOccup,totalUnocc;
    totalRoom = rooms * floor;
    totalOccup = floor * occupied;
    totalUnocc = totalRoom - totalOccup;
    occupPer = (occupied / rooms) * 100;
   
    
    cout <<"The hotel has "<<totalRoom<<" rooms "<<endl;
    cout <<"The hotel has "<<totalOccup<<" rooms occupied"<<endl;
    cout <<"The hotel has "<<totalUnocc<<" rooms unoccupied"<<endl;
    cout <<"The hotel occupancy rate is "<<occupPer<<" percent"<<endl;
    
    
    }
    
    
    

    return 0;
}

