#include "Tour.h"

char* copyStr(const char* src) {
    int len = strlen(src) + 1;
    char* dst = new char[len];
    strcpy_s(dst, len, src);
    return dst;
}

Tour::Tour()
{
    m_name = copyStr("Undefined");
    m_destination = copyStr("Undefined");
    m_meals = copyStr("Undefined");
    m_pricePerDay = 0.0;
    m_days = 0;
    m_transportCost = 0.0;
}

Tour::Tour(const char* name, const char* destination, float pricePerDay, int days, const char* meals, float transportCost)
{
    m_name = copyStr(name);
    m_destination = copyStr(destination);
    m_meals = copyStr(meals);
    m_pricePerDay = pricePerDay;
    m_days = days;
    m_transportCost = transportCost;
}

Tour::Tour(const Tour& other)
{
    m_name = copyStr(other.m_name);
    m_destination = copyStr(other.m_destination);
    m_meals = copyStr(other.m_meals);
    m_pricePerDay = other.m_pricePerDay;
    m_days = other.m_days;
    m_transportCost = other.m_transportCost;
}

Tour& Tour::operator=(const Tour& other)
{
    if (this != &other) {
        delete[] m_name;
        delete[] m_destination;
        delete[] m_meals;

        m_name = copyStr(other.m_name);
        m_destination = copyStr(other.m_destination);
        m_meals = copyStr(other.m_meals);
        m_pricePerDay = other.m_pricePerDay;
        m_days = other.m_days;
        m_transportCost = other.m_transportCost;
    }
    return *this;
}

Tour::~Tour()
{
    delete[] m_name;
    delete[] m_destination;
    delete[] m_meals;
}

const char* Tour::getName() const
{
    return m_name;
}

const char* Tour::getDestination() const
{
    return m_destination;
}

float Tour::getPricePerDay() const
{
    return m_pricePerDay;;
}

int Tour::getDays() const
{
    return m_days;
}

const char* Tour::getMeals() const
{
    return m_meals;
}

float Tour::getTransportCost() const
{
    return m_transportCost;
}

void Tour::showInfo() const
{
    cout << "Tour Name: " << m_name << endl;
    cout << "Destination: " << m_destination << endl;
    cout << "Price per day: " << m_pricePerDay << " UAH" << endl;
    cout << "Days: " << m_days << endl;
    cout << "Meals: " << m_meals << endl;
    cout << "Transport cost: " << m_transportCost << " UAH" << endl;
}
