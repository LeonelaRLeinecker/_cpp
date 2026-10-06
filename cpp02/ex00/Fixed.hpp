#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>

class Fixed {
	private:
		int _fixedPointValue; //valor entero crudo
		static const int _fractionalBits = 8; //bits fraccionarios(siempre8)
	
	public:
		//constructor por defecto
		Fixed(void);
		//constructor copia
		Fixed(const Fixed &other);
		//sobrecarga del operador de asignacion
		Fixed &operator=(const Fixed &other);
		//destructor
		~Fixed(void);

		//metodos
		int getRawBits(void) const;
		void setRawBits(int const raw);
};
#endif