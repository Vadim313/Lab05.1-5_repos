#include "pch.h"
#include "CppUnitTest.h"
#include "../Project3/Project3.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest3
{
	TEST_CLASS(UnitTest3)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int z;
			int t = 1;
			z = s(2 * t + 1) + 2 * s(pow(t, 2)) + sqrt(s(1));
		}
	};
}
