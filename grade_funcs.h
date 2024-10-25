#pragma once

double calculate_average(int student[], int size);
int find_max_student(int student[], int size);
int find_min_student(int student[], int size);
int count_pass_fail(int student[], int size);

double calculate_average(int student[], int size)
{
	int sum = 0;
	for (int i = 0; i < size; i++) {
		sum += student[i];
	}
	return (double)sum / size;

}

int find_max_student(int student[], int size)
{
	int max = student[0];
	for (int i = 1; i < size; i++) {
		if (student[i] > max) {
			max = student[i];
		}
	}
	return max;
}
int find_min_student(int student[], int size)
{
	int min = student[0];
	for (int i = 1; i < size; i++) {
		if (student[i] < min) {
			min = student[i];
		}
	}
	return min;
}
int count_pass_fail(int student[], int size)
{
	int pass=0, fail=0;
	for (int i = 0; i < size; i++) {
	if (student[i] >= 60)
	{
		pass++;
	}
	else
	{
		fail++;
	}
	
}