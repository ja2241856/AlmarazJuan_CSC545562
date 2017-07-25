
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
int main( char** )
{
   bool checkLoShuMagicSquare(int (&square)[3][3]); 
   int value;
   int square[3][3];
 
   for (int row = 0; row < 3; row++)
   {
        for (int col = 0; col < 3; col++)
        {
    cout<<"Input value for row " << (row+1) << " column " << (col+1)<<"::";
    cin>>value;
        square[row][col] = value;
   }
   }
   
   bool boolean=checkLoShuMagicSquare(square);
   if(boolean)
    {
       cout<<":: This is a Lo Shu Magic Square :";
    }
else
    {
       cout<< " :: This is not a Lo Shu Magic Square : ";
    }

   return 0;  
   }

bool checkLoShuMagicSquare(int (&square)[3][3])

{
   int sumDiag[2],sumCol=0,sumRow=0,roww[3],coll[3];
 
       for (int row = 0; row < 3; row++)
       {
           sumRow=0;
       for (int col = 0; col < 3; col ++)
       {
       sumRow+= square[row][col];
       roww[row]=sumRow;
       }
       cout<<"sum row " << row << ":" <<sumRow<<endl;
       }

       for (int col = 0; col < 3; col++)
         {
       sumCol=0;
       for (int row = 0; row < 3; row ++)
        {
        sumCol += square[row][col];
        coll[col]=sumCol;
        }
            cout<<"sum columns " << col << ":" <<sumCol<<endl;
       }
      
       sumDiag[0]=0;
       for (int row = 0; row < 3; row++)
       {
       sumDiag[0] += square[row][row];
       }
     
       cout<<"sum diagonal 0 " << ":" <<sumDiag[0]<<endl;
      
       sumDiag[1]=0;
       for(int row = 0; row < 3; row++)
            {
                sumDiag[1] += square[row][3 - 1 - row];
            }
      
       //Displaying the sum of elements in the diagonal1
       cout<<"sum diagonal 1 " << ":" <<sumDiag[1]<<endl;

   if (roww[0]==roww[1] && roww[1]==roww[2] && coll[0]==coll[1] && coll[1]==coll[2] && roww[0]==sumDiag[0] && sumDiag[0]==sumDiag[1] && sumDiag[1]==coll[0])
   return true;
   else
   return false;

}

