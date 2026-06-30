#ifndef CLASSROOM_H
#define CLASSROOM_H
#include <cstdint>
#include <vector>
class ClassRoom{

	private:
		uint32_t mClassId;
		std::vector<uint32_t> studentList;
	public:
		[[nodiscard]] uint32_t getStudentCount() const;
};


#endif// CLASSROOM_H
