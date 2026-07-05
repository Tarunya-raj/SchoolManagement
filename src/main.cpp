#include <iostream>
#include <limits>
#include "SchoolManagement.h"
SMSy::Choice showMenu()
{
	while(true)
	{
		std::cout<<"Select Action:\n";
		std::cout<<"1. Add New Student to a class\n";
		std::cout<<"2. Delete student\n";
		std::cout<<"3. Add New Class\n";
		std::cout<<"4. Delete Class\n";
		std::cout<<"5. Add New Subject\n";
		std::cout<<"6. Delete Subject\n";
		std::cout<<"7. Modify Student Details\n";
		std::cout<<"8. Add Marks\n";
		std::cout<<"9. Select Student Subjects\n";
		std::cout<<"10. Exit\n";
		int choose;
		if(!(std::cin >> choose))
		{
			std::cout << "Invalid input, Enter a number: ";
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			continue;
		}
		if(choose >=static_cast<int>(SMSy::Choice::AddStudent) &&choose <=static_cast<int>(SMSy::Choice::Exit))
			return static_cast<SMSy::Choice>(choose);
		else
			std::cout<<"Enter valid range of integer\n";
	}
		

}

int main()
{
	static SMSy::StudentId_t nextStudentId=1;
	static SMSy::ClassId_t nextClassId=1;
	static SMSy::UserId_t nextUserId=1;
	static SMSy::SubjectId_t nextSubjectId=1;
	std::unique_ptr<SchoolManagement> smObj= std::make_unique<SchoolManagement>();
	smObj->registerUser(nextUserId++, SMSy::UserRole::Management, "M1User");
	smObj->registerUser(nextUserId++, SMSy::UserRole::Admin,"A1User");
	smObj->registerUser(nextUserId++, SMSy::UserRole::Admin, "A2User");
	smObj->registerUser(nextUserId++, SMSy::UserRole::Teacher, "T1User");
	smObj->registerUser(nextUserId++, SMSy::UserRole::Viewer, "V1User");
	bool running=true;

	
	while(running)
	{
		//SMSy::Choice choose=showMenu();
		try{
			SMSy::UserId_t userId;
			std::cout<<"Enter your Id: ";
			std::cin>>userId;
			SMSy::Choice choose= showMenu();
			switch(choose)
			{
				case SMSy::Choice::AddStudent:
					smObj->addStudent(userId,nextStudentId++);
					break;
				case SMSy::Choice::DeleteStudent:
					//smObj->deleteStudent();
					break;
				case SMSy::Choice::AddClass:
					//smObj->addNewClass(nextClassId++);
					break;
				case SMSy::Choice::DeleteClass:
					//smObj->deleteClass();
					break;
				case SMSy::Choice::AddSubjectPool:
					//smObj->addSubjectPool();
					break;
				case SMSy::Choice::DeleteSubjectPool:
					//smObj->deleteSubjectPool();
					break;
				case SMSy::Choice::ModifyStudentDetails:
					break;
				case SMSy::Choice::SelectStudentSubjects:
					break;
				case SMSy::Choice::Exit:
					running=false;
					break;


			}
		}
		
		catch (const std::exception& e)
		{
				std::cout<<"\nError: " << e.what()<<"\n";
		}
	}

	std::cout<<"Number of Student: " << smObj->getNumberOfStudents();
	return 0;
}
