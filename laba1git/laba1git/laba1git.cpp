// Lab1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "MailMediator.h"
#include "Department.h"
#include "User.h"

int main()
{
	CMailMediator* mail_mediator = new CMailMediator();
	CDepartment* first_department = new CDepartment();
	first_department->set_name("First department");
	first_department->add_mediator(mail_mediator);
	CDepartment* second_department = new CDepartment();
	second_department->set_name("Second department");
	second_department->add_mediator(mail_mediator);
	CUser* first_user = new CUser();
	first_user->set_name("First user");
	first_user->add_mediator(mail_mediator);
	CUser* second_user = new CUser();
	second_user->set_name("Second user");
	second_user->add_mediator(mail_mediator);
	CUser* boss = new CUser();
	boss->set_name("Corporation boss");
	boss->add_mediator(mail_mediator);
	first_department->add_mail_receiver(first_user);
	second_department->add_mail_receiver(second_user);
	mail_mediator->add_colleague(first_department);
	mail_mediator->add_colleague(second_department);
	mail_mediator->add_colleague(boss);

	first_user->send_message("How are You?", "Second user");
	second_user->send_message("I am ill", "Second department");
	first_department->send_message("We've finished our work", "Corporation boss");
	boss->send_message("I'm still waiting for your report", "First department");

	delete boss;
	delete second_user;
	delete first_user;
	delete second_department;
	delete first_department;
	delete mail_mediator;
	return 0;
}

