#include "DailyReport.h"

Report::Report()
{
}
Report::Report(int countPlayGame, int prevTimeSeconds, int realTime, int bid, int win, int lose)
{
	setcountPlayGame(countPlayGame);
	setPrevTimeSeconds(prevTimeSeconds);
	setRealTime(realTime);
	setBid(bid);
	setWin(win);
	setLose(lose);
}

void Report::setcountPlayGame(int countPlayGame)
{
	this->countPlayGame=countPlayGame;
}
int Report::getcountPlayGame()
{
	return countPlayGame;
}

void Report::setPrevTimeSeconds(int prevTimeSeconds)
{
	int x=1+rand()%3;
	if(x==1)
	{
		this->prevTimeSeconds=180;
	}
	if(x==2)
	{
		this->prevTimeSeconds=300;
	}
	if(x==3)
	{
		this->prevTimeSeconds=420;
	}
}
int Report::getPrevTimeSeconds()
{
	return prevTimeSeconds;
}

void Report::setRealTime(int realTime)
{
	this->realTime=realTime;
}
int Report::getRealTime()
{
	int realTime;
}

void Report::setBid(int bid)
{
	this->bid=bid;
}
int Report::getBid()
{
	return bid;
}

void Report::setWin(int win)
{
	this->win=win;
}
int Report::getWin()
{
	return win;
}

void Report::setLose(int lose)
{
	this->lose=lose;
}
int Report::getLose()
{
	return lose;
}
Report::~Report(void)
{
}
