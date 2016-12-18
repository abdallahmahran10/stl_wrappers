
/*
 * Author: Abdallah Mahran
 * file: ThreadsQueue.h
 * Description: Handle multiple threads
*/


#ifndef THREADS_QUEUE_H
#define THREADS_QUEUE_H

#include <thread>
#include <queue>

class cThreadsQueue
{
private:
	std::queue<std::thread> _mThreadsQueue;
public:
	cThreadsQueue(void);
	virtual ~cThreadsQueue(void);
};


#endif // THREADS_QUEUE_H