#include "dependies.h"
#include"student.h"
#include "Passport.h"

using namespace std;

int main() {
	//Passport a("Peter", "John", "Orlov", 12, 5, 1993, 5, 10, 2015, "Floride, str. corcky 5");
	Foreign_passport jj("Peter", "John", "Orlov", 12, 5, 1993, 5, 10, 2015, "Floride, str. corcky 5", "ACDF4376");
	jj.Set_info_visa("USA visa due :2045");
	jj.Show_info_Passport();
	return 0;
}