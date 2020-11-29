#include "pch.h"
#include "CppUnitTest.h"
#include "../Project8.1.3/project8.1.3.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest813
{
	TEST_CLASS(UnitTest813)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int c;
			char s[9] = "12.4.6.8";
			c = find_index(s);
			Assert::AreEqual(c, 6);
		}
	};
}
