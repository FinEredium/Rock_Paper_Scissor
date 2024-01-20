/* CSCI 200: Assignment 1: A1 - Rock Paper Scissor Throw Down!
 *
 * Author: Fardin Ahmed
 * Resources used (Office Hours, Tutoring, Other Students, etc & in what capacity):
 *     None used
 *
 * Code follows direction. Input either r,p or s regardless of case sensitivity to
 * input rock,paper or scissor.
 */
#include <iostream>
#include <ctime>
#include <string>
using namespace std;

int main(){
  int win = 0;
  int loss = 0;
  int tie = 0;
  int index;
  char inp;
  while (true){
  cout << "Welcome one and all to a round of Rock, Paper, Scissors! (Enter P, R or S)\n";
  cout << "Player one: ";
  cin >> inp;
  cout << endl << endl;
  string list[3] = {"Rock","Paper","Scissor"};

  if (inp == 'r' or inp == 'R'){
    index = 0;
  }
  else if (inp == 'p' or inp == 'P'){
    index = 1;
  }
  else if (inp == 's' or inp == 'S'){
    index = 2;
  }
  else{
    continue;
  }
  cout << "Player choose " << list[index] <<"\n";
  time_t x = (int) time(0);
  srand(x);
  int random = rand() % (2 - 0 + 1) + 0;
  cout << "Computer choose "<< list[random] <<"\n\n";

  if (random == index){
    tie+= 1;
    cout << "Both players chose " << list[index] << "\nIt's a tie!\n\n";
  }
  else if ((random == 0 and index == 2) or (random == 1 and index == 0) or (random == 2 and index == 1)) {
    loss+= 1;
    cout << list[random] << " beats " << list[index] << "\nComputer Wins!\n\n";
  }
  else if ((index == 0 and random == 2) or (index == 1 and random == 0) or (index == 2 and random == 1)) {
    win+= 1;
    cout << list[index] << " beats " << list[random] << "\nPlayer Wins!\n\n";
  }
  char inp2;
  cout << "Do you want to play again? (Y/N) ";
  cin >> inp2;
  if (inp2 == 'N' or inp2 == 'n'){
    cout << "Thanks for playing!\nYou won " << win << " game(s), lost " << loss << " game(s), and tied " << tie << " game(s).\n";
    break;
  }
  else{
    continue;
  }
  }
  return 0;
}

