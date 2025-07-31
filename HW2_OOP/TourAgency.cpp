#include "TourAgency.h"
#include <iostream>
#include <cstring>
using namespace std;

TourAgency::TourAgency()
{
	m_arr = nullptr;
	m_size = 0;
}

TourAgency::~TourAgency()
{
	delete[] m_arr;
}

void TourAgency::addTour(const Tour& tour)
{
	Tour* temp = new Tour[m_size + 1];
	for (int i = 0; i < m_size; ++i) {
		temp[i] = m_arr[i];
	}
	temp[m_size] = tour;
	delete[] m_arr;
	m_arr = temp;
	m_size++;
}

void TourAgency::showAllTours() const
{
	if (m_size == 0) {
		cout << "No tours available.\n";
		return;
	}
	for (int i = 0; i < m_size; i++) {
		cout << "=== Tour #" << i + 1 << " ===\n";
		m_arr[i].showInfo();
		cout << endl;
	}
}

void TourAgency::deleteTourByName(const char* name)
{
	int index = -1;
	for (int i = 0; i < m_size; i++) {
		if (strcmp(m_arr[i].getName(), name) == 0) {
			index = i;
			break;
		}
	}

	if (index == -1) {
		cout << "Tour not found.\n";
		return;
	}
	Tour* temp = new Tour[m_size - 1];
	for (int i = 0, j = 0; i < m_size; i++) {
		if (i != index) {
			temp[j++] = m_arr[i];
		}
	}

	delete[] m_arr;
	m_arr = temp;
	m_size--;

	cout << "Tour deleted successfully.\n";
}

void TourAgency::searchByDestination(const char* destination) const
{
	bool found = false;
	for (int i = 0; i < m_size; i++) {
		if (strstr(m_arr[i].getDestination(), destination) != nullptr) {
			m_arr[i].showInfo();
			cout << endl;
			found = true;
		}
	}

	if (!found) {
		cout << "No tours found for destination: " << destination << endl;
	}
}

void TourAgency::sortByDestination()
{
	for (int i = 0; i < m_size - 1; i++) {
		for (int j = 0; j < m_size - i - 1; j++) {
			if (strcmp(m_arr[j].getDestination(), m_arr[j + 1].getDestination()) > 0) {
				Tour temp = m_arr[j];
				m_arr[j] = m_arr[j + 1];
				m_arr[j + 1] = temp;
			}
		}
	}
}

void TourAgency::sortByTransportCost()
{
	for (int i = 0; i < m_size - 1; i++) {
		for (int j = 0; j < m_size - i - 1; j++) {
			if (m_arr[j].getTransportCost() > m_arr[j + 1].getTransportCost()) {
				Tour temp = m_arr[j];
				m_arr[j] = m_arr[j + 1];
				m_arr[j + 1] = temp;
			}
		}
	}
}
