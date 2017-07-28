/*
 3 Card Poker Program
 Created On 07/26/17
 */
#include <cstdlib>
#include <iostream>
#include <cmath>
#include <iomanip>
#include <ctime>
#include <fstream>

using namespace std;

void DEALER (); // to hold dealer card functions
void PLAYER ();// to hold player functions
void CASINO();// to hold scenarios of possible winning ties 
void DETERWIN(); // to determine winner when nobody has a winning hand

int main(int argc, char** argv)
// determine variables 
{
    const int size = 3;
    int highestOne;
    int count;
    int highestTwo;
    int dealerPair;
    int playerPair;
    int playerStrgt;
    int dealerStrgt;
    int tempOne;
    int tempTwo;
    int dThrOfKind;
    int pThrOfKind;
    int payOne;
    float payTwo;
    float payThree;// to hold the formula of pay 
    int playerM; // player money
    int totalMplayer;// total money for player
    int playerCards;
    int dealerCards;
    int card1;
    int card2;
    int card3;
    int MIN_BET = 5; // amount of minimum bet 
    int MAX_BET = 100; // amount of max bet 
    int betTwo; // ante
    int betOne;// pair bonus 
    int betThree;// play bet 
    int times;
    char choice;
    char choiceTwo;
    string name;
    string CARDS ="8 =J"; 
    string CARDS_TWO = "9 = Q ";           
    string CARDS_THREE = "10 = K"; 
    string CARDS_FOUR = "11 = A";
    ofstream out;
    srand (static_cast<unsigned int>(time(0)));
    card1 = rand()%11+1;
    card2 = rand()%11+1;
    card3 = rand()%11+1;
    
    payOne = 2; // to multiply for pay out 
    payTwo = 3;
    payThree = 4;
    
    out.open("Casino.dat");
    // introduction to game 
    cout <<"Hello welcome to Casino Carlos"<<endl;
    cout <<"do you want to play 3 Card Poker?"<<endl;
    cout <<"if you do press Y "<<endl;
    cin >>choice;
    cout <<endl;
    
    if(choice == 'Y' || 'y')
      cout <<"What is your players card name name?"<<endl;
    cout <<"Please enter it below."<<endl;
    cin>>name;
    cout <<"************************"<<endl;
    cout <<"you chose to play: Welcome!!"<<endl;
    cout <<"                   "<<name<<endl;
    cout <<"----****-----****----***---"<<endl;
    cout <<"Hello, the rules and royal cards are:"<<endl;
    cout <<"----****----****----***---"<<endl;
    // rules for the average user 
    cout <<"(1)You have to make an Ante bet first"<<endl;
    cout <<"(2)You can choose to bet on the pair plus for a bonus or"<<endl;
    cout <<"(2)get your cards and bet the Play bet if you think you can win!"<<endl;
    cout <<"(3)Finally, see the dealer cards, compare and"<<endl;
    cout <<"                 Good Luck"<<endl;
    cout <<"___________________________________________________________"<<endl;
    cout <<"the royal cards are;"<<endl;
    cout <<CARDS<<endl;
    cout <<CARDS_TWO<<endl;
    cout <<CARDS_THREE<<endl;
    cout <<CARDS_FOUR<<endl;
    cout <<"---****---****----****----***----***----***---"<<endl;
    cout <<endl;
    cout <<endl;
    cout <<"Please enter your bet below:"<<endl;
    cout <<"_____________________________"<<endl;
    cout <<endl;
    cin >>betOne;
    cout <<"Do you want to play the Pair Plus Bonus?"<<endl; // to play optional bonus for pairs 
    cin >>choiceTwo;
  
     while (choiceTwo=='y'||'Y')
     {
        cout <<"Please enter your Pair Plus bet"<<endl;
            cin >> betTwo;
            break;
     }
            if (betTwo < 5 )
                for (times = 1;times<betTwo;times++)
            {
                cout <<"You need to bet the minimum bet"<<endl; // to show error 
                cin>>betTwo;
            }
            else if (betTwo > 100)                    // to show over max bet 
                for (times = 1;times<betTwo;times++)
            {
                cout <<"You need to bet under the Max bet"<<endl;
                cin>>betTwo;
            }
            
                
    if (betOne < 5)
        
        for (times=1;times<betOne;times++)
        {
        cout <<"You need to bet the minimum bet"<<endl;
        cin >>betOne;
        }     
    else if (betOne > 100)
                for (times = 1;times<betOne;times++)
            {
                cout <<"You need to bet under the Max bet"<<endl;
                cin>>betOne;
            }  
            
    cout <<endl;
    cout <<endl;
    cout <<"here are you cards"<<endl;
    cout <<"___________________"<<endl;
    cout <<endl;
    cout <<card1<<"  ,  "<<card2<<"  ,  "<<card3<<endl;
    
    playerM = betOne + betTwo;     // to hold the bets from player 
    if (card1 == card2 || card2==card3||card1==card3)
    {
        cout <<"you have a pair!"<<endl;
        cout <<"You get paid!"<<endl;
        cout <<"$ "<<playerM * payOne<<endl;
    }
    // to play the last bet to see if you win or you fold 
    cout <<endl;
    cout <<"___________________"<<endl;
    cout <<endl;
    cout <<"Do you want to bet the Play bet?"<<endl;
    cout <<"If you do please bet the minimum bet"<<endl;
    cout <<"Or match your first hand bet, if it was over the min bet"<<endl;
    cin >>betThree;
    
    if (betThree < betOne || betThree < 5)
        for (times=1;times<betThree;times++)
        {
        cout <<"You need to bet the minimum bet"<<endl;
        cin >>betThree;
        cout <<"____________________________________"<<endl;
        }
    // to show all the cards of the player
    void PLAYER();
    totalMplayer = betOne + betTwo + betThree;
    {
        if (betThree)
        
                    cout <<"___***____***____***"<<endl;
                    cout <<endl;
                    cout <<"These are all your cards"<<endl;
                    cout<<card1<<"  ,  "<<card2<<"  ,  "<<card3<<endl;
                    cout <<endl;
                     if (card1 == card2||card2==card3||card1==card3)
                     {
                        cout <<"you have a pair!"<<endl;
                        cout <<"You get paid :"<<totalMplayer * 2<<endl;
                     }
                    
                     if (card1 == card2 == card3)
                     {
               cout << "you got 3 of a kind"<<endl;
                    cout <<endl;
                    cout <<endl;
                     }
playerPair = card1 == card2, card2 == card3, card1 == card3;  // to know what is a pair
pThrOfKind = (card1 == card2 == card3);  // to know what is a three of a kind 

    }
    if (!playerPair&&!pThrOfKind) // if there is no winning hands 
    {
    const int size = 3;
    int numbers[size] = {card1,card2,card3}; // to hold array of card numbers
    
    int count;
    
    
    highestOne = numbers[0];
    for(count = 1; count < size; count++)
    {
        if (numbers[count] >highestOne)
            highestOne = numbers[count];
    }
    cout <<"This is Your high card :"<<highestOne<<endl;
        
    
   }
   // to show the dealer cards     
   void DEALER();
   {
       card1 = rand()%11+1;
       card2 = rand()%11+1;
       card3 = rand()%11+1;
       if (betThree)
           cout <<"these are the dealer first two cards"<<endl;
           cout <<card1<<"  ,  "<<card2<<endl;
           cout <<endl;
           if (card1 == card2)
        cout <<"The dealer has a pair!"<<endl;
           cout <<endl;                 
           cout <<"This is the third card for the dealer:"<<endl;
           cout <<card3<<endl;
           cout <<endl;
           cout <<"______________________________________"<<endl;
           cout <<endl;
           cout <<"These are the dealer cards:"<<endl;
           cout <<card1<<"  ,  "<<card2<<"  ,  "<<card3<<endl;
           
           if (card1 == card2||card2==card3||card1==card3)
                        cout <<"The dealer has a pair!"<<endl;
           if (card1 == card2 == card3)
               cout << "The dealer has 3 of a kind"<<endl;
           cout <<endl;
           cout <<endl;
           dealerPair = card1 == card2, card2 == card3,card1 == card3;
           dThrOfKind = (card1 == card2 == card3);
   }
   
    if (!dealerPair&&!dThrOfKind)
    {
   
    int numbers[size] = {card1,card2,card3};
    highestTwo = numbers[0];
    for(count = 1; count < size; count++)
    {
        if (numbers[count] >highestTwo)
            highestTwo = numbers[count];        
    }
    cout <<"This is the dealer high card :"<<highestTwo<<endl;
    cout <<endl;
   }
   // to handle different card winning scenarios 
   void CASINO();
   {
       
       if (dealerPair || playerPair)
           cout <<"both of You have a pair"<<endl;
       
       if (playerPair > dealerPair)
       {
           cout <<"You win, you have the high pair"<<endl;
       cout <<"You get paid: "<<totalMplayer * payOne<<endl;
       }
       else if (dealerPair > playerPair)
               cout <<"The dealer wins"<<endl;
           
           
           if (pThrOfKind > dThrOfKind)
           {
               cout <<"You Win, your three of kinds beat the dealer"<<endl;
               cout <<"You get paid: "<<totalMplayer * payTwo<<endl;
           }
   }
   // to summarize the bets to the player 
   totalMplayer = betOne + betTwo+betThree;
   {
   cout <<"This is you total bet :" <<totalMplayer<<endl;
   }
   if(playerPair)
   { 
       cout <<"you get paid:"<<totalMplayer * payOne<<endl;
   }
   else if (pThrOfKind)
   {
       cout <<"You get paid"<<totalMplayer * payOne<<endl;
       
   }
   
   // this should separate the program from winning hands so that a 
   //winner can be determined by the highest card 
   else (DETERWIN);
   void DETERWIN ();
   {
    if (!dealerPair&&!dThrOfKind&&!playerPair&&!pThrOfKind)
        if (highestOne > highestTwo)
    {
        cout <<"You win, you have the high card"<<endl;
        cout <<"You get paid :"<<totalMplayer * 1<<endl;
        cout <<"your total money is :"<<totalMplayer + (totalMplayer *1)<<endl;
    }
    
        else if (highestTwo > highestOne)
    {
        cout <<"you loose to the dealer high card"<<endl;
    }
   }
  out.close();  // to close out file 
    return 0;
   }

