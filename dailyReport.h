#pragma once
#include <iostream>
#include <ctime>
using namespace std;

class Report
{
private:
	
	int countPlayGame;
	int prevTimeSeconds;
	int realTime;
	int bid;
	int win;
	int lose;
public:
	Report();
	Report(int, int, int, int, int, int);

	void setcountPlayGame(int);
	int getcountPlayGame();

	void setPrevTimeSeconds(int);
	int getPrevTimeSeconds();

	void setRealTime(int);
	int getRealTime();

	void setBid(int);
	int getBid();

	void setWin(int);
	int getWin();

	void setLose(int);
	int getLose();


	double ratioPrevRealTime();

	~Report(void);
};

