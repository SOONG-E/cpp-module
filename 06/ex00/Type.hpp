#include <iostream>

#define CHAR 0
#define INT 1
#define FLOAT 2
#define DOUBLE 3
#define UNDEFINED 4

class Type {
	public : 
		Type();
		Type(char *str);
		Type(Type &obj);
		Type &operator=(Type &obj);
		~Type();
		int		getType();
		void	convertToActualType();
		void	makeConversion();
		void	toChar();
		void	toInt();
		void	toFloat();
		void	toDouble();
		int			_type;
		std::string _string;
		char		*_str;

	private :
		double		_strAsDouble;
		double		_valueAsDouble;
		int			_valueAsInt;
		char		_valueAsChar;
		float		_valueAsFloat;
};