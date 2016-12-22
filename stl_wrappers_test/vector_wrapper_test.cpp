#include "stdafx.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace stl_wrappers_test
{
	TEST_CLASS(vector_wrapper_test)
	{
	public:
		
		TEST_METHOD(toStringMethod_addElement)
		{
			// Arrange
			std::string expectedOutput = "2";
			cVector<int> v1;

			// Act
			v1.add(2);
			std::string actualOutput = v1.toString();

			// Assert
			Assert::IsTrue(isStringsEqual(expectedOutput, actualOutput));
		}
		
		TEST_METHOD(testAddMethod_addTwoElements)
		{
			// Arrange
			std::string expectedOutput = "2,3";
			cVector<int> v1;

			// Act
			v1.add(2);
			v1.add(3);
			std::string actualOutput = v1.toString();

			// Assert
			Assert::IsTrue(isStringsEqual(expectedOutput, actualOutput));
		}

		TEST_METHOD(testSortAscMethod_addTwoElementsAndSortAsc)
		{
			// Arrange
			std::string expectedOutput = "2,3";
			cVector<int> v1;
			v1.add(3);
			v1.add(2);
			// Act
			v1.sortAsc();
			std::string actualOutput = v1.toString();

			// Assert
			Assert::IsTrue(isStringsEqual(expectedOutput, actualOutput));
		}

		TEST_METHOD(testSortAscMethod_addTwoElementsAndSortDesc)
		{
			// Arrange
			std::string expectedOutput = "2,1";
			cVector<int> v1;
			v1.add(1);
			v1.add(2);
			// Act
			v1.sortDesc();
			std::string actualOutput = v1.toString();

			// Assert
			Assert::IsTrue(isStringsEqual(expectedOutput, actualOutput));
		}

	};
}