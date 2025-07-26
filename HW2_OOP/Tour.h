#pragma once
#include <iostream>
#include <cstring>
using namespace std;

class Tour
{
private:
	char* m_name;
	char* m_destination;
	float m_pricePerDay;
	int m_days;
	char* m_meals;
	float m_transportCost;
public:
	Tour();
	Tour(const char* name, const char* destination, float pricePerDay, int days, const char* meals, float transportCost);
	Tour(const Tour& other);
	Tour& operator = (const Tour& other);
	~Tour();

	const char* getName() const;
	const char* getDestination() const;
	float getPricePerDay() const;
	int getDays() const;
	const char* getMeals() const;
	float getTransportCost() const;

	void showInfo() const;
};

