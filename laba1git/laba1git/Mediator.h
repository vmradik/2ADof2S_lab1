#pragma once
#include "Colleague.h"

class CMediator
{
public:
	virtual void add_colleague(CColleague* colleague)=0;
	virtual void remove_colleague(CColleague* colleague)=0;
	virtual void process_message(const std::string& message, const std::string& target_name)=0;
};

