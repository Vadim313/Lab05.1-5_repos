#include "pch.h"
#include "CppUnitTest.h"
#include "../Project5/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest5
{
	TEST_CLASS(UnitTest5)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int n = 19;
			int level = 0;
			binary(n, level);
			f(n);

		}
	};
}
