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
}

Tour::Tour(const Tour& other)
{
}

Tour& Tour::operator=(const Tour& other)
{
    // TODO: insert return statement here
}

Tour::~Tour()
{
}

const char* Tour::getName() const
{
    return nullptr;
}

const char* Tour::getDestination() const
{
    return nullptr;
}

float Tour::getPricePerDay() const
{
    return 0.0f;
}

int Tour::getDays() const
{
    return 0;
}

const char* Tour::getMeals() const
{
    return nullptr;
}

float Tour::getTransportCost() const
{
    return 0.0f;
}

void Tour::showInfo() const
{
}
