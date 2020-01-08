#include "Camera.h"

void camera::takePhoto()
{
	_Lense->Execute(_rawImage, _reagyImage, _currentApperture, _currentFocusDistanse);
}
