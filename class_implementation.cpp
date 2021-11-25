#include <iostream>
#include <string>
#include "class_prototype.h"
using namespace std;

long Employee:: m_id = 0;

Employee::Employee()
{
    count_id = ++m_id;
}
void Employee::set_data()
{
    int count = 0;
    string name;
    cout << "enter name: ";
    cin >> name;
    for(int i = 0; i < name.length() ; ++i)
    {
        if(((name[i] > 64) && (name[i] < 91)) || ((name[i] > 96) && (name[i] < 123)))
        {
            count += 1;
        }
    }
    
    if(count == name.length())
    {
        m_name = name;
        
    }else
    {
        cout << "try again" << endl;
        cin >> name;
    }
    
}

void Employee::put_data()
{
    cout << "Name is: " << m_name << endl;
    cout << "ID is: " << m_id << endl;
}


// Polar class

Polar::Polar(){};

Polar::Polar(int x,int y)
{
    m_angle = y;
    m_radius = x;
}

Polar::~Polar(){};


void Polar::set_info(int x,int y)
{
    this->m_radius = x;
    this->m_angle = y;
}

void Polar::get_info()
{
    cout << "radius is: " << m_radius << endl;
    cout << "angle is: " << m_angle << endl;
}


Polar& Polar::operator+(Polar& other)
{
    Polar tmp;
    tmp.m_angle = this->m_angle += other.m_angle;
    tmp.m_radius = this->m_radius += other.m_radius;
    return tmp;
}