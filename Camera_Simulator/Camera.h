#pragma once
#include "ImageFacade.h"
#include "LenseInterface.h"
#include <string>
#include <memory>

class camera {
public:
	camera() = default;
	/*
	методы, измен€ющие параметры объектива
	*/
	void setLense(LenseInterface& Lense); //поставить объектив
	void setRawImage(ImageFacade& rawImage);
	void takePhoto(); //"пропустить" изображение через объектив. 
	void showReadyImage();//показать готовое изображение
private:
	/*
	текущие значени€ фокусного рассто€ни€ и диафрагмы
	*/
	std::unique_ptr<LenseInterface> _Lense;
	ImageFacade _rawImage; //изображение, которое видит глаз
	ImageFacade _reagyImage; //изображение, которое получаетс€ после прохождени€ через объектив
};