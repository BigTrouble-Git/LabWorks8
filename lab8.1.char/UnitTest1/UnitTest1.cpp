#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\User\source\repos\lab8.1.char\Source.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			char str[101] = "ASF***";
			Change(str);
			Assert::AreEqual(str[4], '!');
		}
	};
}
