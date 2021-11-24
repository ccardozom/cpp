#include "point.hpp"

bool	check_point( Point const a, Point const b, Point const c, Point const point ) {

	float	w1, w2;

	w1 = ((c.getX() - a.getX()) * (a.getY() - point.getY()) + (c.getY() - a.getY()) * (point.getX() - a.getX())) /
        ((b.getX() - a.getX()) * (c.getY() - a.getY()) - (b.getY() - a.getY()) * (c.getX() - a.getX()));
	w2 = (point.getY() - a.getY() - w1 * (b.getY() - a.getY())) / (c.getY() - a.getY());

	return w1 > 0.0 && w2 > 0.0 && w1 + w2 <= 1.0;
}

// referencia para la formula
// https://www.youtube.com/watch?v=WaYS1gEXEFE