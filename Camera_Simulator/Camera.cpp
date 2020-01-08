#include "Camera.h"

void camera::increaseFocusDistance()
{
	if (_currentFocusDistanse <= _Lense->getMaxFocusDistanse())
		_currentFocusDistanse++;
}

void camera::decreaseFocusDistance()
{
	if (_currentFocusDistanse >= _Lense->getMinFocusDistanse())
		_currentFocusDistanse--;
}

void camera::increaseApperture()
{
}

void camera::decreaseApperture()
{
}

void camera::takePhoto()
{
	_Lense->Execute(_rawImage, _reagyImage, _currentApperture, _currentFocusDistanse);
}
