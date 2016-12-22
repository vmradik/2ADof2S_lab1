#pragma once
#include <vector>

#include "Mediator.h"
#include "MailReceiver.h"

class CMailMediator: public CMediator
{
public:
	void add_colleague(CColleague* colleague);
	void remove_colleague(CColleague* colleague);
	void process_message(const std::string& message, const std::string& target_name);

	CMailMediator(void);
	~CMailMediator(void);
private:
	std::vector<CMailReceiver*> m_colleagues;
};

