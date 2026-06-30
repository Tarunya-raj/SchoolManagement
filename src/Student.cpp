#include "../include/Student.h"
#include <iostream>
std::pair<SMSy::StudentId_t ,std::unique_ptr<Student>> Student::createStudent()
{

	std::string sName, pName, contactDetails, address;
	uint32_t bday,byear, bMonth;
	SMSy::StudentId_t sId;
	std::cout<<"Registering Student Details....\n";
	std::cout<<"Enter student Name: ";
	std::cin>>sName;
	std::cout<<"Enter student Id: ";
	std::cin>>sId;
	std::cout<<"Enter Parent Name: ";
	std::cin>>pName;
	std::cout<<"Enter Address: ";
	std::getline(std::cin,address);
	std::cout<<"Bdate";
	std::cin>>bday;
	std::cout<<"BMonth: ";
	std::cin>>bMonth;
	std::cout<<"BYear: ";
	std::cin>>byear;
	return std::make_pair(sId, std::make_unique<Student>(sName, pName, sId, "", bday,bMonth, byear)); 

}
Student::Student(std::string sName,
			      	std::string pName,
			       	SMSy::StudentId_t studentId,
			       	std::string contactDetails="",
			       	uint32_t date, uint32_t month, uint32_t year,
			       	std::string address)
				: mStudentId(studentId), mStudentName(sName), mParentName(pName), 
				mAddress(address),mContactDetails(contactDetails),
				dob(date,month,year),status(SMSy::StudentStatus::Enrolled)
				
				{
		
				}

void Student::setName(const std::string_view ss) 
{
	this->mStudentName=std::string(ss);
}

std::string Student::getName() const
{
	return this->mStudentName;
}

std::string Student::getAddress() const 
{
	return this->mAddress;
}

void Student::setAddress(std::string_view ss)
{
	this->mAddress= std::string(ss);
}

void Student::modifyStatus(SMSy::StudentStatus instatus)
{
	this->status= instatus;

}

