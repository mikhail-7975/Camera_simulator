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
	void setLense(); //��������� ��������
	void takePhoto(); //"����������" ����������� ����� ��������. 
	void showReadyImage();//�������� ������� �����������
private:
	/*
	������� �������� ��������� ���������� � ���������
	*/
	std::unique_ptr<LenseInterface> Lense;
	std::string lenseName;
	ImageFacade rawImage; //�����������, ������� ����� ����
	ImageFacade reagyImage; //�����������, ������� ���������� ����� ����������� ����� ��������
};