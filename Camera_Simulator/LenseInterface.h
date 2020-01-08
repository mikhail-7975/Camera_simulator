#pragma once

#include "ImageFacade.h"

class LenseInterface {
public:
	LenseInterface() = default;
	virtual ~LenseInterface() = default;
	
	virtual void Execute(ImageFacade& rawImage,
						 ImageFacade& readyImage,
						 size_t currentFocusDistanse, 
						 size_t currentApperture) = 0;

	virtual const double getMaxFocusDistanse() const = 0;
	virtual const double getMinFocusDistanse() const = 0;

	virtual const double getMaxApperture() const = 0;
	virtual const double getMinApperture() const = 0;
};