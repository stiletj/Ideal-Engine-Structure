#pragma once

#include <array>

#include "Player.h"
#include "TypeDeclaration.h"

class InputHandler
{
public:
	InputHandler();																//default constructor
	InputHandler(unsigned int f, unsigned int b, unsigned int l, unsigned int r, unsigned int j, unsigned int d);
	~InputHandler();															//destructor

	void look(double mouseX, double mouseY, double centreX, double centreY);	//uses the difference between mouse position and centre of screen to find pitch and yaw to rotate
	void move(KeyTrack keys);													//binds the movement keys and calls player's movement function
	void jump();																//binds jump action to a key and calls player's movement function with y value
	void dash();																//binds dash action to a key and calls player's movement function with extra magnitude

	unsigned int GetForwardBind();
	void SetForwardBind(unsigned int bind);
	unsigned int GetBackwardBind();
	void SetBackwardBind(unsigned int bind);


private:
	KeyTrack movementKeys;														//used to track which keys were pressed last frame so if press L while holding R will go L
	bool canJump;																//is allowed to jump
	bool canDash;																//is allowed to dash
	double sensitivity;															//mouse sensitivity
	unsigned int forwardBind;													//key bind for forward
	unsigned int backwardBind;													//key bind for backward
	unsigned int leftBind;														//key bind for left
	unsigned int rightBind;														//key bind for right
	unsigned int jumpBind;														//key bind for jump
	unsigned int dashBind;														//key bind for dash
};

