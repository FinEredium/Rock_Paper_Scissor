#include <iostream>
#include <ctime>
using namespace std;

int main(){
  while (true){
  cout << "Welcome one and all to a round of Rock, Paper, Scissors! (Enter P, R or S)\n";
  char inp;
  cout << "Player one: ";
  cin >> inp;
  cout << endl << endl;

  if (inp == 'r' or inp == 'R'){
    cout << "Player choose Rock\n";
  }
  else if (inp == 'p' or inp == 'P'){
    cout << "Player choose Paper\n";
  }
  else if (inp == 's' or inp == 'S'){
    cout << "Player choose Scissors\n";
  }
  time_t x = (int) time(0);
  srand(x);
  int random = rand() % (2 - 0 + 1) + 0;

  if (random == 0){
    cout << "Computer choose Rock\n";
  }
  else if (random == 1){
    cout << "Computer choose Paper\n";
  }
  else if (random == 2){
    cout << "Computer choose Scissors\n";
  }
  char b;
  cout << "Continue or Exit? (c/e): ";
  cin >> b;
  if (b == 'e'){
    break;
  }
  }
  return 0;
}

