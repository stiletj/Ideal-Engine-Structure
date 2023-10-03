#pragma once
class Timer
{
public:
	Timer();
	Timer(double start, double increment);
	~Timer();

	void startTimer();				//starts timer
	void stopTimer();				//stops timer
	void pauseTimer();				//pauses timer
	void playTimer();				//play timer



private:
	double currentTime;				//current time
	double increment;				//how much to increment timer each millisecond
	double startTime;				//the time the timer starts at

	void incrementTimer();			//increment the timer
};

