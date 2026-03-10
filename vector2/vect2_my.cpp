
#include "vect2_my.hpp"

#include <iostream>

vect2::vect2() : x_(0), y_(0) {}

vect2::vect2(int x, int y) : x_(x), y_(y) {}

vect2::vect2(const vect2 &obj) : x_(obj.x_), y_(obj.y_) {}

vect2::~vect2() {}

vect2	&vect2::operator=(const vect2 &obj) {
	if (this != &obj) {
		x_ = obj.x_;
		y_ = obj.y_;
	}
	return (*this);
}

vect2	vect2::operator+(const vect2 &obj) const {
	vect2	tmp;

	tmp.x_ = x_ + obj.x_;
	tmp.y_ = y_ + obj.y_;
	return (tmp);
}

vect2	vect2::operator-(const vect2 &obj) const {
	vect2	tmp;

	tmp.x_ = x_ - obj.x_;
	tmp.y_ = y_ - obj.y_;
	return (tmp);
}

vect2	&vect2::operator+=(const vect2 &obj) {
	x_ += obj.x_;
	y_ += obj.y_;
	return (*this);
}

vect2	&vect2::operator-=(const vect2 &obj) {
	x_ -= obj.x_;
	y_ -= obj.y_;
	return (*this);
}

int	vect2::getX() const {
	return (x_);
}

int	vect2::getY() const {
	return (y_);
}

std::ostream	&operator<<(std::ostream &os, const vect2 &obj) {
	os << "x: " << obj.getX() << ", y: " << obj.getY();
	return (os);
}
