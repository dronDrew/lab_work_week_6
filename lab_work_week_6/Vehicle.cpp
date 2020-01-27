#include "Vehicle.h"
Vehicle::Vehicle() {
	this->average_consumption = 0;
	this->average_speed = 0;
	this->carrying = 0;
	this->fuel_tank = 0;
	this->passenger_place = 0;
}
car::car(float Average_speed, int fuel_tank, int passenger_place, float carrying, float average_consumption):Vehicle() {
	this->average_speed = Average_speed;
	this->fuel_tank = fuel_tank;
	this->passenger_place = passenger_place;
	this->carrying = carrying;
	this->average_consumption = average_consumption;
}
float car::time_of_trip_pass(int distance, int passenger){}
float car::cost_of_trip_pass(int distance, int passenger){}
float car::time_of_trip_cargo(int distance, int passenger){}
float car::cost_of_trip_pass_cargo(int distance, int passenger){}