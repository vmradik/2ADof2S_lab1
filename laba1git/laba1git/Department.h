#pragma once
#include <memory>
#include <vector>
#include "MailReceiver.h"
#include "Mediator.h"

class CDepartment: public CMailReceiver
{
public:
	CDepartment(void);
	~CDepartment(void);

	// CColleague interface
	void add_mediator(CMediator* mediator);
	void send_message(const std::string& message, const std::string& target_name);

	// CMailReceiver interface
	void receive_mail(const std::string& message, const std::string& target_name);
	void set_name(const std::string& name);
	std::string get_name();

	// Composite interface
	void add_mail_receiver(CMailReceiver* receiver);
	void remove_mail_receiver(CMailReceiver* receiver);
private:
	std::string m_department_name;
	CMediator* m_mail_mediator;
	std::vector<CMailReceiver*> m_mail_receivers;
};

