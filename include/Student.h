#ifndef STUDENT_H
#define STUDENT_H
#include <string_view>
#include <string>
#include <cstdint>
#include <unordered_map>
#include "../common/include/common.h"
#include <utility>
#include <memory>
struct SubjectRecord{
	SMSy::SubjectId_t subjectID;
	int marks;
	char grade;
	
	public:
		[[nodiscard]] int getMark() const;
		[[nosdiscard]] char getGrade() const;
	private:
		void calculateGrade();
};
struct DOB{
	uint32_t mDate;
	uint32_t mMonth;
	uint32_t mYear;
	uint32_t mAge;
	public:
	[[nodiscard]] uint32_t getAge() const;
	DOB(uint32_t date, uint32_t month, uint32_t year): mDate(date), mMonth(month), mYear(year){}
	private:
		void calculateAge();
};
class Student{

	private:
		SMSy::StudentId_t mStudentId;
		std::string mStudentName;
		std::string mParentName;
		std::string mAddress;
		std::string mContactDetails;
		struct DOB dob;
		std::unordered_map<SMSy::SubjectId_t, SubjectRecord> subjectList;
		SMSy::StudentStatus status;

	public:
		explicit Student(std::string sName, std::string pName, SMSy::StudentId_t studentId, std::string contactDetails, uint32_t date=00, uint32_t month=00, uint32_t year=0000, std::string address="" );		
	public:
		static std::pair<SMSy::StudentId_t, std::unique_ptr<Student>> createStudent();
		Student(const Student &) =delete;
		Student& operator=(const Student&)= delete;
		Student(Student&&) = default;
		Student& operator=(Student&)= default;
		[[nodiscard]] std::string getName() const;
		void setName(std::string_view ss);
		[[nodiscard]] std::string getAddress() const;

		void setAddress(std::string_view ss) ;
		void modifyStatus(SMSy::StudentStatus status_);



};


#endif 
