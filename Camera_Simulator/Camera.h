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
	void setLense(); //поставить объектив
	void takePhoto(); //"пропустить" изображение через объектив. 
	void showReadyImage();//показать готовое изображение
private:
	/*
	текущие значени€ фокусного рассто€ни€ и диафрагмы
	*/
	std::unique_ptr<LenseInterface> Lense;
	std::string lenseName;
	ImageFacade rawImage; //изображение, которое видит глаз
	ImageFacade reagyImage; //изображение, которое получаетс€ после прохождени€ через объектив
};