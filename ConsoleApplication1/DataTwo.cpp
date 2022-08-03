#include <iostream>
#include<string>
using namespace std;

class TestAddition
{
private:

	static int year;

	static int day;

public:

	static int getDays() {
		return day;
	}

	static int getYears() {
		return year;
	}

	static void setDays(int dayz) {
		TestAddition::day = dayz;
	}

	static void setYears(int yearz) {
		TestAddition::year = yearz;
	}
};

