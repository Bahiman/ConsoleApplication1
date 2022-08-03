#include <iostream>

#include <string>

#include "AddSubtract.h"

using namespace std;


template<typename T>
void Print(T value) {
	std::cout << value << std::endl;

}



class AddSubtract {

public:

	static inline void  templEx() {
		Print("Venezuela");
	}

	void chooseYourDay() {
		int choice = 0;

		char c;

		cin >> c;

		switch (c)
		{
		case 1:
			cout << "Your choice was 1" << endl;
			break;

		case 2:
			cout << "Your choice as 2" << endl;

		case 3:
			cout << "Your choice was 3" << endl;

		case 4:
			cout << "Your choice was 4 " << endl;

		case 5:
			cout << "Your choice was 5" << endl;
		default:
			cout << "Your number is not from one to 5 so try aggain my nigga" << endl;
			break;
		}
	}


	string returnValue()
	{
		string bbb = "Bahramius";

		return bbb;
	}

	string returValue2() {
		string bbbb = "Venezuela";

		return bbbb;
	}
};
