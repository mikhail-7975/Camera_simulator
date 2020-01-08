#pragma once
#include "ImageFacade.h"
#include <string>

class camera {
public:
	/*
	методы, измен€ющие параметры объектива
	*/
	void changeLense(); //поставить другой объектив
	void takePhoto(); //"пропустить" изображение через объектив. 
	//работать будет по аналогии с result = Operation_::InitOperation()->Execute(_firstNumber, _operationSymbol, _secondNumber);
	void showReadyImage();//показать готовое изображение
private:
	/*
	текущие значени€ фокусного рассто€ни€ и диафрагмы*/
   
	std::string lenseName;
	ImageFacade rawImage; //изображение, которое видит глаз
	ImageFacade reagyImage; //изображение, которое получаетс€ после прохождени€ через объектив
};