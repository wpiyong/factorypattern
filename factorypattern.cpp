/*
 * factorypattern.cpp
 *
 *  Created on: Oct 26, 2017
 *      Author: yliu
 */
#include "emailtaskfactory.h"
#include "genericfactory.h"
#include "emailtask.h"
#include "smstask.h"

void runTask(TaskFactory * taskFactory) {
	Task* taskPtr = taskFactory->getTaskObject();
	taskPtr->execute();
	delete taskPtr;
}

int main() {
	TaskFactory* taskFactory = new EmailTaskFactory();
	runTask(taskFactory);

	delete taskFactory;

	TaskFactory* taskFactory1 = new GenericFactory<EmailTask>();
	runTask(taskFactory1);
	delete taskFactory1;

	TaskFactory* taskFactory2 = new GenericFactory<SMSTask>();
	runTask(taskFactory2);
	delete taskFactory2;
	return 0;
}

