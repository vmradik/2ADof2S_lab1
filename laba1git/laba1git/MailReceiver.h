#pragma once
#include <iostream>
#include <string>

#include "Colleague.h"

class CMailReceiver: public CColleague
{
public:
	virtual void receive_mail(const std::string& message, const std::string& target_name)=0;
	virtual void set_name(const std::string& name)=0;
	virtual std::string get_name(void)=0;
};

