/* SHANE AHLERS */
    
#include <iostream>
#include <cstdlib>  // contains the rand() and srand() function 
#include <ctime>    // time() function
using namespace std;

srand(time(NULL));


//Variables: 
bool play(1);         // start game operator 
bool ask(0);          // ask wether to play again operator
int D1(0);          //Dice 1
int D2(0);           // Dice 2
int Score(1);         // Calculates score for players dice roll
bool Loser(0);        // Operator to then filter through to loss output
bool Winner(0);       // Operator to go to Winner output 
bool initial(1);         // sets variables to particular values for begining of game 

//initial call

initial = 1;
// sets initial values for reset of game 
while (initial = 1);
    play = 1;
    ask = 0;
    D1 = 0;
    D2 = 0;
    Score = 0;
    Winner = 0; 
    Loser = 0; 
return;

int main()
{ while play = (1) && Winner = (0);//Gamestart command
    initial = 0; 
{
    /* code */

    D1 = random(1, 6);
    D2 = random(1, 6);
    cout << "Dice 1 Rolled" << D1 << endl;
    cout << "Dice 2 Rolled" << D2 << endl; 

    Score = D1 + D2;
    cout << "The sum of your roll is" << Score << endl;  // Show player their current score 

    if Score = !(2, 3, 7, 11, 12);
        Winner = 0; 
        intitial = 1; 

    elif Score = (7 || 11); // Winner return 
        Winner = 1;
    
    else  // Score = 2,3,12  
        Loser = 1;   // Losing return

if Winner = (1);
    play = 0;
    cout << "Congradulations, you won! Your Score was" << Score << endl;   //Output with score
    ask = 1;  // returns to the ask value
if Loser = (1); // Losing output call 
    play = 0;
    cout << "You lost, better luck next time. Your Score was" << Score << endl;  // Output with score 
    ask = 1;    // return to ask output
if ask = (1);  
    cout << "Would you like to play again? (Y / N)" << endl;   // Decide if you want to play again 

    cin >> x;      
        if x = "Y";         
        initial = 1;   // update initial values for reset 
        else ;
        initial = 0;   // ends game 
                       // terminate program 

}

    srand(time(0)); // initialize random seed generator to current time: 
					// needed to generate a different sequence of random numbers
					// each time you run your program

    // Add your code to play the dice game here

}


