#include "pch.h"
#include "CppUnitTest.h"
#include "../Project4/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest4
{
	TEST_CLASS(UnitTest4)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int K = 1;
			int N = 19;

			S0(K, N);
			S1(K, N, K);
			S3(K, N, K, 0);
			S4(K, N, K, 0);
		}
	};
}
