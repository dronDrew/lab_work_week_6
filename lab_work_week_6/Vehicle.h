#pragma once
class Vehicle
{
protected:
	float average_speed;
	int fuel_tank;
	int passenger_place;
	float carrying;
	float average_consumption;
public:
	Vehicle();
	virtual float time_of_trip_pass(int distance) = 0;
	virtual float cost_of_trip_pass(int distance, int passenger) = 0;
	virtual float time_of_trip_cargo(int distance, float cargo_weight) = 0;
	virtual float cost_of_trip_pass_cargo(int distance, float cargo_weight) = 0;
};
class car:public Vehicle {
public:
	car(float Average_speed,int fuel_tank, int passenger_place,float carrying,float average_consumption);
	virtual float time_of_trip_pass(int distance )override;
	virtual float cost_of_trip_pass(int distance, int passenger)override;
	virtual float time_of_trip_cargo(int distance, float cargo_weight)override;
	virtual float cost_of_trip_pass_cargo(int distance, float cargo_weight)override;

};

