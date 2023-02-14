#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\User\source\repos\lab8.1.rec\Source.cpp" 

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			char str[101] = "ASF***";
			char* dest = new char[151];
			dest = Change(dest,str,dest,0);
			Assert::AreEqual(dest[4], '!');
		}
	};
}
