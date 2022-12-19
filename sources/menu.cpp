#include <iostream>
#include "../headers/menu.h"

using namespace std;

MenuOption gameMenu() {
  cout << static_cast<char>(MenuOption::PLAY) << " : jouer" << endl;
  cout << static_cast<char>(MenuOption::QUIT) << " : quitter" <<endl;
  char choiceInput;
  cin >> choiceInput;
  if (choiceInput == static_cast<char>(MenuOption::PLAY) || choiceInput == static_cast<char>(MenuOption::QUIT)) return static_cast<MenuOption>(choiceInput);
  else return MenuOption::INCORRECT;
}