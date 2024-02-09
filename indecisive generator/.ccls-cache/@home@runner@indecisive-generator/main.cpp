#include <iostream>
#include <string>
#include <vector>
#include <random>
using namespace std;

int main() {
  string userInput;
  vector<string> options;
  int randomNum;
  
  cout << "Indecisive Generator!" << endl << endl;
  cout << "Enter a Food/Place:" << endl;
  getline(cin, userInput);
  
  while (userInput != "Done") {
    cout << "Adding '" << userInput << "' to list. Enter another or type \"Done\" (case sensitive)." << endl;
    options.push_back(userInput);
    cin >> userInput;
  }

  srand(time(NULL));
  randomNum = (rand() % options.size());
  
  cout << endl << "The randomly selected Food/Place is '" << options.at(randomNum) << "'" << endl;

  return 0;
}