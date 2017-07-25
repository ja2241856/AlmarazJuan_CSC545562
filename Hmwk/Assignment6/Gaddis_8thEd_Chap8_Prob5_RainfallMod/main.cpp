/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Carlos 
 *
 * Created on July 24, 2017
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv)
{
    string months[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

    float rainfall[12] = {-1};
    float total = 0;
    int low = 0;
    int high = 0;
    for(int i = 0; i < 12; ++i) {

            cout << "Enter rainfall for " << months[i] << ": ";

            cin >> rainfall[i];

    while(rainfall[i] < 0)
    {

    cout << "Invalid data (Negative rainfall) -- retry" << endl;
    cout << "Enter rainfall for " << months[i] << ": ";
    cin >> rainfall[i];

    }

    total += rainfall[i];

if(rainfall[i] < rainfall[low])
{
low = i;
}

else if(rainfall[i] > rainfall[high])
{
    high = i;

}

}

    cout << " The total rainfall is : " << total << endl;

    float average = total / 12.0;

    cout << "The average monthly rainfall is: " << average << endl;
    cout << "The least rainfall in " << months[low] << endl;
    cout << "The most rainfall fell in " << months[high] << endl;
    return 0;
cout << "The months sorted according to amount to rainfall: " << endl ;

for(int j = 0 ; j < 12 ; j++ )
{
    for( rainfall=0;rainfall <12;rainfall++)\
        {
        cout <<rainfall[j]++;
    }




    return 0;
}

