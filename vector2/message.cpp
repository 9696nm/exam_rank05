
#include "vect2.hpp"

vect2::vect2() : x_(0), y_(0)
{};

vect2::vect2(int a, int b) : x_(a), y_(b)
{};

vect2::vect2(const vect2 &other) : x_(other.x_), y_(other.y_)
{};

vect2 &vect2::operator=(const vect2 &other)
{
    if (this != &other)
    {
        x_ = other.x_;
        y_ = other.y_;
    }
    return (*this);
};

vect2::~vect2()
{};

vect2 vect2::operator+(const vect2 &other) const
{
    return vect2(x_ + other.x_, y_ + other.y_);
};

vect2 vect2::operator-(const vect2 &other) const
{
    return vect2(x_ - other.x_, y_ - other.y_);
};

vect2 &vect2::operator+=(const vect2 &other)
{
    x_ += other.x_;
    y_ += other.y_;
    return (*this);
};

vect2 &vect2::operator-=(const vect2 &other)
{
    x_ -= other.x_;
    y_ -= other.y_;
    return (*this);
};

vect2 vect2::operator*(int scalar) const
{
    return vect2(x_ * scalar, y_ * scalar);
}

vect2 &vect2::operator*=(int scalar)
{
    x_ *= scalar;
    y_ *= scalar;
    return (*this);
}

bool vect2::operator==(const vect2 &other) const
{
    return x_ == other.x_ && y_ == other.y_;
}

bool vect2::operator!=(const vect2 &other) const
{
    return !(*this == other);
}

vect2 vect2::operator-() const
{
    return vect2(-x_, -y_);
}

vect2 &vect2::operator++()
{
    ++x_;
    ++y_;
    return (*this);
}

vect2 vect2::operator++(int)
{
    vect2 tmp(*this);
    ++(*this);
    return (tmp);
}

vect2 &vect2::operator--()
{
    --x_;
    --y_;
    return (*this);
}

vect2 vect2::operator--(int)
{
    vect2 tmp(*this);
    --(*this);
    return (tmp);
}

int &vect2::operator[](size_t index)
{
    if (index == 0)
        return (x_);
    return (y_);
}

const int &vect2::operator[](size_t index) const
{
    if (index == 0)
        return (x_);
    return (y_);
}

vect2 operator*(int scalar, const vect2 &v)
{
    return vect2(v.x_ * scalar, v.y_ * scalar);
}

std::ostream &operator<<(std::ostream &os, const vect2 &obj)
{
    os << "{" << obj.x_ << ", " << obj.y_ << "}";
    return (os);
}
