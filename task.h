/*
 * task.h
 *
 *  Created on: Oct 26, 2017
 *      Author: yliu
 */

#ifndef TASK_H_
#define TASK_H_


class Task
{
public:
	virtual void execute() = 0;
	virtual ~Task() {}
};


#endif /* TASK_H_ */
