#include "auto_inh.h"
wheels::wheels() {
    this->quont_weel = 4;
    this->Quont_of_bolts = 0;
    this->radius_of_disc = 0;
}
void wheels::Set_specification_of_weel(int quont_of_wheel, int radius_os_disc, int Quont_of_bolts) {
    this->quont_weel = quont_of_wheel;
    this->radius_of_disc = radius_os_disc;
    this->Quont_of_bolts = Quont_of_bolts;
}
void wheels::Get_specific() {
    std::cout << this->quont_weel << " Wheels\n";
    std::cout << this->radius_of_disc << " Radius of disc in Wheel\n";
    std::cout << this->Quont_of_bolts << " Bolts in Wheel to fix\n";
}
Engine::Engine() {
    this->Tork_power = 0;
    this->Horse_power = 0;
    this->quont_cylinder = 0;
    this->type_of_fuel = "\0";
}
void Engine::Set_Engine_spec(std::string type_of_fuel, int quont_cylinder, int Horse_power, int Tork_power) {
    this->type_of_fuel = type_of_fuel;
    this->quont_cylinder = quont_cylinder;
    this->Horse_power = Horse_power;
    this->Tork_power = Tork_power;
}
void Engine::Get_engine_spec() {
    std::cout << "Fuel Type: " << this->type_of_fuel << std::endl;
    std::cout << this->quont_cylinder << " Cylinder\n";
    std::cout << this->Horse_power << " Horse power\n";
    std::cout << this->Tork_power << " Tork power\n";
}
Door::Door() {
    this->door_count = 4;
}
void Door::Set_door_count(int door_count) {
    if (door_count <= 1) {
        this->door_count = 2;
    }
    else {
        this->door_count = door_count;
    }
}
void Door::Get_door_count() {
    std::cout << this->door_count << " Doors\n";
}
Suspension::Suspension() {
    this->type = "\0";
}
void Suspension::Set_suspension(std::string type) {
    this->type = type;
}
void Suspension::Get_suspension() {
    std::cout << "Type suspension : " << this->type << std::endl;
}
Transmition::Transmition() {
    this->type = "\0";
    this->count_of_gear = 0;
}
void Transmition::Set_transmition_spec(std::string type, int count_of_gear) {
    this->type = type;
    this->count_of_gear = count_of_gear;
}
void Transmition::Get_transmision_spec() {
    std::cout << "Transmition Type: " << this->type << std::endl;
    std::cout << "Transmition Gears: " << this->count_of_gear << std::endl;
}
car_inh::car_inh(std::string Produser, std::string model, std::string Type_of_car) {
    this->Produser = Produser;
    this->model = model;
    this->Type_of_car = Type_of_car;
}
car_inh::car_inh() {
    this->Produser = "\0";
    this->model = "\0";
    this->Type_of_car = "\0";
}
void car_inh::Set_car_info(std::string Produser, std::string model, std::string Type_of_car) {
    this->Produser = Produser;
    this->model = model;
    this->Type_of_car = Type_of_car;
}
void car_inh::Get_car_info() {
    std::cout << "Car Produser : " << this->Produser << std::endl;
    std::cout << "Car Model : " << this->model << std::endl;
    std::cout << "Car Type : " << this->Type_of_car << std::endl;
    this->Get_door_count();
    this->Get_specific();
    this->Get_engine_spec();
    this->Get_suspension();
    this->Get_transmision_spec();
}
