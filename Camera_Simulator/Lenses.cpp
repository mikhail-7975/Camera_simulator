#include "Lenses.h"

void Lense_18_55_f_3_5::Execute(ImageFacade& rawImage)
{
}

const size_t Lense_18_55_f_3_5::getMaxFocusDistanse() const
{
	return 18;
}

const size_t Lense_18_55_f_3_5::getMinFocusDistanse() const
{
	return 55;
}

const double Lense_18_55_f_3_5::getMaxApperture() const
{
	return 3.5;
}

const double Lense_18_55_f_3_5::getMinApperture() const
{
	return 25;
}

void Lense_18_55_f_3_5::increaseFocusDistance()
{
	if (_currentFocusDistanse <= getMaxFocusDistanse())
		_currentFocusDistanse++;
}

void Lense_18_55_f_3_5::decreaseFocusDistance()
{
	if (_currentFocusDistanse >= getMinFocusDistanse())
		_currentFocusDistanse--;
}

void Lense_18_55_f_3_5::increaseApperture()
{
}

void Lense_18_55_f_3_5::decreaseApperture()
{
}