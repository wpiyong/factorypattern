/*
 * taskfactory.h
 *
 *  Created on: Oct 26, 2017
 *      Author: yliu
 */
#include "task.h"

#ifndef TASKFACTORY_H_
#define TASKFACTORY_H_

class TaskFactory
{
public:
	virtual Task* getTaskObject() = 0;
	virtual ~TaskFactory() {}

};



#endif /* TASKFACTORY_H_ */
