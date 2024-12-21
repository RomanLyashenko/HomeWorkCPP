#include <iostream>
#include <string>;
#define en cout << endl; 
using namespace std;


struct Data
{
	string name;
	string lastName;
	string patronymic;
};
struct GroupInfo {
	string universityName;
	string faqultyName;
	int course;
	int group;
};
struct Date {
	int day;
	int month;
	int year;
};
struct Student {
	Data fullName;
	GroupInfo group;
	Date birthday;
};
void enter_studentData(Data& fio)
{
	cout << "Enter student's first name: ";
	cin >> fio.name;
	cout << "Enter student's last name: ";
	cin >> fio.lastName;
	cout << "Enter student's patronymic: ";
	cin >> fio.patronymic;
}
void enter_groupInfo(GroupInfo& group)
{
	cout << "Enter university name: ";
	cin >> group.universityName;
	cout << "Enter faqulty name: ";
	cin >> group.faqultyName;
	cout << "Enter course number: ";
	cin >> group.course;
	cout << "Enter group number: ";
	cin >> group.group;
}
void enter_date(Date& date)
{
	cout << "Enter student birth day only: ";
	cin >> date.day;
	cout << "Enter student birth month only: ";
	cin >> date.month;
	cout << "Enter student birth year: ";
	cin >> date.year;
}
void enter_student(Student& student) {
	enter_studentData(student.fullName);
	enter_groupInfo(student.group);
	enter_date(student.birthday);
}

void print_studentData(Data& fio)
{
	cout << "Student full name: " << fio.name << " " << fio.patronymic << " " << fio.lastName << endl;
}
void print_groupInfo(GroupInfo& group)
{
	cout << "University name: " << group.universityName << endl;
	cout << "Faqulty name: " << group.faqultyName << endl;
	cout << "Course number: " << group.course << endl;
	cout << "Group number: " << group.group << endl;
}
void print_date(Date date)
{
	cout << "Date: ";
	cout << date.day << '.' <<
		date.month << '.' << date.year << endl;
}
void print_student(Student& student) {
	print_studentData(student.fullName);
	print_groupInfo(student.group);
	print_date(student.birthday);
}

int dateDiffNum(Student& student1, Student& student2) {
	int date1 = (student1.birthday.year * 360) + (student1.birthday.month * 30) + student1.birthday.day;
	int date2 = (student2.birthday.year * 360) + (student2.birthday.month * 30) + student2.birthday.day;
	if (date1 < date2) swap(date1, date2);
	return date1 - date2;
}

Date dateDiffDate(Student student1, Student student2) {
	int date1 = (student1.birthday.year * 360) + (student1.birthday.month * 30) + student1.birthday.day;
	int date2 = (student2.birthday.year * 360) + (student2.birthday.month * 30) + student2.birthday.day;
	if (date1 < date2) swap(date1, date2);
	int diff = date1 - date2;
	Date differenceDate;
	differenceDate.day = diff % 30;
	differenceDate.month = diff % 360 / 30;
	differenceDate.year = diff / 360;
	return differenceDate;
}

Date datePlusDate(Date date, int days) {
	int date1 = (date.year * 360) + (date.month * 30) + date.day + days;
	Date finalDate;
	finalDate.day = date1 % 30;
	finalDate.month = date1 % 360 / 30;
	finalDate.year = date1 / 360;
	return finalDate;
}
bool biggerDate(Date date1, Date date2) {
	int date1Num = (date1.year * 360) + (date1.month * 30) + date1.day;
	int date2Num = (date2.year * 360) + (date2.month * 30) + date2.day;
	if (date1Num < date2Num) {
		return 1;
	}
	else {
		return 0;
	}
}
void print_student2(Student student) {
	int date1 = (student.birthday.year * 360) + (student.birthday.month * 30) + student.birthday.day;
	int finalDate = (2024 * 360 + 9 * 30 + 30) - date1;
	int finalDay = finalDate % 30;
	int finalMonth = finalDate % 360 / 30;
	int finalYear = finalDate / 360;
	cout << "Student " << student.fullName.name << " " << student.fullName.lastName << " " << student.fullName.patronymic << " is " << finalYear << " years "
		<< finalMonth << " months " << finalDay << " days old";
}
void studentsSurnamesSort(Student students[], int size) {
	for (int i = 0; i < size; i++) {
		bool flag = true;
		for (int j = 0; j < size - 1; j++) {
			if (int(students[j].fullName.lastName[0]) > int(students[j + 1].fullName.lastName[0]))
			{
				swap(students[j], students[j + 1]);
				flag = true;
			}
		}
		if (flag = false) {
			break;
		}
	}
}
void studentsAgeSort(Student students[], int size) {
	for (int i = 0; i < size; i++) {
		bool flag = true;
		for (int j = 0; j < size - 1; j++) {
			if (biggerDate(students[j].birthday, students[j + 1].birthday) == 0)
			{
				swap(students[j], students[j + 1]);
				flag = true;
			}
		}
		if (flag = false) {
			break;
		}
	}
}
int main()
{
	Student student1;
	enter_student(student1);
	en;
	print_student(student1);
	Student student2;
	en;
	enter_student(student2);
	en;
	print_student(student2);
	en;
	cout << "Difference: ";
	cout << dateDiffNum(student1, student2);
	cout << " days" << endl;
	cout << "Difference: ";
	print_date(dateDiffDate(student1, student2));
	cout << endl << "New ";
	print_date(datePlusDate(student1.birthday, 500));
	cout << endl << biggerDate(student1.birthday, student2.birthday) << endl;
	print_student2(student1);
	en;
	const int SIZE = 3;
	Student students[SIZE];
	for (int i = 0; i < SIZE; i++) {
		enter_student(students[i]);
		cout << endl;
		print_student(students[i]);
		en;
	}
	cout << endl << "Sorted last names" << endl;
	studentsSurnamesSort(students, SIZE);
	for (int i = 0; i < SIZE; i++) {
		print_student(students[i]);
		en;
	}
	cout << endl << "Sorted ages" << endl;
	studentsAgeSort(students, SIZE);
	for (int i = 0; i < SIZE; i++) {
		print_student(students[i]);
		en;
	}
	cout << endl << "Only 3rd course: ";
	for (int i = 0; i < SIZE; i++) {
		if (students[i].group.course == 3) {
			print_student(students[i]);
			en;
		}
	}

}