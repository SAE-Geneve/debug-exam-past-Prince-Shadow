#define _USE_MATH_DEFINES
        #include <iostream>
    #include <cmath>

int main()
{
double radius = 0.0f;
    {
    std::cout << "Welcome! Set the radius for a sphere \n";
    std::cin >> radius;

    std::cout << "The volume is: " << 4.0f/3.0f *M_PI * pow(radius, 3.0f) << "\n";

    std::cout << "The area is: " << 4.0f * M_PI * pow(radius, 2.0f) << "\n";
    }

    //Windows specific
    system( "pause" );
    
    return EXIT_SUCCESS;
}
