#pragma once

#include "TypeDeclaration.h"

class Camera
{
public:
	Camera();								//default constructor
	Camera(Camera &cam);					//copy constructor
	~Camera();								//destructor

	Vector3 GetPos();
	void SetPos(Vector3 pos);
	Vector3 GetFVect();
	void SetFVect(Vector3 fVect);
	double GetPitch();
	void SetPitch(double p);
	double GetYaw();
	void SetYaw(double y);
	void SetAngles(double p, double y);
	void Set(Vector3 pos, Vector3 fVect, double p, double y);

private:
	Vector3 position;						//position of the camera
	Vector3 forwardVect;					//the direction the camera is facing
	double pitch;							//the x-axis angle of the camera
	double yaw;								//the y-axis angle of the camera
};

