#include <iostream>
#include <vector>
#include <cctype> // tolower
#include <misc_functions.h>

int main() {
	
	// Variables


	// Setup 
	int amount_of_courses;
	int amount_of_semesters;
	std::vector<int> course_grades;
	char temporary_letter_grade;

	// Calculated
	float GPA = 0;


	// Course taken
	std::cout << "How many courses were taken? " << std::endl;
	std::cin >> amount_of_courses;

	// Semesters taken
	std::cout << "How many semsters were taken?" << std::endl;
	std::cin >> amount_of_semesters;

	// Get course information
	for (int i = 0; i < amount_of_courses; i++) {
		std::cout << "Course " << i + 1 << " grade(A - F) : " << "\n";
		std::cin >> temporary_letter_grade;
		temporary_letter_grade = std::tolower(temporary_letter_grade);

		course_grades.push_back(Return_Scale(temporary_letter_grade));
;	}

	// Display GPA
	GPA = Calculate_GPA(course_grades);
	std::cout << GPA;
	

	return 0;
}