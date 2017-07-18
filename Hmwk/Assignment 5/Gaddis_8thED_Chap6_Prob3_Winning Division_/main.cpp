

/* 
 * File:   main.cpp
 * Author: Carlos
 *Winning Division
 * /




/*
 * 
 */
#include <cstdlib>
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
double getSales(string);
void findHighest(double, double, double,double);

int main(int argc, char** argv)
{
    double salesNE,salesSE,salesNW,salesSW;
    
    salesNE=getSales("Northeast");
    salesSE=getSales("Southeast");
    salesNW=getSales("Northwest");
    salesSW=getSales("Southwest");
    
    findHighest(salesNE,salesSE,salesNW,salesSW);
    return 0;
}
double getSales(string nameDivision)
{
double tempSales;
while (true)
{
    cout<<"enter the divisions quarterly sales"<<endl;
    cin>>tempSales;
    if (tempSales>0)
        
    {
        break;
    }
    cout<<"sales has to be a positive number"<<endl;
    
}
return tempSales;
}
   
void findHighest (double salesNE,double salesSE,double salesNW,double salesSW)
{
    if(salesSE>=salesNE && salesSE>=salesNW && salesSE>=salesSW)
    {
        cout<<"the division with the highest gross is the Southeast division. Their sales were:$ "<<salesSE<<endl;
        
    }


    if(salesNE>=salesSE && salesNE>=salesNW && salesNE>=salesSW)
    {
        cout<<"the division with the highest gross is the Northeast division. Their sales were:$ "<<salesNE<<endl;
        
    }
    
    if(salesSW>=salesNE && salesSW>=salesNW && salesSW>=salesSE)
    {
        cout<<"the division with the highest gross is the Southwest division. Their sales were:$ "<<salesSW<<endl;
        
    }
    if(salesNW>=salesNE && salesNW>=salesSE && salesNW>=salesSW)
    {
        cout<<"the division with the highest gross is the Northwest division. Their sales were:$ "<<salesNW<<endl;
        
    }

}


 

