#include "pch.h"
#include "CppUnitTest.h"
#include "../ConsoleApplication2/ConsoleApplication2.cpp"
#include "iostream"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace std;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Factorial objFact;
			double long expected = 120;
			int number = 5;

			//Test
			Assert::IsTrue(expected == objFact.FactorialCalculator(number));
		}
	};
}
