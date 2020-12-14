#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_11.2(B)/Lab_11.2(B).cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestLab112B
{
	TEST_CLASS(UnitTestLab112B)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			student s;

			fstream file_s("E:\\Моя папка. Навчання\\Student [IK-11] [Дорожовець]\\Lab_11.2(B)\Lab_11.2(B)\\test", ios::binary);

			s.prizv = "sdsadasd";
			s.kurs = 3;
			s.specialization = (Special)2;
			s.phisuka = 4;
			s.matematic = 5;
			s.chuslo_metod = 4;

			file_s.write((char*)&s, sizeof(student));
			file_s.close();

			file_s.open("E:\\Моя папка. Навчання\\Student [IK-11] [Дорожовець]\\Lab_11.2(B)\Lab_11.2(B)\\test", ios::binary);

			s.prizv = "wddww";
			s.kurs = 2;
			s.specialization = (Special)3;
			s.phisuka = 4;
			s.matematic = 5;
			s.chuslo_metod = 4;

			file_s.write((char*)&s, sizeof(student));
			file_s.close();


			file_s.open("E:\\Моя папка. Навчання\\Student [IK-11] [Дорожовець]\\Lab_11.2(B)\Lab_11.2(B)\\test", ios::binary);

			s.prizv = "sfgdddf";
			s.kurs = 1;
			s.specialization = (Special)4;
			s.phisuka = 4;
			s.matematic = 4;
			s.chuslo_metod = 5;

			file_s.write((char*)&s, sizeof(student));
			file_s.close();

			ifstream file_ll("E:\\Моя папка. Навчання\\Student [IK-11] [Дорожовець]\\Lab_11.2(B)\Lab_11.2(B)\\test", ios::binary);
			double l = find_prozent(s, 3, file_ll);
			file_ll.close();


			Assert::AreEqual(l, 100.0);
		}
	};
}
