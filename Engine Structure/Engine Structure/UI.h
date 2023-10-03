//uses imgui or another GUI api to display a HUD, Menu and Leaderboard.

#pragma once

#include "Tracker.h"

class UI
{
public:
	UI();
	~UI();

	void displayMenu();
	void displayHUD();
	void displayLeaderboard();

private:

};

