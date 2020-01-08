#pragma once
#include "ImageFacade.h"
#include "LenseInterface.h"
#include <string>
#include <memory>

class camera {
public:
	camera() = default;
	/*
	������, ���������� ��������� ���������
	*/
	void setLense(LenseInterface& Lense); //��������� ��������
	void setRawImage(ImageFacade& rawImage);
	void takePhoto(); //"����������" ����������� ����� ��������. 
	void showReadyImage();//�������� ������� �����������
private:
	/*
	������� �������� ��������� ���������� � ���������
	*/
	std::unique_ptr<LenseInterface> _Lense;
	ImageFacade _rawImage; //�����������, ������� ����� ����
	ImageFacade _reagyImage; //�����������, ������� ���������� ����� ����������� ����� ��������
};