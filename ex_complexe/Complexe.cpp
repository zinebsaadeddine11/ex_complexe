#include "Complexe.h"
#include <iostream>
using namespace std;

Complexe::Complexe(float a,float b):re(a) , img(b)
{
}

void Complexe::afficher() const
{

    if (img >= 0)
        cout << this->re << "+i"<< this->img << endl;
    else
        cout << this->re << "-i" << -(this->img) << endl;
}

//Complexe Complexe::add(Complexe c)
//{
//    Complexe z(re + c.re, img + c.img); 
//    return z;
//}


Complexe Complexe::conjugue()
{
    return Complexe(this->re,-(this->img));

}

float Complexe::getRe() const
{
    return re;
}

float Complexe::getImg() const
{
    return img;
}

Complexe Complexe::operator+(const Complexe& c) const
{
    return Complexe(re + c.re, img + c.img);
}

Complexe Complexe::operator-(const Complexe& c) const
{
    return Complexe(re - c.re, img - c.img);
}

Complexe Complexe::operator*(const Complexe& c) const
{
    return Complexe(re * c.re - img * c.img, re * c.img + img * c.re);
}

Complexe Complexe::operator/(const Complexe& c) const
{
    float denom = c.re * c.re + c.img * c.img;
    return Complexe((re * c.re + img * c.img) / denom, (img * c.re - re * c.img) / denom);
}

bool Complexe::operator==(const Complexe& c) const
{
    return (re == c.re && img == c.img);
}

bool Complexe::operator!=(const Complexe& c) const
{
    return !(*this == c);
}

Complexe& Complexe::operator=(const Complexe& c)
{
    if (this != &c) {
        re = c.re;
        img = c.img;
    }
    return *this;
}

