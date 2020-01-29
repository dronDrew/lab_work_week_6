#pragma once
#include "dependies.h"
class wheels {
    int quont_weel;
    int radius_of_disc;
    int Quont_of_bolts;
public:
    wheels();//done
    void Set_specification_of_weel(int quont_of_wheel, int radius_os_disc, int Quont_of_bolts);//done
    void Get_specific();//done
};
class Engine {
    std::string type_of_fuel;
    int Horse_power;
    int Tork_power;
    int quont_cylinder;
public:
    Engine();//done
    void Set_Engine_spec(std::string type_of_fuel, int quont_cylinder, int Horse_power, int Tork_power);
    void Get_engine_spec();//done
};
class Door {
    int door_count;
public:
    Door();//done
    void Set_door_count(int door_count);//done
    void Get_door_count();//done
};
class Suspension {
    std::string type;
public:
    Suspension();//done
    void Set_suspension(std::string type);//done
    void Get_suspension();//done
};
class Transmition {
    std::string type;
    int count_of_gear;
public:
    Transmition();//done
    void Set_transmition_spec(std::string type, int count_of_gear);//done
    void Get_transmision_spec();//done
};
class car_inh : public Engine, public wheels, public Door, public Suspension, public Transmition
{
    std::string Produser;
    std::string model;
    std::string Type_of_car;
public:
    car_inh();//done
    car_inh(std::string Produser, std::string model, std::string Type_of_car);//done
    void Set_car_info(std::string Produser, std::string model, std::string Type_of_car);//done
    void Get_car_info();//done;
};
