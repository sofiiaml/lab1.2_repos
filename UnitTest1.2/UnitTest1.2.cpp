#include "pch.h"
#include "CppUnitTest.h"
#include "../1.2/Book.h"
#include "../1.2/Book.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest12
{
	TEST_CLASS(UnitTest12)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Book b;
			b.Init("a", "b", "c", 2);
			b.Search("a");
			Assert::AreEqual(true,b.Search("a"));

		}
	};
}
