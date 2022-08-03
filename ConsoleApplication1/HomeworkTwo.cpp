#include<iostream>
#include<list>
#include<string>
#include<vector>
using namespace std;


class HomeworkTwo {
public:
	void addValues()
	{
		cout << "Enter the size of the array";

		int size;

		cin >> size;

		auto** arr = new int* [size];

		for(int i =0; i < size; i++)
		{
			cout << "Enter the value";

			int* value = 0;

			cin >> * value;



			arr[i] =  value;

				
			cout << arr[i] << " is the value";
		}


		auto nigz = getDublicates(size, arr);

		for(auto i : nigz)
		{
			cout << i << "\n";
		}
		
	}

	vector<int> getDublicates(int arr_s, int ** numbers)
	{
		cout << "started";

		                                       
		vector<int> returnedValue;

		for(int i = 0; i < arr_s; i++)
		{
			for(int j = i+1; j < arr_s; j++)
			{
				if(numbers[i] == numbers[j])
				{
					returnedValue.push_back(*numbers[j]);
				}
			}
		}

		cout << "Ended";

		return returnedValue;
	}
};
