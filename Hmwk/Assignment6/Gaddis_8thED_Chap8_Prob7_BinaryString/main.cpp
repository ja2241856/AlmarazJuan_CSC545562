

/* 
 * File:   main.cpp
 * Author: Carlos 
 * Created on July 24, 2017
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <string>


using namespace std;


int main(int argc, char** argv)
{
    const int NUM_NAMES = 20;
    string names[NUM_NAMES] ={"Collins, Bill", "Smith, Bart", "Allen, Jim", "Griffin, Jim","Stamey, Marty", "Rose, Geri", "Taylor, Terri", "Johnson, Jill","Allison, Jeff", "Looney, Joe", "Wolfe, Bill", "James, Jean","Weaver, Jim", "Pore, Bob", "Rutherford, Greg", "Javens, Renee","Harrison, Rose", "Setzer, Cathy", "Pike, Gordon", "Holland, Beth"};
    int i,j;
    string temp;

for(i=0;i<NUM_NAMES-1;i++)
    {
    for(j=i+1;j<NUM_NAMES;j++)

    {

if(names[i] > names[j])
{
temp = names[i];
names[i] = names[j];
names[j] = temp;
}
}
}
    string target,last,first;

    cout <<"Enter the last name: "<<endl;
    cin >> last;
    cout<<"Enter the first name: "<<endl;
    cin >> first;
target = last + ", " + first;

    int low = 0, mid, high = NUM_NAMES-1;

while (low <= high)

{

    mid = (low + high) / 2;

if (target < names[mid])
    
    high = mid - 1;

else

{

if (target > names[mid])

    low = mid + 1;

else

    low = high + 1;

}

}

if (target == names[mid])

    cout<<"Found\n"<<endl;

else

    cout<<"Not found\n"<<endl;

return 0;

}
 


