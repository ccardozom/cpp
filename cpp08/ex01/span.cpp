#include "span.hpp"

Span::Span(unsigned int N) : _N(N){
    _vec.reserve(_N);
}

void Span::addNumber(int value){
    if (_vec.size() >= _vec.capacity())
		throw ("No more elements can be added. Maximum capacity reached.");
	this->_vec.push_back(value);
	//this->_N++;
}

int Span::shortestSpan(){
    int	ret = 0;
	int	tmp;
	std::vector<int>::iterator it;

	if (_vec.size() < 2)
		throw ("Needed more elements to calculate shortest span");
	for (it = _vec.begin() + 1; it != _vec.end(); it++)
	{
		if (*(it - 1) == *it)
			tmp = 0;
		else if (*(it - 1) < *it)
			tmp = *it - *(it - 1);
		else
			tmp = *(it - 1) - *it;
		if (tmp < ret)
			ret = tmp;
	}
	return (ret);
}

int Span::longestSpan(){
    unsigned int	ret = 0;
	unsigned int	tmp;
	std::vector<int>::iterator it;

	if (_vec.size() < 2)
	{
		throw ("Needed more elements to calculate longest span");
		return (-1);
	}
	for (it = _vec.begin() + 1; it != _vec.end(); it++)
	{
		if (*(it - 1) == *it)
			tmp = 0;
		else if (*(it - 1) < *it)
			tmp = *it - *(it - 1);
		else
			tmp = *(it - 1) - *it;
		if (tmp > ret)
			ret = tmp;
	}
	return (ret);
}