#pragma once
#include "dependies.h"
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
    virtual float cost_of_trip_pass(int distance, int passengerm, float price) = 0;
    virtual float time_of_trip_cargo(int distance, float cargo_weight) = 0;
    virtual float cost_of_trip_pass_cargo(int distance, float cargo_weight, float price) = 0;
};
class car :public Vehicle {
public:
    car(float Average_speed, int fuel_tank, int passenger_place, float carrying, float average_consumption);
    float time_of_trip_pass(int distance)override;
    float cost_of_trip_pass(int distance, int passenger, float price)override;
    float time_of_trip_cargo(int distance, float cargo_weight)override;
    float cost_of_trip_pass_cargo(int distance, float cargo_weight, float price)override;

};
class bike :public Vehicle {
public:
    bike(float Average_speed, int passenger_place, float carrying);
    float time_of_trip_pass(int distance)override;
    float cost_of_trip_pass(int distance, int passenger, float price)override;
    float time_of_trip_cargo(int distance, float cargo_weight)override;
    float cost_of_trip_pass_cargo(int distance, float cargo_weight, float price)override;

};
class gharry :public Vehicle {
public:
    gharry(float Average_speed, int passenger_place, float carrying);
    float time_of_trip_pass(int distance)override;
    float cost_of_trip_pass(int distance, int passenger, float price)override;
    float time_of_trip_cargo(int distance, float cargo_weight)override;
    float cost_of_trip_pass_cargo(int distance, float cargo_weight, float price)override;

};