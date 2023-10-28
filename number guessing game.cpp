#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;;
int main()
{
    cout<<"\n\t\t\t\t\tWelcome to Guessing The Number Game!"<<endl;
    cout<<"You have to guess the number between 1 to 100."
    "You'll have limited choice based on the level you choice. Good Luck!"<<endl;
    while(true)
    {
        cout<<"\n Enter the difficulty level: \n";
        cout<<"1 for easy!\t";
        cout<<"2 for medium!\t";
        cout<<"3 for difficult!\t";
        cout<<"0 for ending the game!\n"<<endl;

        //select the level of difficulty
        int difficultychoice;
        cout<<"Enter the number:";
        cin>>difficultychoice;

        //generating the secret number
        srand(time(0));
        int secretnumber=1+(rand()%100);
        int playerchoice;

        //difficulty level:Easy
        if(difficultychoice==1)
        {
            cout<<"\n You have 10 choices for finding the secret number between 1 and 100";
            int choicesleft=10;
            for(int i=1;i<=10;i++)
            {
                //prompting the player to guess the secret number
                cout<<"\n\n Enter the number: ";
                cin>>playerchoice;
                //determine if the playerchoice metches the secret number
                if(playerchoice==secretnumber)
                {
                    cout<<"Well played! You won, "
                    <<playerchoice<<"is the secret number"<<endl;
                    cout<<"\t\t\t Thanks for playing..."<<endl;
                    cout<<"Play the game again with us!!\n\n"<<endl;
                    break;
                }
                else
                {
                  cout<<"Nope,"<<playerchoice<<"is not right number\n";
                if(playerchoice>secretnumber)
                {
                    cout<<"The secret number is smaller than you have choosen"<<endl;
                }
                else{
                    cout<<"The secret number is greater then you have choosen"<<endl;
                }
                choicesleft--;
                cout<<choicesleft<<"choices left."<<endl;
                if(choicesleft==0)
                {
                    cout<<"You couldn't find the secret number,It was"
                    <<secretnumber
                    <<",You lose!!\n\n";
                    cout<<"play the game again to win!!!\n\n\n";
                }
            }
        }
    }
    //difficulty level:Medium
    else if(difficultychoice==2)
    {
        cout<<"\n You have 7 choices for finding the secret number between 1 and 100,";
        int choicesleft=7;
        for(int i=1;i<=7;i++)
        {
            //prompting the player to guess the secret number
            cout<<"\n Enter the number:";
            cin>>playerchoice;
            //determine if the playerchoice metches the secret number
            if(playerchoice==secretnumber)
            {
                cout<<"Well player! you won,"
                <<playerchoice<<"is the secret number"<<endl;
                cout<<"\t\t\tThanks for playing...."<<endl;
                cout<<"play the game again with us!!\n\n"<<endl;
                break;
            }
            else{
                cout<<"Nope, "<<playerchoice
                <<"is not right number\n";
                if(playerchoice>secretnumber)
                {
                cout<<"The secret number is smaller than the number you have choosen"<<endl;
                }
                else{
                    cout<<"The secret number is greater the number you have choosen"<<endl;
                }
                choicesleft--;
                cout<<choicesleft<<"choice left."<<endl;
                if(choicesleft==0)
                {
                    cout<<"You couldn't find the secret number,it was "
                    <<secretnumber<<",You lose!!\n\n";
                    cout<<"Play the game again to win!!\n\n";
                }
            }
        }
    }
    //difficulty level:difficult
    else if(difficultychoice==3)
    {
        cout<<"\n You have 5 choices for finding the secret number between 1 and 100.";
        int choicesleft=5;
        for(int i=1;i<=5;i++)
        {
            //prompting the player to guess the secret number
            cout<<"\nEnter the number: ";
            cin>>playerchoice;
            //determine if the playerchoice metches the secret number
            if(playerchoice==secretnumber)
            {
                cout<<"Well played! You won,"<<playerchoice
                <<",is the secret number"<<endl;
                cout<<"\t\t\tThanks for playing...."<<endl;
                cout<<"Play the game again with us!!\n\n"<<endl;
                break;
            }
            else
            {
                cout<<"Nope,"<<playerchoice<<" is not the right number\n";
                if(playerchoice>secretnumber)
                {
                    cout<<"The secret number is smaller than the number you have choosen"<<endl;
                }
                else
                {
                    cout<<"The secret number is greater than the number you have choosen"<<endl;
                }
                choicesleft--;
                cout<<choicesleft<<"choices left."<<endl;
                if(choicesleft==0)
                {
                 cout<<"You couldn't find the secret number,it was"
                 <<secretnumber<<",You lose!!\n\n";
                 cout<<"Play the game again with us!!\n\n";
                }
            }
        }
    }
    //To end the game
       else if(difficultychoice==0)
       {
           exit(0);
       }
       else
       {
           cout<<"Wrong choice, Enter valid choice to play the game!(0,1,2,3)"<<endl;
       }
    }
    return 0;
}
