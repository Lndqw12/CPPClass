#include <iostream>
#include <math.h>
#define PI 3.14159
using namespace std;
//определяем класс complex
class complex
{
public:
double x; //действительная часть комплексного числа
double y; //мнимая часть комплексного числа
//метод класса complex - функция modul - для
//вычисления модуля комплексного числа
double modul()
{ return pow(x*x+y*y,0.5); }
//метод класса complex - функция argument для
//вычисления аргумента комплексного числа
double argument()
{ return atan2(y,x)*180/PI; }
//метод класса complex - функция show_copmlex для
//вывода комплексного числа
void show_complex()
{
if (y>=0) //вывод комплексного числа с положительной мнимой частью
cout<<x<<y<<"+"<<y<<"i"<<endl;
else //вывод комплексного числа с отрицательной мнимой частью
cout<<x<<y<<"i"<<endl;
}
};
//главная функция
int main()
{
setlocale(LC_ALL,"Rus");
//определяем переменную chislo типа complex
complex chislo;
//определяем действительную часть комплексного числа
chislo.x=2.5;
//определяем мнимую часть комплексного числа
chislo.y=-1.432;
//вывод комплексного числа, chislo.show_complex() -
//обращение к методу класса
chislo.show_complex();
//вывод модуля комплексного числа, chislo.modul() -
//обращение к методу класса
cout<<"Модуль числа = "<<chislo.modul();
//вывод аргумента комплексного числа, chislo.argument() -
//обращение к методу класса
cout<<endl<<"Аргумент числа = "<<chislo.argument()<<endl;
system("pause");
return 0;
}
