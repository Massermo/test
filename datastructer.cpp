#include <iostream>

int main() {

    int n;

    do {
        std::cout << "Enter the number of lines: ";
        std::cin >> n;
    }
    while (n < 1 || n > 9);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j == 1 || j == i || i == n)
            {
                std::cout << j << " ";
            }
            else
            {
                std::cout << "  ";
            }
        }
        std::cout << "\n";
    }

    
    return 0;

}
