#include <iostream>
#include<time.h>
#include<stdio.h>
#include<cstdlib>
#include<string>
#include <sstream>
using namespace std;

class HomeworkOne

{
public:
	 void func() {
		srand(time(NULL));
		int a;

		cin >> a;

		int b;

		cin >> b;

		int sum = pow(a, 2) + pow(b, 2);

		cout << "The sum of squares is: " << sum << endl;

		string name;

		cin >> name;

		srand(static_cast<long long>(rand() * rand() / rand()) * rand() * time(NULL) % rand());

		int random = rand() % 200 + 100;

		string naming;

		stringstream  vv;

		vv << random;

		vv >> naming;

		name.append(naming);

		cout << name;

		//char bahram[10] = '';


		//switch (bahram) {
		//case :
		//	break;

		cin >> naming;


	
	}


};
