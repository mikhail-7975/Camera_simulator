#include "Lenses.h"

void Lense_18_55_f_3_5::Execute(ImageFacade& rawImage, ImageFacade& readyImage, size_t currentFocusDistanse, size_t currentApperture)
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
	return 0.0;
}

const double Lense_18_55_f_3_5::getMinApperture() const
{
	return 0.0;
}
