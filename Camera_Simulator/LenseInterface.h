#pragma once

#include "ImageFacade.h"

class LenseInterface {
	LenseInterface() = default;
	virtual ~LenseInterface() = default;
	
	virtual void Execute(ImageFacade& img, size_t focusDistance, double apperture) = 0;

	virtual const double getMaxFocusDistanse() const = 0;
	virtual const double getMinFocusDistanse() const = 0;

	virtual const double getMaxApperture() const = 0;
	virtual const double getMinApperture() const = 0;
};