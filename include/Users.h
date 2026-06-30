#include "../common/include/common.h"
#include <string>
class Users
{
	private:
		uint32_t userId;
		SMSy::UserRole role;
		std::string mName;

	public:
		Users(SMSy::UserId_t, std::string , SMSy::UserRole);
		bool canRegisterUser(); //Management, 
		bool canModifySubjectPool(); //management 
		bool canWriteMarks(); // Teacher
		bool canAddStudent(); //Admin
		//bool canViewDetails(UserRole); //Management, Teacher, Admin, viewer

	       //bool canRead(uint32_t userId); //managemnet Admin, Teacher, Viewer ALL	


		bool canModifyStudentDetails();
};
