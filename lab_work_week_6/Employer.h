#pragma once
#include"dependies.h"
#include"Passport.h"
class Employer
{protected:
	std::string name;
	std::string surname;
	date day_of_bith;
	std::string Work_place;
	float Lenght_of_work_on_place;
public:
	Employer(std::string name, std::string surname);
	virtual void day_of_birth(int day,int mounth,int year) = 0;
	virtual void set_Work_place(std::string a) = 0;
	virtual void set_lenght_of_wokr(float lenght) = 0;
	virtual void Print() = 0;
};
class President:protected Employer {
public:
	President(std::string name, std::string surname);
	 void day_of_birth(int day, int mounth, int year)override;
	 void set_Work_place(std::string a)override;
     void set_lenght_of_wokr(float lenght)override;
	void Print()override;
};
class Manager :protected Employer {
public:
	Manager(std::string name, std::string surname);
	void day_of_birth(int day, int mounth, int year)override;
	void set_Work_place(std::string a)override;
	void set_lenght_of_wokr(float lenght)override;
	 void Print()override;
};
class Worker :protected Employer {
public:
	Worker(std::string name, std::string surname);
	void day_of_birth(int day, int mounth, int year)override;
	void set_Work_place(std::string a)override;
	void set_lenght_of_wokr(float lenght)override;
	void Print()override;
};