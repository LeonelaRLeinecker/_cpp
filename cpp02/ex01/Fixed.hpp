#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <cmath> //para usar roundf


class Fixed {
	private: 
		int	_fixedPointValue;
		static const int _fractionalBits = 8;
	
	public:
		Fixed(void);
		Fixed(const Fixed &other);
		//nuevos constructores
		Fixed(const int param);
		Fixed(const float param);
		Fixed &operator=(const Fixed &other);
		~Fixed(void);


		//metodos de conversion
		float toFloat(void) const;
		int toInt(void) const;

		//metodos crudos
		int getRawBits(void) const;
		void setRawBits(int const raw);
};

//sobrecarga del operador:
std::ostream &operator<<(std::ostream &out, const Fixed &rhs);
#endif
