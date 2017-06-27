
/* 
 * File:   main.cpp
 * Author: carlos
 *Distance per tank of gas program
 * Created on June 27, 2017, 12:40 AM
*/
#include <iostream>

using namespace std;
int main()
{
    double carGallons = 20, townDistance = 23.5, highwayDistance = 28.9,Distance1, Distance2;
    Distance1 = carGallons * townDistance;
    Distance2 = carGallons * highwayDistance;
    cout << "Distance traveled on a 20 galloon gas tank in town " <<Distance1 <<endl;
    cout << "Distance traveled on a 20 gallon gas tank in highway " <<Distance2 <<endl;
  
    return 0;
}

