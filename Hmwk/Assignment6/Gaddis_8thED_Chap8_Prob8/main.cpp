

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


int main(int argc, char** argv)
{
    int linearSearch(int [], int, int);
    int binarySearch(int [], int, int);
    const int SIZE = 20;
    int array [SIZE] = { 56, 75, 98, 107,150, 160, 169, 175,209, 310,356, 400,409, 480, 490, 500,650, 700, 800, 1050 };
    int count1,count2;
count1 = linearSearch(array, SIZE, 319);
count2 = binarySearch(array,SIZE,319);

    cout<<"Number of comparisons in a linear search:"<<count1<<endl;
    cout<<"Number of comparisons for binary search:"<<count2<<endl;
    cout <<endl;

return 0;

}


int linearSearch(int list[], int numElems, int value)

{


    int index = 0;
    int position = -1;
    bool found = false;
    int count=0;

while (index < numElems && !found)

{
if (list[index] == value)
{

found = true;
position = index;
}
index++;
count++;
}
return count; ;

}

int binarySearch(int array[], int size, int value)

{

    int first = 0,last = size - 1,middle,position = -1;
    bool found = false;
    int count=0;

while (!found && first <= last)

{
middle = (first + last) / 2;

if (array[middle] == value)

    {

found = true;
position = middle;

}

else if (array[middle] > value)

{

last = middle - 1;
count++;
}

else

{

first = middle + 1;

count++;

}

count++;

}

return count;

}
    


