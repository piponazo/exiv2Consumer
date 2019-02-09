#include <exiv2/image.hpp>

#include <iostream>

int main(int argc, char **argv)
{
    std::cout << "Hello Exiv2 world!\n";

    auto image = Exiv2::ImageFactory::open(argv[1]);
    image->readMetadata();

    std::cout << "Image metadata read!\n";

    return 0;
}
