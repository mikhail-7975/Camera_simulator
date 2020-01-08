#include "Camera.h"

void camera::takePhoto()
{
	_Lense->Execute(*_rawImage);
}

void camera::increaseFocusDistance()
{
	_Lense->increaseFocusDistance();
}

void camera::decreaseFocusDistance()
{
	_Lense->decreaseFocusDistance();
}

void camera::increaseApperture()
{
	_Lense->increaseApperture();
}

void camera::decreaseApperture()
{
	_Lense->decreaseApperture();
}
