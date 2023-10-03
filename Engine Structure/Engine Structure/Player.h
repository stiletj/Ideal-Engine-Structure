#pragma once

#include "Camera.h"
#include "TypeDeclaration.h"
#include "Physics.h"

class Player
{
public:
	Player();
	~Player();

	void movePlayer(Vector3 direction);						//moves the player in specified direction
	void rotatePlayer(double pitch, double yaw);			//rotates player and/or camera

	Camera GetCam();
	void SetCam(Camera);
	Vector3 GetPos();
	void SetPos(Vector3 pos);
	Vector3 GetRot();
	void SetRot(Vector3 rot);
	double GetMaxSpeed();
	void SetMaxSpeed(double max);
	double GetSpeed();
	void SetSpeed(double s);

private:
	Camera cam;								//player's camera
	Vector3 position;						//player's position
	Vector3 rotation;						//player's rotation
	double maxSpeed;						//maximum speed of the player
	double speed;							//current speed of the player

	void camMove();							//moves the camera to the position of the player
};

