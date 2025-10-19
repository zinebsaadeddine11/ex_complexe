#pragma once
class Complexe
{
private:

	float re;
	float img;

public:
	Complexe(float, float);
	void afficher() const;
	Complexe conjugue();
	float getRe() const;
	float getImg() const;
	/*Complexe add(Complexe c);*/ //le resultat d la somme est complexe donc le type de retour doit etre complexe
	Complexe operator+(const Complexe& c) const;
	Complexe operator-(const Complexe& c) const;
	Complexe operator*(const Complexe& c) const;
	Complexe operator/(const Complexe& c) const;
	bool operator==(const Complexe& c) const;
	bool operator!=(const Complexe& c) const;
	Complexe& operator=(const Complexe& c);
};
