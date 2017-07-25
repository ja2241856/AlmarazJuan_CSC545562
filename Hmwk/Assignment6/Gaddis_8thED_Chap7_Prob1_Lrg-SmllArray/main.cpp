

/* 
 * File:   main.cpp
 * Author: carlos 
 *
 * Created on July 24, 2017 
 */
#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    
  
int numbers[10];
int high,low;

cout << "Enter values into the  array"<<endl;

for(int i=0; i<10; i++)
{
    cout << "enter number " << (i+1)<< " " <<endl;
    cin >> numbers[i];
}

high = low = numbers[0];

for(int i=1;i<10; i++)

{

if(numbers[i]>high) high = numbers[i];

    if(numbers[i]<low) low = numbers[i];

}

cout << "largest number in the Arrray is: " << high <<endl;
cout << "smallest number in the  Arrray is: " << low <<endl;
   
    
    return 0;
}



