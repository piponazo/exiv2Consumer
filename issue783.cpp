#include <iostream>
#include <string>
#include <stdexcept>
#include <exiv2/exiv2.hpp>

using namespace std;

int main()
{
    try
    {
        const std::string imagepath = "capture4.png";
        auto image = Exiv2::ImageFactory::open(imagepath);
    }
    catch (const std::exception& e)
    {
        cerr << "Error: " << e.what() << '\n';
    }
    catch (...)
    {
        cerr << "Error, unknown exception caught.\n";
    }
    cerr << "Working like a charm!\n";
}
