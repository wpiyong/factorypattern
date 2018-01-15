/*
 * emailtaskfactory.cpp
 *
 *  Created on: Oct 26, 2017
 *      Author: yliu
 */


#include "emailtaskfactory.h"
#include "emailtask.h"

Task* EmailTaskFactory::getTaskObject() {
	return new EmailTask();
}
