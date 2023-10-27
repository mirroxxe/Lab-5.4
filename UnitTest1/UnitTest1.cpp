#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab 5.4/Lab 5.4.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethodP0)
		{
			double t = P0();
			double expected = 1.00952e+12;
			double eps = 0.00001;

			Assert::AreEqual(t, 1.00952e+12, 0.00001);
		}

		TEST_METHOD(TestMethodP1)
		{
			double t = P1(1);
			double expected = 1.00952e+12; 
			double eps = 0.00001;

			Assert::AreEqual(t, 1.00952e+12, 0.00001);
		}

		};
	};
