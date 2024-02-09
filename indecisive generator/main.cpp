#include <iostream>
#include <string>
#include <vector>
#include <random>
#include <ctime>
using namespace std;

int main() {
  string userInput;
  vector<string> options;
  int randomNum;
  string eof;
  
  cout << "Indecisive Generator!" << endl << endl;
  cout << "Enter a Food/Place:" << endl;
  getline(cin, userInput);
  
  while (userInput != "Done") {
    cout << "Adding '" << userInput << "' to list. Enter another or type \"Done\" (case sensitive)." << endl;
    options.push_back(userInput);
    getline(cin, userInput);
  }

  srand(time(NULL));
  randomNum = (rand() % options.size());
  
  cout << endl << "The randomly selected Food/Place is '" << options.at(randomNum) << "'" << endl << endl;
  cout << "Enter any key to exit..." << endl;
  cin >> eof;

  return 0;
  }