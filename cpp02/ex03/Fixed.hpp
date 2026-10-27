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

		//Operator de comparacion
		bool operator>(const Fixed &other) const;
		bool operator<(const Fixed &other) const;
		bool operator>=(const Fixed &other) const;
		bool operator<=(const Fixed &other) const;
		bool operator==(const Fixed &other) const;
		bool operator!=(const Fixed &other) const;

		//operradores matematicos
		Fixed operator+(const Fixed &other) const;
		Fixed operator-(const Fixed &other) const;
		Fixed operator*(const Fixed &other) const;
		Fixed operator/(const Fixed &other) const;

		//pre-incremento (++a)
		Fixed &operator++(void);
		//post-incremento (a++)
		Fixed operator++(int);
		//pre-decremento (--a)
		Fixed &operator--(void);
		//post-decremento (a--)
		Fixed operator--(int);

		//sobrecarga min y max
		static Fixed &min(Fixed &a, Fixed &b);
		static const Fixed &min(const Fixed &a, const Fixed &b);
		static Fixed &max(Fixed &a, Fixed &b);
		static const Fixed &max(const Fixed &a, const Fixed &b);

};

//sobrecarga del operador:
std::ostream &operator<<(std::ostream &out, const Fixed &rhs);
#endif