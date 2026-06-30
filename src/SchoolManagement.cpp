#include "../include/SchoolManagement.h"
#include <iostream>


void SchoolManagement::registerUser(SMSy::UserId_t userId, SMSy::UserRole role, std::string userName)
{
	std::unique_ptr<Users> uptr= std::make_unique<Users>(userId, userName, role);
	users.emplace(userId, std::move(uptr));	
}
void SchoolManagement::addSubject(const SMSy::UserId_t userId, const SMSy::SubjectId_t subjectId)
{
	//Check if user is authenticated to do so
	//if(users[userId]-> canModifySubjectPool())
	//	subjectPool->addSubjectToPool(subjectId, std::make_unique_ptr<Subject>())
}
SMSy::StudentId_t SchoolManagement::getNumberOfStudents()
{
	return students.size();
}
void SchoolManagement::addStudent(const SMSy::UserId_t userId_)
{
	//Create a student
	//
	SMSy::UserId_t userId;
	std::cout<<"Enter your Id: ";
	std::cin>>userId;
	if(users[userId]->canAddStudent())
	{
		students.emplace(Student::createStudent());

	}
	else
		throw std::runtime_error("Permission Denied");
}


