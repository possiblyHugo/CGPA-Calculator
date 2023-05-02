#include <iostream>
#include <vector>
#include <cctype> // tolower
#include <misc_functions.h>

int main() {
	// Setup
	int amount_of_semesters;
	std::vector<float> semester_gpas;

	// Prompt # of semesters
	std::cout << "How many semesters? ";
	std::cin >> amount_of_semesters;

	// Info per semester
	for (int semester = 0; semester < amount_of_semesters; semester++) {
		// Course loop setup
		int amount_of_courses;

		// Prompt # of courses
		std::cout << "Amount of courses for semester " << semester + 1 << "? ";
		std::cin >> amount_of_courses;

		// Course specific information
		std::vector<int> course_grades;
		char temporary_letter;

		for (int course; course < amount_of_courses; course++) {
			// Prompt
			std::cout << "Course " << course + 1 << " grade (A-F): ";
			std::cin >> temporary_letter;

			// Conversion / Calculation
			temporary_letter = std::tolower(temporary_letter);

			course_grades.push_back(Return_Scale(temporary_letter));
		}

	}

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