#pragma once
#include "MailReceiver.h"
#include "Mediator.h"

class CUser: public CMailReceiver
{
public:
	CUser(void);
	~CUser(void);

	// CColleague interface
	void add_mediator(CMediator* mediator);
	void send_message(const std::string& message, const std::string& target_name);

	// CMailReceiver interface
	void receive_mail(const std::string& message, const std::string& target_name);
	void set_name(const std::string& name);
	std::string get_name(void);
private:
	std::string m_user_name;
	CMediator* m_mail_mediator;
};


