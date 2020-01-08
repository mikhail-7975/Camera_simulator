#pragma once
#include "ImageFacade.h"
#include "LenseInterface.h"
#include <string>
#include <memory>

class camera {
public:
	camera() = default;
	void setLense(LenseInterface& Lense); //��������� ��������
	void setRawImage(ImageFacade& rawImage);

	void increaseFocusDistance();
	void decreaseFocusDistance();

	void increaseApperture();
	void decreaseApperture();

	void takePhoto(); //"����������" ����������� ����� ��������. 
	void showReadyImage();//�������� ������� �����������
private:
	/*
	������� �������� ��������� ���������� � ���������
	*/
	size_t _currentFocusDistanse;
	size_t _currentApperture;
	std::unique_ptr<LenseInterface> _Lense;
	ImageFacade _rawImage; //�����������, ������� ����� ����
	ImageFacade _reagyImage; //�����������, ������� ���������� ����� ����������� ����� ��������
};