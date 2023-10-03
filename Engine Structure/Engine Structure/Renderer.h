#pragma once

#include "ObjectManager.h"
#include "Lighting.h"
#include "SceneManager.h"

class Renderer
{
public:
	void init();		//initialize things needed in display
	void display();		//what is shown to screen each frame
	void cleanup();		//what happens when the main game loop ends and no more displays are needed

private:

};

