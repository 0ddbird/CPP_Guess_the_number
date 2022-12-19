#include <iostream>
#include "menu.cpp"
#include "game.cpp"
using namespace std;

int main() {
  bool gameOn{true};
  do {
    cout << "DEVINEZ LE NOMBRE" << endl;

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
    }
  } while(gameOn);
  return EXIT_SUCCESS;
}