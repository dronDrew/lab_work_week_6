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
	virtual float time_of_trip_pass(int distance,int passenger) = 0;
	virtual float cost_of_trip_pass(int distance, int passenger) = 0;
	virtual float time_of_trip_cargo(int distance, int passenger) = 0;
	virtual float cost_of_trip_pass_cargo(int distance, int passenger) = 0;
};
class car:public Vehicle {
public:
	car(float Average_speed,int fuel_tank, int passenger_place,float carrying,float average_consumption);
	void Set_Average_speed(float Average_speed);
	void Set_fuel_tank(int fuel_tank);
	void Set_passenger_place(int passenger_place);
	void Set_carrying(float carrying);
	void Set_average_consumption(float average_consumption);
	virtual float time_of_trip_pass(int distance, int passenger)override;
	virtual float cost_of_trip_pass(int distance, int passenger)override;
	virtual float time_of_trip_cargo(int distance, int passenger)override;
	virtual float cost_of_trip_pass_cargo(int distance, int passenger)override;

};

