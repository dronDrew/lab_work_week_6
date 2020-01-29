#pragma once
#include "dependies.h"
class Home_pet
{protected:
	std::string name;
	std::string sound;
	std::string species;
public:
	Home_pet(std::string name, std::string sound, std::string species);
	virtual void Sound() = 0;
	virtual void Show() = 0;
	virtual void Type() = 0;
};

class Dog:public Home_pet {
public:
	Dog(std::string name, std::string sound, std::string species);
	 void Sound() override;
	 void Show() override;
	 void Type() override;
};
class Cat :public Home_pet {
public:
	Cat(std::string name, std::string sound, std::string species);
	void Sound() override;
	void Show() override;
	void Type() override;
};
class hamster :public Home_pet {
public:
	hamster(std::string name, std::string sound, std::string species);
	void Sound() override;
	void Show() override;
	void Type() override;
};

