#include "MailMediator.h"


CMailMediator::CMailMediator(void)
{

}


CMailMediator::~CMailMediator(void)
{
}

void CMailMediator::add_colleague(CColleague* colleague)
{
	m_colleagues.push_back(dynamic_cast<CMailReceiver*>(colleague));
}

void CMailMediator::remove_colleague(CColleague* colleague)
{

}

void CMailMediator::process_message(const std::string& message, const std::string& target_name)
{
	for (int i = 0; i < m_colleagues.size(); i++)
	{
		m_colleagues[i]->receive_mail(message, target_name);
	}
}
