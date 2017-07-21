
/* 
 * File:   main.cpp
 * Author: lily
 *BlackJack Progress 1
 * Created on July 20, 2017, 7:01 PM
 */

#include <cstdlib>
#include <iostream>
#include <cmath>
#include <iomanip>
#include <ctime>

using namespace std;

int main(int argc, char** argv)
{
int houseCard;
    int dealer;
    int  playerCard;
    char yes;
    char hit;
    char stay;
    srand (static_cast<unsigned int>(time(0)));
    int card1 = rand()%11+1;
    int card2 = rand()%11+1;
    int card3 = rand()%11+1;
    int total;
    
    cout<<"Hello Welcome to Casino Carlos"<<endl;
    cout<<"Do you want to play Blackjack? If you do enter yes"<<endl;
    cin>>yes;
    
    playerCard = card1 + card2 ;
    total = playerCard + card3;
    
    if (yes)
    
        cout <<"Thank you, Here are your cards" <<endl;
        cout <<card1<<" , "<<card2<<endl;
        cout <<"Your total is: "<<playerCard<<endl;
                
     card1 = rand()%11+1;
     card2 = rand()%11+1;
     card3 = rand()%11+1;
     dealer = card1 + card2;
    
        cout <<"These are the dealer cards "<<endl;
        cout <<card1<<" , "<<card2<<endl;
        cout <<"the dealer has: "<<dealer<<endl;
        
        cout <<"Do you want another card, if you do, then enter hit or stay"<<endl;
        cin >>hit || stay;
        
        if (stay)
            cout <<"your total is "<<playerCard<<endl;
    
     if (hit)
            cout <<"Your card is: "<<card3<<endl;
        cout <<"you have a total of "<<total<<endl;
        
        if (total <= 16)
        {
            cout <<"the dealer has to hit"<<endl;
        cout <<"This is the dealer new card "<<card3<<endl;
        }
        if (total <= 21 && total > dealer)
            cout << "you win, you have a better hand"<<endl;
        
    
    return 0;
}

