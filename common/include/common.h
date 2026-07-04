#ifndef COMMON_
#define COMMON_
#include <cstdint>
namespace SMSy
{
using StudentId_t = uint32_t;
using ClassId_t= uint32_t;
using UserId_t= uint32_t;
using SubjectId_t = uint32_t;

enum class SubjectPool{
	MATHEMATICS,
	SCIENCE,
	ENGLISH,
	HINDI,
	HISTORY,
	PHYSICAL_EDUCATION,
	POLITY
};
enum class Grade{
	A,
	B,
	C,
	D,
	E,
	F
};
enum class UserRole{
	Management,
	Admin,
	Teacher,
	Viewer
		
};

enum class StudentStatus{
	Enrolled,
	Promoted,
	NotPromoted
};

enum class Choice
{
	AddStudent=1,
	DeleteStudent,
	AddClass,
	DeleteClass,
	AddSubjectPool,
	DeleteSubjectPool,
	ModifyStudentDetails,
	AddMarks,
	SelectStudentSubjects,
	Exit
};
}

#endif
