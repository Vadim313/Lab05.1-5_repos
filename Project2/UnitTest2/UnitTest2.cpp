#include "pch.h"
#include "CppUnitTest.h"
#include "../Project2/Project2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{
	TEST_CLASS(UnitTest2)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int n = 0;
			double s = 0;
			S(1, 1, n, s);
		}
	};
}
