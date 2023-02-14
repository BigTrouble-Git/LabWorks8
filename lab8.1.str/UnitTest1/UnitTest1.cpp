#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\User\source\repos\lab8.1.str\Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			string str[101] = {"ASF***"};
			string dest = Change(*str);
			Assert::AreEqual(dest[4], '!');
		}
	};
}
