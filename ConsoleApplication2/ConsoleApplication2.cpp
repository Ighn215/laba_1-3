#include <iostream>
#include <cstring>

using namespace std;

class Student {
private:
	char name[100];
	char group[20];
	char fac[100];
	char city[100];
	char month[100];
	int phys;
	int math;
	int lit;
	int day;
	int year;
public:
	Student()
	{
		//создаем пустой объект
		name[0] = group[0] = fac[0] = '\0';
		phys = math = lit = 0;
	}

	//Адресс и год рождения
	Student(char city_)
	{

		city[0] = month[0] = '\0';
		day = year = 0;
	}

	~Student()
	{

	}

	//Методы редактирования личной информации
	void setCity(const char* city_)
	{
		strncpy_s(city, city_, 100);
	}
	void setDate(int d)
	{
		day = d;
	}
	void setMonth(const char* month_)
	{
		strncpy_s(month, month_, 100);
	}
	void setYear(int y)
	{
		year = y;
	}

	//методы редактирования полей
	void setName(const char* name_)
	{
		strncpy_s(name, name_, 100);
	}
	void setGroup(const char* group_)
	{
		strncpy_s(group, group_, 20);
	}
	void setFaculty(const char* fac_)
	{
		strncpy_s(fac, fac_, 100);
	}
	void setPhys(int p)
	{
		phys = p;
	}
	void setMath(int m)
	{
		math = m;
	}
	void setLit(int l)
	{
		lit = l;
	}

	//метод для вывода на экран информации о студенте
	void info()
	{
		cout << name << ", группа: " << group << ", факультет: " << fac << endl;
		cout << "Экзамены:" << endl;
		cout << "   - Физика " << phys << endl;
		cout << "   - Математика " << math << endl;
		cout << "   - Литература " << lit << endl;
	}
	//метод для вывода на экран персональной информации
	void personalinfo()
	{
		cout << "------------------------" << endl;
		cout << "Личная информация:" << endl;
		cout << "------------------------" << endl;
		cout << "Город:" << city << endl;
		cout << "Дата рождения:" << endl;
		cout << "   -День:" << day << endl;
		cout << "   -Месяц:" << month << endl;
		cout << "   -Год:" << year << endl;

	}

	//метод, считающий средний балл студента
	double average()
	{
		return (math + phys + lit) / 3.0;
	}

};

class Start {
private:
	Student* student;
public:
	Start()
	{
		student = new Student;
	}
	~Start()
	{
		delete student;
	}

	void run()
	{
		//редактирование полей
		student->setName("Райшин Алексей Александрович");
		student->setGroup("з-408П11-5");
		student->setFaculty("систем управления");
		student->setPhys(3);
		student->setMath(3);
		student->setLit(4);

		student->setCity("Барнаул");
		student->setDate(22);
		student->setMonth("Июнь");
		student->setYear(1996);



		//вывод информации
		student->info();


		//средний балл
		cout << "Средний балл " << student->average() << endl;

		student->personalinfo();
	}
};

int main() {
	setlocale(LC_ALL, "Russian");
	Start start;
	start.run();
	return 0;
}