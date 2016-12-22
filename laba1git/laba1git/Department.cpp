#include "Department.h"


CDepartment::CDepartment(void)
{
}


CDepartment::~CDepartment(void)
{
	m_mail_receivers.clear();
}

void CDepartment::add_mediator(CMediator* mediator)
{
	m_mail_mediator = mediator;
}

void CDepartment::send_message(const std::string& message, const std::string& target_name)
{
	m_mail_mediator->process_message(message, target_name);
}

void CDepartment::receive_mail(const std::string& message, const std::string& target_name)
{
	if (m_department_name == target_name)
	{
		std::cout<<"Department "<<m_department_name<<" has received message: "<<message<<std::endl;
	}
	else
	{
		for (int i = 0; i < m_mail_receivers.size(); i++)
		{
			m_mail_receivers[i]->receive_mail(message, target_name);
		}
	}
}

void CDepartment::set_name(const std::string& name)
{
	m_department_name = name;
}

std::string CDepartment::get_name()
{
	return m_department_name;
}


// Composite interface
void CDepartment::add_mail_receiver(CMailReceiver* receiver)
{
	m_mail_receivers.push_back(receiver);
}

void CDepartment::remove_mail_receiver(CMailReceiver* receiver)
{
	for (int i = 0; i < m_mail_receivers.size(); i++)
	{
		if (m_mail_receivers[i] == receiver)
		{
			m_mail_receivers.erase(m_mail_receivers.begin()+i);
			break;
		}
	}
}


