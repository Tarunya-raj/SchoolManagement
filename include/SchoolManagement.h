#ifndef SCHOOL_MANAGEMENT_H
#define SCHOOL_MANAGEMENT_H
#include "../common/include/common.h"
#include "Users.h"
#include <utility>
#include <memory>
#include <unordered_map>
#include <cstdint>
#include "../include/ClassRoom.h"
#include "../include/Student.h"
#include "../include/Subject.h"
class SchoolManagement{
	private:
		std::unordered_map<SMSy::StudentId_t, std::unique_ptr<Student>> students;
		std::unordered_map<uint32_t , ClassRoom> classes;
//		std::unordered_map<uint32_t , Subject> subjectPool;
		std::unordered_map<uint32_t , std::unique_ptr<Users>> users;
	public:
		void registerUser(SMSy::UserId_t userId, SMSy::UserRole role, std::string userName );
		void addSubject(const SMSy::UserId_t userId, const SMSy::SubjectId_t subjectId);
		void addStudent(const SMSy::UserId_t, const SMSy::StudentId_t);
		void deleteStudent(const SMSy::UserId_t, const SMSy::StudentId_t );
		[[nodiscard]] SMSy::StudentId_t getNumberOfStudents(); 
};
#endif

