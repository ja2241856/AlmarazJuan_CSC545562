

/* 
 * File:   main.cpp
 * Author: Carlos
 *Miles Per Gallon Program
 * Created on June 29, 2017, 7:23 PM
 */

#include <iostream>
#include <iomanip>


using namespace std;
int main() 
{
   long double gasGallons, miles,mpg;
   
    
    
    cout << "Hello please enter the miles you can driver on a full tank" <<endl;
    cin >> miles;
    cout << "Thank you! " <<endl;
    cout << "please enter the gallons it takes to fill up your vehicle tank " <<endl;
    cin >> gasGallons;
    cout << "Thank you! "<<endl;
    mpg = miles / gasGallons;
    cout << setprecision(2) << fixed;
    cout << "Your vehicle can driver "<< mpg<< " miles per gallon "<<endl;
    return 0;
}

