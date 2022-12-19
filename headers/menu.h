#ifndef MENU_H_INCLUDED
#define MENU_H_INCLUDED

enum class MenuOption {
  PLAY = 'j',
  QUIT = 'q',
  INCORRECT
};

MenuOption gameMenu(); 

#endif