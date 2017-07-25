

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

void printLargerElements(int *a, int size, int num);
int main(int argc, char** argv)
{
     int a[50];
     int size;
     int num;
     cout<<"Enter the size of the array: ";
     cin>>size;

     cout<<"Enter the numbers for  the array: ";
     

     for(int i=0;i<size;i++)

     {

        cout<<"a["<<(i+1)<<"]: ";
        cin>>a[i];
        cout<<endl;

     }
     
        cout<<"The numbers entered are: "<<endl;

     for(int i=0;i<size;i++)

     {
          cout<<"["<<a[i]<<"] ";     
     }
        cout<<endl;
        cout<<"Displaying the array numbers larger than the "
          <<"given number you need to enter a number."<<endl;

        cout<<"Enter a number: ";

     cin>>num;

printLargerElements(a, size, num);

return 0;

}

//printLargerElements function

//that prints the elements that are larger than

//the number

void printLargerElements(int *a, int size, int num)

{

     cout<<"numbers that are larger than the number "<<num<<" are: "<<endl;

     for(int i=0;i<size; i++)

     {

          if(a[i]>num)

              cout<<"["<<a[i]<<"] ";

     }

     cout<<endl;


   
}

