#pragma once
#include "ImageFacade.h"
#include "LenseInterface.h"
#include <string>
#include <memory>

class camera {
public:
	camera() = default;
	void setLense(LenseInterface& Lense) {}; //��������� ��������
	void setRawImage(ImageFacade& rawImage) {};

	void takePhoto(); //"����������" ����������� ����� ��������. 
	void showReadyImage() {};//�������� ������� �����������

	void increaseFocusDistance();
	void decreaseFocusDistance();

	void increaseApperture();
	void decreaseApperture();
private:
	std::unique_ptr<LenseInterface> _Lense;
	std::unique_ptr<ImageFacade> _rawImage; //�����������, ������� ����� ����
	std::unique_ptr <ImageFacade> _reagyImage; //�����������, ������� ���������� ����� ����������� ����� ��������
};