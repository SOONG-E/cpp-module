#include "Type.hpp"
#include <cctype>
#include <cmath>
#include <sstream>
#include <limits.h>
#include <float.h>
#include <cstdlib>

Type::Type() : _type(UNDEFINED){}

Type::Type(Type &obj){
	_str = obj._str;
	_type = obj._type;
	_valueAsDouble = obj._valueAsDouble;
}

Type& Type::operator=(Type &obj){
	_str = obj._str;
	_type = obj._type;
	_valueAsDouble = obj._valueAsDouble;

	return (*this);
}

Type::~Type(){}

/********************************************************/
/*                   MEMBER FUNCTIONS                   */
/********************************************************/

Type::Type(char *str): _string(std::string(str)), _str(str){
	_type = getType();
	convertToActualType();
}

int Type::getType(){
	if (_string == "-inff" || _string == "+inff" || _string == "inff" || _string == "nanf")
		return (FLOAT);
	if (_string == "-inf" || _string == "+inf" || _string == "inf" || _string == "nan" )
		return (DOUBLE);
	if (isdigit(_string[0]) == false && _string.length() > 1)
		return (UNDEFINED);
	if (_string.length() == 1 && isascii(_string[0]) == true && isdigit(_string[0]) == false)
		return (CHAR);
	int num_nonnumeric = 0;
	for (std::string::iterator it = _string.begin(); it != _string.end(); ++it){
		if (isdigit(*it) == false)
			++num_nonnumeric;
	}
	if (num_nonnumeric == 1 && _string.find(".") != std::string::npos)
		return (DOUBLE);
	if (num_nonnumeric == 2 && _string.find(".") != std::string::npos && 
		_string.at(_string.length() - 1) == 'f')
		return (FLOAT);
	if (num_nonnumeric > 1)
		return (UNDEFINED);
	return (INT);
}

void Type::convertToActualType(){
	_valueAsDouble = std::strtod(_str, NULL);

	switch (_type){
	case CHAR :
		_valueAsChar = _str[0];
		_valueAsInt = static_cast<int>(_valueAsChar);
		_valueAsFloat = static_cast<float>(_valueAsChar);
		_valueAsDouble = static_cast<double>(_valueAsChar);
		break;
	case INT :
		_valueAsInt = std::atoi(_str);
		_valueAsChar = static_cast<char>(_valueAsInt);
		_valueAsFloat = static_cast<float>(_valueAsInt);
		_valueAsDouble = static_cast<double>(_valueAsInt);
		break;
	case FLOAT :
		_valueAsFloat = std::strtof(_str, NULL);
		_valueAsChar = static_cast<char>(_valueAsFloat);
		_valueAsInt = static_cast<int>(_valueAsFloat);
		_valueAsDouble = static_cast<double>(_valueAsFloat);
		break;
	case DOUBLE :
		_valueAsChar = static_cast<char>(_valueAsDouble);
		_valueAsInt = static_cast<int>(_valueAsDouble);
		_valueAsFloat = static_cast<float>(_valueAsDouble);
		break;
	}
}

void Type::makeConversion(){
	if (_type == UNDEFINED){
		std::cout << "conversion fail" << std::endl;
		return ;
	}
	toChar();
	toInt();
	toFloat();
	toDouble();
}

void Type::toChar(){
	std::cout << "char : " ;
	if (isinf(_valueAsDouble) == true || isnan(_valueAsDouble)){
		std::cout << "impossible" << std::endl;
		return ;
	}
	if (CHAR_MIN > _valueAsDouble || _valueAsDouble > CHAR_MAX){
		std::cout << "impossible" << std::endl;
		return ;
	}
	if (isprint(_valueAsChar)){
		std::cout << _valueAsChar << std::endl;
		return ;
	}
	if (isascii(_valueAsChar)){
		std::cout << "Non sidplayable" << std::endl;
		return ;
	}
	std::cout << "impossible" << std::endl;
}

void Type::toInt(){
	std::cout << "int : ";
	if (isinf(_valueAsDouble) == true || isnan(_valueAsDouble)){
		std::cout << "impossible" << std::endl;
		return ;
	}
	if (_valueAsDouble > INT_MAX || _valueAsDouble < INT_MIN){
		std::cout << "impossible" << std::endl;
		return ;
	}
	std::cout << _valueAsInt << std::endl;
}

void Type::toFloat(){
	std::cout << "float : " ;
	if (isinf(_valueAsDouble) == true){
		std::cout << _valueAsFloat;
		std::cout << "f" << std::endl;
		return ;
	}
	if (_valueAsDouble > FLT_MAX || _valueAsDouble < FLT_MIN){
		std::cout << "impossible" << std::endl;
		return ;
	}
	std::cout << _valueAsFloat ;
	if (_valueAsFloat == std::roundf(_valueAsFloat))
		std::cout << ".0";
	std::cout << "f" << std::endl;
}

void Type::toDouble(){
	std::cout << "double : " << _valueAsDouble;
	if (isinf(_valueAsDouble) == true){
		std::cout << _valueAsDouble;
		return ;
	}
	if (_valueAsDouble == std::roundf(_valueAsDouble))
		std::cout << ".0";
	std::cout << std::endl;
}
