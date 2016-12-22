#include "User.h"


CUser::CUser(void)
{
}


CUser::~CUser(void)
{
}

// CColleague interface
void CUser::add_mediator(CMediator* mediator)
{
	m_mail_mediator = mediator;
}

void CUser::send_message(const std::string& message, const std::string& target_name)
{
	m_mail_mediator->process_message(message, target_name);
}

// CMailReceiver interface
void CUser::receive_mail(const std::string& message, const std::string& target_name)
{
	if (m_user_name == target_name)
	{
		std::cout<<"User "<<m_user_name<<" has received a message: "<<message<<std::endl;
	}
}

void CUser::set_name(const std::string& name)
{
	m_user_name = name;
}

std::string CUser::get_name(void)
{
	return m_user_name;
}