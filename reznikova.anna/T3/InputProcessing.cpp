#include "InputProcessing.hpp"
#include <exception>
#include <iterator>
#include <limits>
#include "Delimeter.hpp"

void reznikova::readFromFile(std::ifstream & input, std::vector< Polygon > & inputData)
{
  while (!input.eof())
  {
    if (input.fail())
    {
      std::cin.clear();
      std::cin.ignore(std::numeric_limits< std::streamsize >::max(), '\n');
    }
    std::copy(
      std::istream_iterator< Polygon >{input},
      std::istream_iterator< Polygon >{},
      std::back_inserter(inputData)
    );
  }
}
