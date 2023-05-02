#include <iostream>
#include <vector>
#include <cctype> // tolower
#include <misc_functions.h>

int main() {
	// Setup
	int amount_of_semesters;
	std::vector<float> semester_gpas;
	bool failed_input;

	// Prompt # of semesters

	while (true) { // Integer check
		std::cout << "How many semesters? ";
		std::cin >> amount_of_semesters;

		if (std::cin.fail()) {
			// Reset Cin
			std::cin.clear();
			std::cin.ignore();

			// error prompt
			std::cout << "Input a numerical value" << std::endl;
		}
		else {
			break; // Correct input
		}
	}

	// Info per semester
	for (int semester = 0; semester < amount_of_semesters; semester++) {
		// Course loop setup
		int amount_of_courses;

		// Prompt # of courses 

		while (true) { // Integer check
			std::cout << "Amount of courses for semester " << semester + 1 << "? ";
			std::cin >> amount_of_courses;

			if (std::cin.fail()) {
				// Reset cin
				std::cin.clear();
				std::cin.ignore();

				// Error prompt
				std::cout << "Input a numerical value" << std::endl;
			}

		}

		// Course specific information
		std::vector<int> course_grades;
		char temporary_letter;

		for (int course = 0; course < amount_of_courses; course++) {
			// Prompt
			std::cout << "Course " << course + 1 << " grade (A-F): ";
			std::cin >> temporary_letter;

			// Conversion
			temporary_letter = std::tolower(temporary_letter);

			course_grades.push_back(Return_Scale(temporary_letter));
		}

		// Calculate gpa from course grades
		semester_gpas.push_back(Calculate_GPA(course_grades));
	}

	// CGPA
	float CGPA = Calculate_CGPA(semester_gpas);
	std::cout << "You CGPA is: " << CGPA << std::endl;
	
	return 0;
}