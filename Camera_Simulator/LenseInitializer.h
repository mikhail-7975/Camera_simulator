#pragma once

#include <unordered_map>
#include <memory>

#include "LenseInterface.h"
#include "LenseInterface.h"
//class OperationInterface;

class Lense {
public:
	~Lense() = default;
	void Execute(ImageFacade& img, const std::string LensName, size_t focusDistance, double apperture);

	static const std::unique_ptr<Lense>& InitLense();
	void AddLense(LenseInterface* op);

private:
	Lense() = default;
	std::unordered_map<std::string, std::unique_ptr<LenseInterface>> m_Lenses;
};

template <typename T>
struct LenseRegistretor {
	LenseRegistretor() {
		Lense::InitLense()->AddLense(new T);
	}
};

#define REGISTER_LENSE(LenseName) static LenseRegistretor<LenseName> registernewRegister##LenseName