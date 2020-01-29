#include "Home_pet.h"
Home_pet::Home_pet(std::string name, std::string sound, std::string species) {
	this->name = name;
	this->sound = sound;
	this->species = species;
}
Dog::Dog(std::string name, std::string sound, std::string species) :Home_pet (name,sound,species) {
}
void Dog::Sound() {
	std::cout << "The Dog says : " << Home_pet::sound << std::endl;
}
void Dog::Show() {
	std::cout << "The Dog name is : " << Home_pet::name << std::endl;
}
void Dog::Type() {
	std::cout << "The Dog species is : " << Home_pet::species << std::endl;
}
Cat::Cat(std::string name, std::string sound, std::string species) : Home_pet(name, sound, species) {
}
void Cat::Sound() {
	std::cout << "The Cat says : " << Home_pet::sound << std::endl;
}
void Cat::Show() {
	std::cout << "The Cat name is : " << Home_pet::name << std::endl;
}
void Cat::Type() {
	std::cout << "The Cat species is : " << Home_pet::species << std::endl;
}
hamster::hamster(std::string name, std::string sound, std::string species) : Home_pet(name, sound, species) {
}
void hamster::Sound() {
	std::cout << "The hamster says : " << Home_pet::sound << std::endl;
}
void hamster::Show() {
	std::cout << "The hamster name is : " << Home_pet::name << std::endl;
}
void hamster::Type() {
	std::cout << "The hamster species is : " << Home_pet::species << std::endl;
}