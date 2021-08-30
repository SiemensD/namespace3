#include <iostream>
#include<string>

using namespace std;

namespace myNS
{
	class Point
	{
	public:
		virtual void Print() = 0;
	
	};

	class Point2D : public Point
	{
	public:
		Point2D() {}
		Point2D(int x, int y)
		{
			this->x = x;
			this->y = y;			
		}
		void Print() override
		{
			cout << "x= " << this->x << "\t y= " << this->y << endl;
		}

		~Point2D() {}

	private:

		int x = 0;
		int y = 0;
	};
	class Point3D: public Point
	{
	public:
		Point3D() {}
		Point3D(int x, int y, int z)
		{
			this->x = x;
			this->y = y;
			this->z = z;
		} 
		void Print() override
		{
			cout << "x= " << this->x << "\t y= " << this->y << "\t z= " << this->z << endl;
		}

		~Point3D(){}
		
	private:

		int x = 0;
		int y = 0;
		int z = 0;
	};

   
}

int main()
{
	myNS::Point2D point1(3, 15);
	point1.Print();

	myNS::Point3D point2(17, 25, 48);
	point2.Print();
    
}

/*Задание 3.
В рамках предыдущих самостоятельных и домашних за-
даний вы создали набор классов по работе с различными
примитивными математическими операциями (дробь,
точка в двумерном пространстве, точка в трехмерном
пространстве и т.д.). Разместите уже созданные классы в
пространствах имен. Продумайте правильную структуру
созданных пространств. Используя механизм пространств
напишите код по тестированию полученного решения.*/