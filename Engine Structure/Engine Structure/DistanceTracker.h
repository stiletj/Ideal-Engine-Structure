#pragma once

#include "TypeDeclaration.h"

class DistanceTracker
{
public:
	DistanceTracker();
	~DistanceTracker();

	double updateDistance(Vector3 playerPos, Vector3 startPos);		//updates the current distance travelled and percentage completion

	double GetCurrectDistance();
	void SetCurrentDistance(double distance);
	double GetMaxDistance();
	void SetMaxDistance(double max);
	double GetCompletion();
	void SetCompletion(double percentage);

private:
	double currentDistance;											//tracks current distance travelled
	double maxDistance;												//holds the maximum distance you can travel
	double completion;												//tracks the completion percentage based on current and max distance
};

