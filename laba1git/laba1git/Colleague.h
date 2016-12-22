#pragma once
#include <string>

class CMediator;

class CColleague
{
public:
	virtual void add_mediator(CMediator* mediator)=0;
	virtual void send_message(const std::string& message, const std::string& target_name)=0;
};

