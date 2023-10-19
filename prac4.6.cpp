#include <iostream>
using namespace std;

class Product {
public:
    int manufactureYear;
    int expiryYear;

  
    Product(int manuYear, int expYear) : manufactureYear(manuYear), expiryYear(expYear) {}

    
    int calculateDifference() {
        return expiryYear - manufactureYear;
    }
};


void printYearDifference(const Product &product) 
{
    int difference = product.calculateDifference();
    std::cout << "Manufacture Year: " << product.manufactureYear << std::endl;
    std::cout << "Expiry Year: " << product.expiryYear << std::endl;
    std::cout << "Difference (years): " << difference << std::endl;
}

int main() {
    
    Product product(2020, 2025);

   
    printYearDifference(product);

    return 0;
}

