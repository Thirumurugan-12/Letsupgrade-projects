#include <iostream>
#include <time.h>

using namespace std;


int lucky_number = time(0) % 10 + 1;
int score = 5;

bool play_again() {
    char answer ;
    cout << "______________" << endl;
    cout << "Do you want to play again (y/n): " << endl;
    cin >> answer;

    switch( answer ){
        case 'y' :
            {
                cout << " great lets play again !" << endl;
                return true;
            }

        case 'n' :
            {
                cout << " Thanks  for playing ! press any key to close" << endl ;
                cin.get();
                return false;
            }

             default:
            {
                cout << "Invalid input ! Please try again !" << endl;
                play_again();


            }

    }

}

bool guessing() {
    int guess ;
    cout << "guess thee lucky number : " << endl ;
    cin >> guess ;


    if ( guess > 10  || guess  < 0) {

        cout << "Enter a number between 1 and 10 da venna" << endl;
        guessing();
    }
    
    else { 
        cout << " So your guess is " << guess << endl;

        if (guess==lucky_number){
            cout << " You are lucky ur guess is right ! " << endl;

            cout << "Your score is " << score << endl ;
            bool answer = play_again();

            return answer;
        }
        else{
            cout << "Your are unlucky ur guess is wrong !" << endl;
            cout << "Try again !" << endl;
            score = score - 1;
            cout << "Chances left " << score << endl ;
            if (score <= 0) {
                cout << " You lost it idiot !" << endl;
                bool answer = play_again();
                
            }else {
                guessing();
            }
        }
    }
}
int main() {
    
    cout << lucky_number << endl;

    cout << "--------------------" << endl;
    cout << " Welcome to the game " << endl;
    cout << "----------------------" << endl;
    cout << endl;
    cout  << "You have 5 Chances to guess the lucky number !" << endl;
    cout << "Number will be between 1 to 10 !" << endl;
    cout << "Good Luck !" << endl;

    bool user_choice = guessing() ;

    if (user_choice) 
    {
        main();
    }
    else
    {   
        cin.get();
        return 0;
    }
    
}

