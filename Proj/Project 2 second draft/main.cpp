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

void DEALER ();

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
    int betTwo;
    int betOne;
    char choice;
    srand (static_cast<unsigned int>(time(0)));
    card1 = rand()%11+1;
    card2 = rand()%11+1;
    card3 = rand()%11+1;
    //pair = (card1 = card2) || (card1 = card3) || (card2 = card3);
   // straight which sorts the card to find out if they are in order // not sure if this formula will produce a straight or but in ascending or high to lowest
    // maybe put a function where if it sort it from highest to lowest?
    //pairHighCard = (card1 = card2 && card3)|| (card3 = card2 && card1); // to use as a function or part of function to show who won maybe?
    //threeOfKind = (card1 = card2 = card3); i cannot have anything here because the random gets it. 
    
    payOne = (bet *1);
    payTwo = (bet * 2);
    payThree = (bet * 3);
    
    cout <<"Hello welcome to Casino Carlos"<<endl;
    cout <<"do you want to play 3 Card Poker?"<<endl;
    cout <<"if you do press Y "<<endl;
    cin >>choice;
    cout <<endl;
    
    if(choice == 'Y' || 'y')
        
    cout <<"************************"<<endl;
    cout <<"you chose to play: Welcome!!"<<endl;
    cout <<"----****-----****----***---"<<endl;
    cout<<"(1)Hello, the rules are:"<<endl;
    cout <<"(2)that you have to make a bet first"<<endl;
    cout <<"(3)get your cards second and bet if you think you can win!"<<endl;
    cout <<"(4)Finally, make your last bet and Good Luck"<<endl;
    cout <<"---****---****----****----***----***----***---"<<endl;
    cout <<"Please enter your bet below:"<<endl;
    cout <<"_____________________________"<<endl;
    cin >>betOne;
    if (betOne < 5)
        cout <<"You need to bet the minimum bet"<<endl;
    cin >>betOne;
            
    cout <<endl;
    
    cout <<"here are you cards"<<endl;
    cout <<"___________________"<<endl;
    cout <<card1<<"  ,  "<<card2<<endl;
    if (card1 == card2)
        cout <<"you have a pair!"<<endl;
    if (card1 == card2 == card3)
        cout << "you got 3 of a kind"<<endl;
    
    
    cout <<endl;
    cout <<"___________________"<<endl;
    cout <<"Do you want to bet?"<<endl;
    cout <<"If you do please play at least the minimum bet"<<endl;
    cout <<"Or match your first hand bet, if it was over the min bet"<<endl;
    cin >>betTwo;
    if (betTwo < betOne || betTwo < 5)
        cout <<"You need to bet the minimum bet"<<endl;
    cin >>betTwo;
    cout <<endl;
    
   void DEALER();
   {
       card1 = rand()%11+1;
       card2 = rand()%11+1;
       card3 = rand()%11+1;
       if (betTwo)
           cout <<"these are the dealer cards"<<endl;
           cout <<card1<<"  ,  "<<card2<<endl;
   }
   
   cout <<betOne + betTwo<<endl;
   
           
    
    
    
    
   
    
    
    return 0;
}

