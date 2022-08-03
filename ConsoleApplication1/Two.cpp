#include <iostream>
#include <algorithm>
#include "Two.h"
#include <list>
#include<fstream>
using namespace std;

void Two() {

	list<int> niggass = {};

	int one = 0;

	cin >> one;

	niggass.push_back(one);


	int two = 0;

	cin >> two;


	niggass.push_back(two);

	int three = 0;
	cin >> three;

	niggass.push_back(three);

	int four = 0;

	cin >> four;

	niggass.push_back(four);



	for (int k : niggass) {
		cout << k << "\n";
	}

	cout << "Niggas" << "\n";

	auto anotherOne = [](string a, string b) {
		cout << "You are gay: " << a << "\n" << "And you are staright: " << b << "\n";
	};



	anotherOne("Atabey", "Bahram");

	auto nigger = "Nigger";


}																			