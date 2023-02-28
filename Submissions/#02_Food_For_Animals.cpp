#include <iostream>

int main() {

    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(nullptr);

    int numTestCases;
    std::cin >> numTestCases;

    while(numTestCases > 0){
        long catFood;
        std::cin >> catFood;

        long dogFood;
        std::cin >> dogFood;

        long globalFood;
        std::cin >> globalFood;

        long numCats;
        std::cin >> numCats;

        long numDogs;
        std::cin >> numDogs;

        if(catFood + dogFood + globalFood < numCats + numDogs){
            std::cout << "NO" << '\n';
        }
        else if(catFood + globalFood < numCats){
            std::cout << "NO" << '\n';
        }
        else if(dogFood + globalFood < numDogs){
            std::cout << "NO" << '\n';
        }
        else{
            std::cout << "YES" << '\n';
        }

        numTestCases--;
    }
    return 0;
}
