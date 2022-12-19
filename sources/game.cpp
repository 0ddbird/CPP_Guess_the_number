#include <iostream>
#include "../headers/game.h"
using namespace std;

void play() {
  bool gameOver{false};
  bool playerWon{false};
  int attemptsCount{10};
  int playerGuess{0};
  int valueToGuess{rand() % 100 + 1};

  while(!gameOver && attemptsCount > 0) {
    cout << "Il vous reste " << attemptsCount << " tentatives" << endl;
    cout << valueToGuess << endl;
    cout << playerGuess << endl;
    cout << "Veuillez saisir un nombre entre 1 et 100" << endl;
    cin >> playerGuess;
    if (playerGuess == valueToGuess) {
      gameOver = true;
      playerWon = true;
    }
    else if (playerGuess > valueToGuess) cout << "Trop élevé !" << endl;
    else cout << "Trop bas !" << endl;
    attemptsCount--;
  }

  if (playerWon) cout << "Felicitations, vous avez trouvé le nombre attendu : " << valueToGuess << " en " << 10 - attemptsCount << " tentatives." << endl;
  else cout << "Désolé, vous avez épuisé toutes vos tentatives !";
}