#pragma once
#include "ImageFacade.h"
#include "LenseInterface.h"
#include <string>
#include <memory>

class camera {
public:
	camera() = default;
	void setLense(LenseInterface& Lense); //поставить объектив
	void setRawImage(ImageFacade& rawImage);

	void increaseFocusDistance();
	void decreaseFocusDistance();

	void increaseApperture();
	void decreaseApperture();

	void takePhoto(); //"пропустить" изображение через объектив. 
	void showReadyImage();//показать готовое изображение
private:
	/*
	текущие значения фокусного расстояния и диафрагмы
	*/
	size_t _currentFocusDistanse;
	size_t _currentApperture;
	std::unique_ptr<LenseInterface> _Lense;
	ImageFacade _rawImage; //изображение, которое видит глаз
	ImageFacade _reagyImage; //изображение, которое получается после прохождения через объектив
};