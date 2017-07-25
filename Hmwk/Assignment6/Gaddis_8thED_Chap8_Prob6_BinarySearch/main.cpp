

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
void selectionSort(string[], int);
void printArray(string[], int);

int main(int argc, char** argv)
{
   const int NUM_NAMES = 20;
   string names[NUM_NAMES] = {"Collins, Bill", "Smith, Bart",
                                "Allen, Jim", "Griffin, Jim", "Stamey, Marty",
                                "Rose, Geri", "Taylor, Terri", "Johnson, Jill",
                                "Allison, Jeff", "Looney, Joe", "Wolfe, Bill",
                                "James, Jean", "Weaver, Jim", "Pore, Bob",
                                "Rutherford, Greg", "Javens, Renee", "Harrison, Rose",
                                "Setzer, Cathy", "Pike, Gordon", "Holland, Beth"};
  
   cout << "Names before sorting:" << endl << endl;
   printArray(names, NUM_NAMES);
   selectionSort(names, NUM_NAMES);

   cout << "\nNames after sorting:" << endl << endl;
   printArray(names, NUM_NAMES);
   cout <<endl;
   return 0;
} 

void selectionSort(string strArray[], int size)
{
   
   int startScan, minIndex;
   string minValue;
   
   for (startScan = 0; startScan < (size - 1); startScan++)
        {
        minIndex = startScan;
        minValue = strArray[startScan];

    for (int index = startScan + 1; index < size; index++)
       {
    if (strArray[index].compare(minValue) < 0)
           {
               minValue = strArray[index];
               minIndex = index;
           }
       }
       strArray[minIndex] = strArray[startScan];
       strArray[startScan] = minValue;
   }
} 

void printArray(string strArray[], int size)
{
   for (int index = 0; index < size; index++)
   {
       cout << strArray[index] << endl;
   }
   cout << endl;
}
    


