#include <iostream>
#include "../headers/constants.h"
#include "../sources/menu.cpp"
#include "../sources/game.cpp"
using namespace std;

int main() {
  bool gameOn{true};
  do {
    cout << "DEVINE LE NOMBRE" << endl;

    // Get player option
    MenuOption choice = gameMenu();

    switch (choice) {
      case MenuOption::PLAY:
        cout << "C'est parti !" << endl;
        play();
        break;
      case MenuOption::QUIT:
      case MenuOption::INCORRECT:
      default:
        cout << "Au revoir !" << endl;
        gameOn = false;
        break;
    }
  } while(gameOn);
  return EXIT_SUCCESS;
}