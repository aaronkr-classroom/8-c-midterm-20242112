#include <stdio.h>
#include "grade_funcs.h"

int main() {
	int student[10] = { 85, 70, 55, 90, 45, 60, 78, 88, 92, 49 };

	double average = calculate_average(student, 10);
	int max_student = find_max_student(student, 10);
	int min_student = find_min_student(student, 10);
	int count_student = count_pass_fail(student, 10);

	
	printf("Average grade: %f\n", average);
	printf("highest grade: %d\n", max_student);
	printf("Lowest grade: %d\n", min_student);

	//printf("Grades above average: %d\n", );
	//printf("Grades above average: %d\n", );

	printf("Number of students passing: %d\n", count_student);
	printf("Number of students failing: %d\n", count_student);

	return 0;



}