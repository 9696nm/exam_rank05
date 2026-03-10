
#include <ostream>

class	vect2 {
	private:
		int	x_;
		int	y_;

	public:
		vect2();
		vect2(int x, int y);
		vect2(const vect2 &obj);
		~vect2();

		vect2	&operator=(const vect2 &obj);

		vect2	operator+(const vect2 &obj) const;
		vect2	operator-(const vect2 &obj) const;

		vect2	&operator+=(const vect2 &obj);
		vect2	&operator-=(const vect2 &obj);


		int	getX() const;
		int	getY() const;

};

std::ostream	&operator<<(std::ostream &os, const vect2 &obj);
