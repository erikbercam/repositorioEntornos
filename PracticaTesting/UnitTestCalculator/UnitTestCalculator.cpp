#include "pch.h"
#include "CppUnitTest.h"
#include "../Calculator/Calculator.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;
namespace UnitTestCalculator
{
	TEST_CLASS(UnitTestCalculator)
	{
	public:
		TEST_METHOD(TestSuma)
		{
			a = 5;
			b = 7;
			sumar();
			Assert::AreEqual(12, suma,
				L"Error en la función sumar: el resultado no es el esperado.");
		}
		
		TEST_METHOD(TestResta)
		{
			a = 7;
			b = 5;
			restar();
			Assert::AreEqual(2, resta,
				L"Error en la función restar: el resultado no es el esperado.");
		}
		TEST_METHOD(TestMultiplica)
		{
			a = 5;
			b = 7;
			multiplicar();
			Assert::AreEqual(35, multi,
				L"Error en la función multiplicar: el resultado no es el esperado.");
		}
		TEST_METHOD(TestDivision)
		{
			a = 5;
			b = 7;
			división();
			Assert::AreEqual(1, divid,
				L"Error en la función dividir: el resultado no es el esperado.");
		}
	};
}

