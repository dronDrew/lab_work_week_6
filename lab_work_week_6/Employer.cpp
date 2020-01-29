#include "Employer.h"
Employer::Employer(std::string name, std::string surname) {
	this->name = name;
	this->surname = surname;
}
President::President(std::string name, std::string surnam) :Employer(name,surnam){}
void President::day_of_birth(int day, int mounth, int year) {
	Employer::day_of_bith.Set_date(day, mounth, year);
}
void President::set_Work_place(std::string a) {
	Employer::Work_place = a;
}
void President::set_lenght_of_wokr(float lenght) {
	Employer::Lenght_of_work_on_place = lenght;
}
void President::Print() {
	std::cout << "President of " << Employer::Work_place << std::endl;
	std::cout << "Name " << Employer::name << std::endl;
	std::cout << "Surname " << Employer::surname << std::endl;
	std::cout << "Date of Birth " << Employer::day_of_bith.Get_date() << std::endl;
	std::cout << "Pediod of heading country " << Employer::Lenght_of_work_on_place << std::endl;
}


Manager::Manager(std::string name, std::string surnam) : Employer(name, surnam) {}
void Manager::day_of_birth(int day, int mounth, int year) {
	Employer::day_of_bith.Set_date(day, mounth, year);
}
void Manager::set_Work_place(std::string a) {
	Employer::Work_place = a;
}
void Manager::set_lenght_of_wokr(float lenght) {
	Employer::Lenght_of_work_on_place = lenght;
}
void Manager::Print() {
	std::cout << "Name " << Employer::name << std::endl;
	std::cout << "Surname " << Employer::surname << std::endl;
	std::cout << "Date of Birth " << Employer::day_of_bith.Get_date() << std::endl;
	std::cout << "Company of work " << Employer::Work_place << std::endl;
	std::cout << "Pediod of working  " << Employer::Lenght_of_work_on_place << std::endl;
}

Worker::Worker(std::string name, std::string surnam) : Employer(name, surnam) {}
void Worker::day_of_birth(int day, int mounth, int year) {
	Employer::day_of_bith.Set_date(day, mounth, year);
}
void Worker::set_Work_place(std::string a) {
	Employer::Work_place = a;
}
void Worker::set_lenght_of_wokr(float lenght) {
	Employer::Lenght_of_work_on_place = lenght;
}
void Worker::Print() {
	std::cout << "Name " << Employer::name << std::endl;
	std::cout << "Surname " << Employer::surname << std::endl;
	std::cout << "Date of Birth " << Employer::day_of_bith.Get_date() << std::endl;
	std::cout << "Company of work " << Employer::Work_place << std::endl;
	std::cout << "Pediod of working  " << Employer::Lenght_of_work_on_place << std::endl;
}