
#include <cstdlib>
#include <iostream>
#include <cmath>
#include <iomanip>
#include <ctime>
#include <fstream>

using namespace std;

void DEALER ();
void PLAYER ();
void CASINO();

int main(int argc, char** argv)
{
    int pair;
    int straight;
    int highCard;
    int pairHighCard;
    int threeOfKind;
    int payOne;
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
    int betThree;
    int times;
    char choice;
    char choiceTwo;
    char choiceThree;
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
    
    payOne = 2;
    payTwo = (bet * 3);
    payThree = (bet * 4);
    
    out.open("Casino.dat");
    
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
    cout <<"Please enter your bet below:"<<endl;
    cout <<"_____________________________"<<endl;
    cin >>betOne;
    cout <<"Do you want to play the Pair Plus Bonus?"<<endl;
    cin >>choiceTwo;
  
     if (choiceTwo=='y'||'Y')
        cout <<"Please enter your Pair Plus bet"<<endl;
            cin >> betTwo;
            if (betTwo < 5 )
                for (times = 1;times<betTwo;times++)
            {
                cout <<"You need to bet the minimum bet"<<endl;
                cin>>betTwo;
            }
            else if (betTwo > 100)
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
                for (times = 1;times<betTwo;times++)
            {
                cout <<"You need to bet under the Max bet"<<endl;
                cin>>betOne;
            }  
            
    cout <<endl;
    
    cout <<"here are you cards"<<endl;
    cout <<"___________________"<<endl;
    cout <<card1<<"  ,  "<<card2<<"  ,  "<<card3<<endl;
    
    if (card1 == card2 || card2==card3||card1==card3)
        cout <<"you have a pair!"<<endl;
       
    cout <<endl;
    cout <<"___________________"<<endl;
    cout <<endl;
    cout <<"Do you want to bet?"<<endl;
    cout <<"If you do please play at least the minimum bet"<<endl;
    cout <<"Or match your first hand bet, if it was over the min bet"<<endl;
    cin >>betThree;
    if (betThree < betOne || betThree < 5)
        for (times=1;times<betOne;times++)
        {
        cout <<"You need to bet the minimum bet"<<endl;
    cin >>betThree;
    cout <<"____________________________________"<<endl;
        }
    
    void PLAYER();
    totalMplayer = betOne + betTwo + betThree;
    {
        if (betThree)
        
            cout <<"Here is your third card:"<<endl;
                    cout <<card3<<endl;
                    cout <<"___***____***____***"<<endl;
                    cout <<"These are all your cards"<<endl;
                    cout<<card1<<"  ,  "<<card2<<"  ,  "<<card3<<endl;
                     if (card1 == card2||card2==card3||card1==card3)
                        cout <<"you have a pair!"<<endl;
                    cout <<"You get paid: "<<totalMplayer * payOne<<endl;
                    if (card1 == card2 == card3)
               cout << "you got 3 of a kind"<<endl;
                    cout <<endl;
                 
    }
    cout <<endl;
    
   void DEALER();
   {
       card1 = rand()%11+1;
       card2 = rand()%11+1;
       card3 = rand()%11+1;
       if (betThree)
           cout <<"these are the dealer cards"<<endl;
           cout <<card1<<"  ,  "<<card2<<endl;
           cout <<endl;
           if (card1 == card2)
        cout <<"you have a pair!"<<endl;
        
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
           
   }
   totalMplayer = betOne + betTwo+betThree;
   cout <<"This is you total bet :" <<totalMplayer<<endl;
  
  out.close();  
    return 0;
}


