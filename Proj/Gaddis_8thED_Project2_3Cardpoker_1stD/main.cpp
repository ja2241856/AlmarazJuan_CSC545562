
/* 
 * File:   main.cpp
 * Author: lily
 *
 * Created on July 26, 2017, 7:31 PM
 */

#include <cstdlib>
#include <iostream>
#include <cmath>
#include <iomanip>
#include <ctime>
#include <fstream>

using namespace std;



int main(int argc, char** argv)
{
    int pair;
    int straight;
    int highCard;
    int pairHighCard;
    int threeOfKind;
    float payOne;
    float payTwo;
    float payThree;// to hold the formula of pay 
    int bet; // to hold bet amount
    int playerM; // player money
    int totalMplayer;// total money for player
    int totalDCards; // might use this 
    int playerCards;
    int dealerCards;
    int card1;
    int card2;
    int card3;
    int MIN_BET = 5;
    int MAX_BET = 100;
    char choice;
    srand (static_cast<unsigned int>(time(0)));
    choice = ('Y' || 'y' || 'Q' || 'q');
    pair = (card1 = card2) || (card1 = card3) || (card2 = card3);
   // straight which sorts the card to find out if they are in order // not sure if this formula will produce a straight or but in ascending or high to lowest
    // maybe put a function where if it sort it from highest to lowest?
    pairHighCard = (card1 = card2 && card3)|| (card3 = card2 && card1); // to use as a function or part of function to show who won maybe?
    threeOfKind = (card1 = card2 = card3);
    
    payOne = (bet *1);
    payTwo = (bet * 2);
    payThree = (bet * 3);
    
    cout <<"Hello welcome to Casino Carlos"<<endl;
    cout <<"do you want to play 3 Card Poker?"<<endl;
    cout <<"if you do press Y or Q to say Good Bye "<<endl;
    cin >>choice;
    
    if(choice = 'Y' || 'y' && !'Q')
    {
        cout <<"you chose to play Welcome"<<endl;
    }
    
    if(choice = 'Q' || 'q' && !'Y')
    {
        cout <<"you chose to quit, Goodbye"<<endl;
    }
    
            
    
    
    
   
    
    
    return 0;
}

