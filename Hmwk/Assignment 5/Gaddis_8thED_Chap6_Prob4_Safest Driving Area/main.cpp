
/* 
 * File:   main.cpp
 * Author: Carlos
 *Driving Area
 */
#include <cstdlib>
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;
 int getNumAccidents(char*);
 void findLowest(double, double, double,double);


int main(int argc, char** argv)
{
   
    double North, East, West, South,Central;
    North= getNumAccidents("North");
    East= getNumAccidents("East");
    West= getNumAccidents("West");
    South= getNumAccidents("South");
    Central= getNumAccidents("Central");
    
    void  findLowest(double North,double East,double West,double South,double Central);
    return 0;
}
    int getNumAccidents(char*division)
    {
        int accidents;
        
        do 
        {
            cout<<"Enter the number of accidents in the  "<<division <<" region"<<endl;
            cin>>accidents;
            if (accidents <0)
                cout<<"number has to be a positive"<<endl;
            
        }
        while (accidents <0);
            return accidents;
    }
    void findLowest(double North,double South, double West, double East, double Central)
    
    {
        if (East<=North&&East<=West&&East<=South&&East<=Central)
        {
            cout<<"The region with the lowest accidents is:"<<East<<endl;
            
            
        }
       
          if (North <= South&&North <= West&&North <= East&&North <= Central)
        {
            cout<<"The region with the lowest accidents is:"<<North<<endl;
            
        }
     if (West<=North&&West<=South&&West<=East&&West<=Central)
        {
            cout<<"The region with the lowest accidents is:"<<West<<endl;
            
        }
     if (South<=North&&South<=East&&South<=West&&South<=Central)
        {
            cout<<"The region with the lowest accidents is:"<<South<<endl;
            
        }
     if (Central<=North&&Central<=East&&Central<=West&Central<=South)
        {
            cout<<"The region with the lowest accidents is:"<<Central<<endl;
            
        }
       
    
    
    
   
}

