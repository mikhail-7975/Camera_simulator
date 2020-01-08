#pragma once
#include "ImageFacade.h"
#include <string>

class camera {
public:
	/*
	������, ���������� ��������� ���������
	*/
	void changeLense(); //��������� ������ ��������
	void takePhoto(); //"����������" ����������� ����� ��������. 
	//�������� ����� �� �������� � result = Operation_::InitOperation()->Execute(_firstNumber, _operationSymbol, _secondNumber);
	void showReadyImage();//�������� ������� �����������
private:
	/*
	������� �������� ��������� ���������� � ���������*/
   
	std::string lenseName;
	ImageFacade rawImage; //�����������, ������� ����� ����
	ImageFacade reagyImage; //�����������, ������� ���������� ����� ����������� ����� ��������
};