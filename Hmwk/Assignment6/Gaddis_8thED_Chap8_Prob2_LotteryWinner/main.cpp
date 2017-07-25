

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
    const int size = 10;
    int arrLottery[size]={13579, 26791, 26792, 33445, 55555, 62483, 77777, 79422, 85647, 93121};
    int Search (int [], int, int);
    int goal, result;



cout<<"Player please enter this week's 5-digit winning lottery number: ";
cin>>goal;

result = Search(arrLottery, size, goal);
if (result != -1)

    {
    cout<<"you have a winning ticket."<<endl;

    }

else

    {
    cout<<"You did not win this week, sorry try again."<<endl;
    }
cin.get(); cin.get();
return 0;

}

int Search (int arrLottery[], int Max, int goal)

{

int index;
for (index = 0; index < Max-1; index++)

    {

if (arrLottery[index] == goal)
return 0;
    }
return -1;
}
    


