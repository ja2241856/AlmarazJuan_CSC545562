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
#include <fstream>

using namespace std;
int main(int argc, char** argv)

{
    // to pull up a file that has the number 21 with a big font as a sign on the table
    ifstream inputFile;
    int number;
    number = 21;
    //declare variables 
 int houseCard;
    int dealer;
    int  playerCard;
    char yes;
    char y;
    char hit;
    char stay;
    // to produce a random number under 11, which is 1-10 and ace
    srand (static_cast<unsigned int>(time(0)));
    int card1 = rand()%11+1;
    int card2 = rand()%11+1;
    int card3 = rand()%11+1;
    int card4 = rand()%11+1;
    int card5 = rand()%11+1;
    int total;
    // to show the sign 21
    inputFile.open("numbers.txt");
    if (!inputFile)
        cout <<"Error opening file"<<endl;
    else
    {
        while (inputFile >> number)
        {
            cout <<number << endl;
        }
        inputFile.close();
    }
        
   // the greeting for the game acting as a dealer
    cout<<"Hello Welcome to Casino Carlos!"<<endl;
    cout<<"*******************************"<<endl;
    cout <<"This game plays for no money just bragging rights"<<endl;
    cout<<"Do you want to play Blackjack? If you do enter y and press enter"<<endl;
    cin>>yes;
    
    if (yes)
    {
        // formula to add card results
    playerCard = card1 + card2 ;
    
        cout <<"Thank you"<<endl;
        cout <<"********************"<<endl;
        cout <<"Here are your cards" <<endl;        
        cout <<card1<<" , "<<card2<<endl;
        cout <<"Your total is: "<<playerCard<<endl;
        cout<<endl;
        // to produce a random card for dealer         
     card1 = rand()%11+1;
     card2 = rand()%11+1;
     card3 = rand()%11+1;
     card4 = rand()%11+1;
     card5 = rand()%11+1;
     dealer = card1 + card2;
    
        cout <<"These are the dealer cards "<<endl;
        cout <<card1<<" , "<<card2<<endl;
        cout <<"the dealer has: "<<dealer<<endl;
        cout <<"******************"<<endl;
        cout<<endl;
    }
      // if cards are less than 20 it asks to hit because 21 is winning 
        while (playerCard<=20)
        {
        cout <<"Do you want another card, if you do, then enter hit or stay"<<endl;
        break;
        }
        cin >>hit;
        cin >>stay;
        // this is if the person decides to stay, it shows their result and the 
        //dealer continues hand until end result
        char s = 'A';
        stay = 'A';
        switch (stay)
        {
            case 'A':cout <<"your total is "<<playerCard<<endl;
            break;
        }
        
        char h = 'B';
        hit = 'B';
        total = playerCard + card3;
        // if the person hits it gives them another card 
     if (hit && !stay)
     
               cout <<"Your card is: "<<card3<<endl;
        {
                        cout <<"you have a total of "<<total<<endl;
                        cout <<"The dealer has "<<dealer<<endl;
        }
     
        // this automatically hits the dealer if it has 17 or below
        houseCard = dealer + card3;
      if   (dealer <= 17)
      {
        cout <<"the dealer has to hit"<<endl;
        cout <<"This is the dealer new card "<<card3<<endl;
        cout <<"His total is "<<houseCard<<endl;
        if (houseCard <= 17)
            
            cout <<"The fourth card is "<<card4<<endl;
        houseCard = dealer + card3 + card4;
        cout << "The dealer has "<<houseCard<<endl;
        
      }
        
        // to determine who won the card game
        if (total <= 21 && total > houseCard)
            cout << "you win, you have a better hand"<<endl;
        else if (houseCard <= 21 && houseCard > total);
                cout <<"The dealer Wins"<<endl;
          if (houseCard >=22)
            cout <<"The dealer Busted"<<endl;
                cout <<endl;
                
     // to go to the next hand, should be a loop, but I cant get it
      cout<<" Welcome again to Casino Carlos!"<<endl;
    cout<<"*******************************"<<endl;
    cout <<"This game plays for no money just bragging rights"<<endl;
    cout<<"Do you want to play Blackjack? If you do enter y and press enter"<<endl;
    cin>>yes;  
    
                
    return 0;
}

