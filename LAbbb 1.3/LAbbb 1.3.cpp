#include "pch.h"
#include "CppUnitTest.h"
#include "../lab 1.3/point.cpp"
#include "../lab 1.3/point.h"
#include "../lab 1.3/mine.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace LAbbb13
{
	TEST_CLASS(LAbbb13)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
            // Arrange
            Point p;
            double x = 3.0;
            double y = 4.0;

            // Act
            p.Init(x, y);

            // Assert
            Assert::AreEqual(x, p.getX());
            Assert::AreEqual(y, p.getY());

		}
	};
}
