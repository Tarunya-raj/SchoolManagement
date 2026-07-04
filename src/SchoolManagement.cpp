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
void SchoolManagement::addStudent(const SMSy::UserId_t userId,const SMSy::StudentId_t nextStudentId )
{
	//Create a student
	if(users[userId]->canManageStudentData())
	{
		students.emplace(Student::createStudent(nextStudentId));

	}
	else
		throw std::runtime_error("Permission Denied");
}

void SchoolManagement::deleteStudent(SMSy::UserId_t userId,SMSy::StudentId_t sId) 
{
	if(users[userId]->canManageStudentData())
	{
		//students.erase(sId);
	}
	else 
		throw std::runtime_error("Permission Denied\n");

}
