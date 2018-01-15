/*
 * genericfactory.h
 *
 *  Created on: Oct 26, 2017
 *      Author: yliu
 */
#include "taskfactory.h"

#ifndef GENERICFACTORY_H_
#define GENERICFACTORY_H_

template<typename T>
class GenericFactory : public TaskFactory
{
public:
	Task* getTaskObject();
};

template<typename T>
Task* GenericFactory<T>::getTaskObject() {
	return new T();
}

#endif /* GENERICFACTORY_H_ */
