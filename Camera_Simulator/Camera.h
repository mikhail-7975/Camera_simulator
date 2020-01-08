#pragma once
#include "ImageFacade.h"
#include "LenseInterface.h"
#include <string>
#include <memory>

class camera {
public:
	camera() = default;
	void setLense(LenseInterface& Lense) {}; //поставить объектив
	void setRawImage(ImageFacade& rawImage) {};

	void takePhoto(); //"пропустить" изображение через объектив. 
	void showReadyImage() {};//показать готовое изображение
private:
	std::unique_ptr<LenseInterface> _Lense;
	std::unique_ptr<ImageFacade> _rawImage; //изображение, которое видит глаз
	std::unique_ptr <ImageFacade> _reagyImage; //изображение, которое получается после прохождения через объектив
};