//contains all the scenes/states the game can be in, handles the actual switching between them.
//States for this game: 0 (game state), 1 (menu), 2 (leaderboard)

#pragma once

#include <vector>
#include "UI.h"

class SceneManager
{
public:
	SceneManager();
	SceneManager(std::vector<unsigned int> states, unsigned int currentState);
	~SceneManager();

	void switchState(unsigned int newState);			//switches the state variable to newState unless newState is not a valid state

	unsigned int GetState();
	void SetState();

private:
	unsigned int currentState;							//stores current state of the game as an unsigned int
	std::vector<unsigned int> validStates;				//stores all the possible states as unsigned ints

};

