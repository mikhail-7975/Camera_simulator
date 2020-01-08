#pragma once

#include "LenseInterface.h"
/*class LenseInterface {
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
};*/

class Lense_18_55_f_3_5 final: public LenseInterface {
public:
	Lense_18_55_f_3_5() = default;
	virtual ~Lense_18_55_f_3_5() = default;

	void Execute(ImageFacade& rawImage,
				ImageFacade& readyImage,
				size_t currentFocusDistanse,
				size_t currentApperture) override;

	const size_t getMaxFocusDistanse() const override;
	const size_t getMinFocusDistanse() const override;

	const double getMaxApperture() const override;
	const double getMinApperture() const override;
};