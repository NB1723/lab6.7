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
			Array a = { new int[5]{ 10, 7, 5, 4, 1 }, 5 };
			IFilter* f = new FilterEven;
			Array c = ArrayFilter(a, *f);
			Assert::AreEqual(*(c.start + 1), 4);
		}
	};
}
