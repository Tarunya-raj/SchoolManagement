#include "../include/Users.h"

Users::Users(SMSy::UserId_t userId, std::string name, SMSy::UserRole role)
{
	this->userId= userId;
	this->role =role;
	this->mName= name;
}

bool Users::canRegisterUser()
{
	if(role == SMSy::UserRole::Management)
		return true;
	return false;
}
bool Users::canModifySubjectPool()
{
	if(role == SMSy::UserRole::Management)
		return true;
	return false;
}
bool Users::canWriteMarks()
{
	if(role == SMSy::UserRole::Teacher)
		return true;
	return false;
}
bool Users::canModifyStudentDetails()
{
	if(role ==SMSy::UserRole::Admin)
		return true;
	return false;
}
bool Users::canAddStudent()
{
	if(role == SMSy::UserRole::Admin)
		return true;
	return false;
}

