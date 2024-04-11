#include "pch.h"
#include "CppUnitTest.h"
#include "../8.1STRING/Pr8.1STRInG.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{ 
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			string testString = "pp SQ pp QS";
			Assert::AreEqual(1, Count(testString));
			Assert::AreEqual(string("pp *** pp ***"), Change(testString));
		}
	};
}