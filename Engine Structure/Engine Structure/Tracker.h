#pragma once

#include "Timer.h"
#include "DistanceTracker.h"
#include <list>
#include <string>

class Tracker
{
public:
	Tracker();
	~Tracker();

	void readLeaderboardsFromFile();							//reads the leadreboard from 'leaderboardFile' and puts it into the 'leaderboard' linked list
	void printLeaderboardsToFile();								//prints leaderboard to file
	void findScore();											//retrieves current distance, completion percentage and time (puts into: dist, time and completion)
	void calculateOverall();									//calculates overall score of run based on time and completion

	DistanceTracker GetDistanceTracker();
	void SetDistanceTracker(DistanceTracker &distTrack);
	Timer GetTimer();
	void SetTimer(Timer &time);
	std::string GetLeaderboardFile();
	void SetLeaderboardFile(std::string file);
	std::list<double> GetLeaderboardTime();
	std::list<double> GetLeaderboardDist();
	std::list<int> GetLeaderboardOverall();
	double GetDist();
	double GetTime();
	double GetCompletion();

private:
	DistanceTracker distance;									//the distance tracker object
	Timer timer;												//the time tracking object

	std::string leaderboardFile;								//the filename for the leaderboard file
	std::list<double> leaderboardTime;							//the leaderboard for best times with 100% completion
	std::list<double> leaderboardDist;							//the leaderboard for most distance (completion)
	std::list<int> leaderboardOverall;							//Optional: overall leaderboard that takes into consideration: time and distance (completion)
	double dist;												//total distance of the given run
	double time;												//time taken to complete run
	double completion;											//completion percentage of run
	int overall;												//ovarall score of the run
};

