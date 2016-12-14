#pragma once

#include <thread>
#include <queue>

class ThreadHandler
{
private:
	std::queue<std::thread> _mThreadsQueue;

public:
	ThreadHandler(void);
	virtual ~ThreadHandler(void);
};

