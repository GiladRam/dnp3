/**
 * Licensed to Green Energy Corp (www.greenenergycorp.com) under one or
 * more contributor license agreements. See the NOTICE file distributed
 * with this work for additional information regarding copyright ownership.
 * Green Energy Corp licenses this file to you under the Apache License,
 * Version 2.0 (the "License"); you may not use this file except in
 * compliance with the License.  You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * This project was forked on 01/01/2013 by Automatak, LLC and modifications
 * may have been made to this file. Automatak, LLC licenses these modifications
 * to you under the terms of the License.
 */
#ifndef __I_STACK_H_
#define __I_STACK_H_

#include "DestructorHook.h"

#include <openpal/executor/IExecutor.h>

#include <opendnp3/StackStatistics.h>


namespace asiodnp3
{

/**
* Base class for masters or outstations
*/
class IStack : public DestructorHook
{
public:	

	virtual ~IStack() {}

	/**
	* @return stack statistics counters
	*/
	virtual opendnp3::StackStatistics GetStackStatistics() = 0;	

	/**
	* Synchronously enable communications
	*/
	virtual bool Enable() = 0;

	/**
	* Synchronously disable communications
	*/
	virtual bool Disable() = 0;

	/**
	* Synchronously shutdown the endpoint. No more calls are allowed after this call.
	*/
	virtual void Shutdown() = 0;

};

}

#endif
