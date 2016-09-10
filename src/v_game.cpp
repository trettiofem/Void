#include <iostream>

#include "v_game.h"
#include "v_input.h"
#include "v_planet.h"

// Currency: UCS (Universal Currency System)

/*
#include "io.h"
#include "shop.h"
*/

v_input     input;
v_planet    planet;

/*
v_io        io;
v_shop      shop;
*/

using std::cout;
using std::endl;


void v_game::mainMenu()
{
  // Void logo! Ignore this giant mess
  cout << " _    __      _     __\n| |  / /___  (_)___/ /\n| | / / __ \\/ / __  / \n| |/ / /_/ / / /_/ /  \n|___/\\____/_/\\__,_/   \n" << endl;

  cout << "1. Start\n2. Quit\n" << endl;
  switch (input.key())
  {
    case 1:
      v_game::clearScreen();
      v_game::mainGame();
    break;
    case 2:
      v_game::isRunning = false;
    break;
  }
}

void v_game::mainGame()
{
  cout << "Main Menu:\n\n1. Travel\n2. Ship\n3. Shop\n\n4. Save\n" << endl;
  switch (input.key())
  {
    case 1:
      v_game::clearScreen();
      planet.newPlanet();
      cout << planet.getPlanet() << endl;

      v_game::mainGame();
    break;
    case 2:
      // Ship
    break;
    case 3:
      // Shop
    break;
    case 4:
      // Save crap to disk
    break;
    // Add default
  }
}

// Misc functions

void v_game::clearScreen()
{
  cout << std::string(100, '\n');
}
