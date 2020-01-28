#include "Vehicle.h"
Vehicle::Vehicle() {
    this->average_consumption = 0;
    this->average_speed = 0;
    this->carrying = 0;
    this->fuel_tank = 0;
    this->passenger_place = 0;
}
car::car(float Average_speed, int fuel_tank, int passenger_place, float carrying, float average_consumption) :Vehicle() {
    this->average_speed = Average_speed;
    this->fuel_tank = fuel_tank;
    this->passenger_place = passenger_place;
    this->carrying = carrying;
    this->average_consumption = average_consumption;
}
float car::time_of_trip_pass(int distance) {
    float time_trip{ 0 };
    float distance_per_fuel_tank = ((this->fuel_tank / this->average_consumption) * 100);
    if (distance > distance_per_fuel_tank) {
        time_trip = distance / this->average_speed;
        while (distance > 0) {
            distance -= distance_per_fuel_tank;
            time_trip += 0.20f;
        }
    }
    else {
        time_trip = distance / this->average_speed;
    }
    return time_trip;
}
float car::cost_of_trip_pass(int distance, int passenger, float price) {
    float costs{ 0 };
    if (passenger > this->passenger_place) {
        std::cout << "Its no posible to drive this quont of passenger\n";
        return -1;
    }
    else {
        float fuel_spant = distance / this->average_consumption;
        costs = fuel_spant * price;
    }
    return costs;
}
float car::time_of_trip_cargo(int distance, float cargo_weight) {
    float time_trip{ 0 };
    float distance_per_fuel_tank = ((this->fuel_tank / this->average_consumption) * 100);
    if (distance > distance_per_fuel_tank) {
        if (cargo_weight > (this->carrying / 2)) {
            time_trip = distance / (this->average_speed - (this->average_speed * 10 / 1000));
        }
        else {
            time_trip = distance / this->average_speed;
        }
        while (distance > 0) {
            distance -= distance_per_fuel_tank;
            time_trip += 0.20f;
        }
    }
    else {
        time_trip = distance / this->average_speed;
    }
    return time_trip;
}
float car::cost_of_trip_pass_cargo(int distance, float cargo_weight, float price) {
    float costs{ 0 };
    float fuel_spant{ 0 };
    if (cargo_weight > (this->carrying * 1.2)) {
        std::cout << "Its no posible to drive oveloaded\n";
        return -1;
    }
    else {
        if (cargo_weight > this->carrying * 0.75) {
            fuel_spant = distance / (this->average_consumption * 1.15);
        }
        else {
            fuel_spant = distance / this->average_consumption;
        }
        costs = fuel_spant * price;
    }
    return costs;
}
bike::bike(float Average_speed, int passenger_place, float carrying) :Vehicle() {
    if (Average_speed > 30) {
        std::cout << "your speed biger than average we set it like 30 km/hour\n";
        this->average_speed = 30;
    }
    else if (average_speed <= 0) {
        this->average_speed = 0;
    }
    else {
        this->average_speed = Average_speed;
    }
    if (passenger_place > 2) {
        this->passenger_place = 2;
    }
    else if (passenger_place <= 0) {
        this->passenger_place = 1;
    }
    else {
        this->passenger_place = passenger_place;
    }
    if (carrying > 50.0f) {
        this->carrying = 50.0f;
    }
    else if (carrying <= 0) {
        this->carrying = 0;
    }
    else {
        this->carrying = carrying;
    }
    this->average_consumption = 25.0f;
}
float bike::time_of_trip_pass(int distance) {
    float time{ 0 };
    time = distance / this->average_speed;
    return time;
}
float bike::cost_of_trip_pass(int distance, int passenger, float price) {
    float time = this->time_of_trip_pass(distance);
    float cost = time * price;
    if (passenger > 1) {
        cost *= 1.2f;
        return cost;
    }
    return cost;
}
float bike::time_of_trip_cargo(int distance, float cargo_weight) {
    float time = this->time_of_trip_pass(distance);
    if (cargo_weight > 20.0f) {
        time *= 1.3f;
        return time;
    }
    return time;
}
float bike::cost_of_trip_pass_cargo(int distance, float cargo_weight, float price) {
    float time = this->time_of_trip_cargo(distance, cargo_weight);
    return time * price;
}
gharry::gharry(float Average_speed, int passenger_place, float carrying) : Vehicle() {
    if (Average_speed > 40) {
        std::cout << "your speed biger than average we set it like 30 km/hour\n";
        this->average_speed = 40;
    }
    else if (average_speed <= 0) {
        this->average_speed = 0;
    }
    else {
        this->average_speed = Average_speed;
    }
    if (passenger_place > 12) {
        this->passenger_place = 12;
    }
    else if (passenger_place <= 0) {
        this->passenger_place = 0;
    }
    else {
        this->passenger_place = passenger_place;
    }
    if (carrying > 750.0f) {
        this->carrying = 750.0f;
    }
    else if (carrying <= 0) {
        this->carrying = 0;
    }
    else {
        this->carrying = carrying;
    }
    this->average_consumption = 675.0f;
}
float gharry::time_of_trip_pass(int distance) {
    float time{ 0 };
    time = distance / this->average_speed;
    return time;
}
float gharry::cost_of_trip_pass(int distance, int passenger, float price) {
    float time = this->time_of_trip_pass(distance);
    float cost = time * price;
    if (passenger > 8) {
        cost *= 1.2f;
        return cost;
    }
    return cost;
}
float gharry::time_of_trip_cargo(int distance, float cargo_weight) {
    float time = this->time_of_trip_pass(distance);
    if (cargo_weight > 500.0f) {
        time *= 1.3f;
        return time;
    }
    return time;
}
float gharry::cost_of_trip_pass_cargo(int distance, float cargo_weight, float price) {
    float time = this->time_of_trip_cargo(distance, cargo_weight);
    return time * price;
}
