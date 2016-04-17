#include <iostream>
#include <math.h>
#define PI 3.14159
using namespace std;
//���������� ����� complex
class complex
{
public:
double x; //�������������� ����� ������������ �����
double y; //������ ����� ������������ �����
//����� ������ complex - ������� modul - ���
//���������� ������ ������������ �����
double modul()
{ return pow(x*x+y*y,0.5); }
//����� ������ complex - ������� argument ���
//���������� ��������� ������������ �����
double argument()
{ return atan2(y,x)*180/PI; }
//����� ������ complex - ������� show_copmlex ���
//������ ������������ �����
void show_complex()
{
if (y>=0) //����� ������������ ����� � ������������� ������ ������
cout<<x<<y<<"+"<<y<<"i"<<endl;
else //����� ������������ ����� � ������������� ������ ������
cout<<x<<y<<"i"<<endl;
}
};
//������� �������
int main()
{
setlocale(LC_ALL,"Rus");
//���������� ���������� chislo ���� complex
complex chislo;
//���������� �������������� ����� ������������ �����
chislo.x=2.5;
//���������� ������ ����� ������������ �����
chislo.y=-1.432;
//����� ������������ �����, chislo.show_complex() -
//��������� � ������ ������
chislo.show_complex();
//����� ������ ������������ �����, chislo.modul() -
//��������� � ������ ������
cout<<"������ ����� = "<<chislo.modul();
//����� ��������� ������������ �����, chislo.argument() -
//��������� � ������ ������
cout<<endl<<"�������� ����� = "<<chislo.argument()<<endl;
system("pause");
return 0;
}
