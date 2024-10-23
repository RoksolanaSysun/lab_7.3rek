#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_7.3rek/lab_7.3rek.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest73rek
{
	TEST_CLASS(UnitTest73rek)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int rowCount = 3;
			int colCount = 3;
			int** a = new int* [rowCount];
			for (int i = 0; i < rowCount; i++)
				a[i] = new int[colCount];

			// Ініціалізуємо матрицю
			a[0][0] = 0; a[0][1] = 2; a[0][2] = 3;
			a[1][0] = 0; a[1][1] = 0; a[1][2] = 5;
			a[2][0] = 6; a[2][1] = 7; a[2][2] = 8;

			// Тестуємо RowWithMostZeroes
			int rowWithMostZeroes = RowWithMostZeroes(a, 0, 0, rowCount, colCount);
			Assert::AreEqual(2, rowWithMostZeroes); // Рядок з найбільшою кількістю нулів — 1

			// Очищення пам'яті
			for (int i = 0; i < rowCount; i++)
				delete[] a[i];
			delete[] a;
		}
	};
}
