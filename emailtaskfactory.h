/*
 * emailtaskfactory.h
 *
 *  Created on: Oct 26, 2017
 *      Author: yliu
 */

#include "taskfactory.h"

#ifndef EMAILTASKFACTORY_H_
#define EMAILTASKFACTORY_H_

class EmailTaskFactory : public TaskFactory
{
public:
	Task* getTaskObject();
};



#endif /* EMAILTASKFACTORY_H_ */
