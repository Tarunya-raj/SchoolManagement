#include <iostream>
#include "SchoolManagement.h"
SMSy::Choice showMenu()
{
	std::cout<<"Select Action:\n";
	std::cout<<"1. Add New Student to a class\n";
	std::cout<<"2. Delete student\n";
	std::cout<<"3. Add New Class\n;
	std::cout<<"4. Delete Class\n;
	std::cout<<"5. Add New Subject\n";
	std::cout<<"6. Modify Student Details\n;
	std::cout<<"7. Select Student Subjects\n;
	SMSy::Choice choose;
	
	
	std::cin<<choose;
	if
	return choose;
}

int main()
{
	std::unique_ptr<SchoolManagement> smObj= std::make_unique<SchoolManagement>();
	smObj->registerUser(1, SMSy::UserRole::Management, "M1User");
	smObj->registerUser(2, SMSy::UserRole::Admin,"A1User");
	smObj->registerUser(3, SMSy::UserRole::Admin, "A2User");
	smObj->registerUser(4, SMSy::UserRole::Teacher, "T1User");
	smObj->registerUser(5, SMSy::UserRole::Viewer, "V1User");
	boool running=true;
	SMSy::Choice choose;
	
	std::cin>>choose;
	while(running)
	{
		try{
			switch(choose)
			{
				case SMSy::AddStudent:
					smObj->addStudent(2);
					break;
				case SMSy::DeleteStudent:
					break;
				case SMSY::AddClass:
					break;
				case SMSy::DeleteClass:
					break;
				case SMSy::AddSubjectPool:
					break;
				case SMSy::DeleteSubjectPool:
					break;
				case SMSy::ModifyStudentDetails:
					break;
				case SMSy::SelectStudentSubjects:
					break;


			}
			catch (const std::exception& e)
			{
				std::cout<<"\nError: " << e.what()<<"\n";
			}
		}
	}


	//smObj->addStudent(2);
	//smObj->addStudent(3);
	//std::cout<<"Number of Student: " << smObj->getNumberOfStudents();
	return 0;
}
