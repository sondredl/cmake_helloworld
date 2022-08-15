# include <iostream>
# include <cmath>

int main()
{
    int a, b, c;

    std::cout << "enter the coefficient of x-squared, x, and units: ";
    std::cin >> a >> b >> c;

    double disc = (a * b) - (4 * a * c);
    if(disc < 0){
        std::cerr << "Roots are imaginay " << std::endl;
    }
    else{
        double root1 = (-a + sqrt(disc)) / (2 * a);
        double root2 = (-a - sqrt(disc)) / (2 * a);

        std::cout << "Roots are " << root1 << " and " << root2 << std::endl;
    }
    return 0;
}