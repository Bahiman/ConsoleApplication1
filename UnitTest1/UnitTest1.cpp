#include "pch.h"
#include "CppUnitTest.h"
#include "../ConsoleApplication1/AddSubtract.h"
#include <string>
#include "../ConsoleApplication1/AddSubtract.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

using namespace std;



namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		AddSubtract addSub;


		TEST_METHOD(TestMethod1)
		{

	
			string expected_name = "Venezuela";


			string ve = "Venezuela";

			string ves = addSub.returValue2();

			Assert::AreEqual(ve, ves);

		}

		TEST_METHOD(TestMethod2) {


			string name = addSub.returnValue();

			string namess = "Bahramius";

			Assert::AreEqual(name, namess);

		}

		//TEST_METHOD(TestMethod3) {
		//	string niggerz = "Bahram";

		//	Assert::AreNotEqual(niggerz, "Bagrab");

		//}
	};
}

