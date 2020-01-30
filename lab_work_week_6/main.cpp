#include "dependies.h"
#include"student.h"
#include "Passport.h"
#include"Vehicle.h"
#include"circle_in_squer.h"
#include "auto_inh.h"
#include"Stack_inheritance.h"
#include "Home_pet.h"
#include "are_figure.h"

using namespace std;

int main() {
	
	Circle_are q(10);
	Area_figure *p =&q;
	cout << p->Area() << endl;
	Triangle_are Q(60,20);
	p = &Q;
	cout << p->Area() << endl;
	rectangle_are pl(10, 20);
	p = &pl;
	cout << p->Area() << endl;

	

	return 0;
}Area_figure* pont;