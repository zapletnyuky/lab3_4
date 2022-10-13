// Lab_03_4.cpp
// Заплетнюк Юлія Іванівна
// Лабораторна робота No 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 7

#include <iostream>
using namespace std;

int main()
{
    double x;
    double y;
    double R;
  

    cout<<"x=";cin >>x; 
    cout<<"y=";cin >>y;
    cout<<"R=";cin >>R;
    //розгалуження в повній формі
    if ((x+R)*(x+R) + (y-R)*(y-R)<=R*R ||
        (y>=-R) && (x<=2*R))
        cout << "yes" << endl;
    else
        cout << "no" << endl;
cin.get();
return 0;
}