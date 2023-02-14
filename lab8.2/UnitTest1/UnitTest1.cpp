#include "pch.h"
#include "CppUnitTest.h"
#include "../Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			char str[100] = "QW3RTY"; // str[3] = "R"
			char cs[] = "1234567890";

			Delete(str, cs);
			Assert::AreEqual(str[2],'R');
		}
	};
}
