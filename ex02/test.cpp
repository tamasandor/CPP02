#include "Fixed.hpp"

int	main(void)
{
	Fixed a(2);
	Fixed b(86);
	Fixed const j( Fixed( 5.05f ) * Fixed( 2 ) );


	std::cout << (b * a) << std::endl;
}
