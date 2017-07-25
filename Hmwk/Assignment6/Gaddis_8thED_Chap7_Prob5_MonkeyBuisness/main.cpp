

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
    string day[5] = {"Monday","Tuesday","Wednesday","Thursday","Friday"};
    int j,i;
    float average, total[3] = {}, totalall = 0, pounds[3][5];

for(j=0;j<=2;j++)   
{
    cout << "Enter amount of food eaten by the monkey " << j + 1<<endl;

for(i=0;i<=5;i++)
{
    cout << day[i] << " : ";
    cin >> pounds[j][i];

while(pounds[j][i] < 0)
{
    cout << "You have entered an invalid value. Please enter another number again : ";
    cin >> pounds[j][i];
}
  otal[j] = total[j] + pounds[j][i];
    totalall = totalall + total[j];
}


return 0;
}
