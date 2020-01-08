#pragma once

#include "ImageFacade.h"

class LenseInterface {
public:
	LenseInterface() = default;
	virtual ~LenseInterface() = default;
	
	virtual ImageFacade Execute(const ImageFacade& rawImage) = 0;

	virtual const size_t getMaxFocusDistanse() const = 0;
	virtual const size_t getMinFocusDistanse() const = 0;

	virtual const double getMaxApperture() const = 0;
	virtual const double getMinApperture() const = 0;

	virtual void increaseFocusDistance() = 0;
	virtual void decreaseFocusDistance() = 0;

	virtual void increaseApperture() = 0;
	virtual void decreaseApperture() = 0;
};