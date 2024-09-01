#include "pch.h"
#include "CppUnitTest.h"
#include "../Week35Project/Week35Project.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TestProject
{
	TEST_CLASS(MainCpp)
	{
	public:
		
		TEST_METHOD(TestHelloWorld)
		{
			std::string expected = "Hello World!\n";

			std::stringstream buffer;
			std::streambuf* sbuf = std::cout.rdbuf(); //Save cout's buffer
			std::cout.rdbuf(buffer.rdbuf()); //Redirect cout to buffer

			// Call HelloWorld in your test
			HelloWorld();

			// When finished, redirect cout to the original buffer 
			std::cout.rdbuf(sbuf);
			std::cout << "std original buffer: \n";
			std::cout << buffer.get();

			// Test
			Assert::AreEqual(expected, buffer.str());
		}

		TEST_METHOD(TestAddition)
		{
			int Expected = 8;
			int result = Addition(3, 5);
			Assert::AreEqual(Expected, result); //Positive test

			Expected = 0;
			result = Addition(0, 0);
			Assert::AreEqual(Expected, result); //Zero test

			Expected = -8;
			result = Addition(-3, -5);
			Assert::AreEqual(Expected, result); //Negative test

			Expected = 0;
			result = Addition(-3, 3);
			Assert::AreEqual(Expected, result); //Negative and positive test

			Expected = 0;
			result = Addition(3, -3);
			Assert::AreEqual(Expected, result); //Positive and negative test
		}
	};
}
/*
* sourced from https://learn.microsoft.com/en-us/visualstudio/test/getting-started-with-unit-testing?view=vs-2022&tabs=cpp%2Cmsunittest
* at september 1st 2024 20:25 CEST
*/