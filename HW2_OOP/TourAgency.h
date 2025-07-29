#pragma once
#include "Tour.h"
class TourAgency
{
private:
	Tour* m_arr;
	int m_size;
public:
	TourAgency();
	~TourAgency();

	void addTour(const Tour& tour);
	void showAllTours() const;
	void deleteTourByName(const char* name);
	void searchByDesination(const char* destination) const;
	void sortByDestination();
	void sortByTransportCost();

};

