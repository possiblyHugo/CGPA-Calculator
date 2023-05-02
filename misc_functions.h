#pragma once
#include <vector>

// Conversion functions

int Return_Scale(char letter_grade) {
	switch (letter_grade) {
		case 'a':
			return 4;
			break;
		case 'b':
			return 3;
			break;
		case 'c':
			return 2;
			break;
		case 'd':
			return 1;
			break;
		case 'f':
			return 0;
			break;
		default:
			return 0;
	}
}

// Calculation functions

float Calculate_GPA(std::vector<int> course_grades) {
	float added_grades = 0;
	for (int i = 0; i < course_grades.size(); i++) {
		added_grades += course_grades[i];
	}

	return added_grades / course_grades.size();
}

float Calculate_CGPA(std::vector<float> semester_grades) {
	float added_gpas = 0;
	for (int i = 0; i < semester_grades.size(); i++) {
		added_gpas += semester_grades[i];
	}

	return added_gpas / semester_grades.size();
}