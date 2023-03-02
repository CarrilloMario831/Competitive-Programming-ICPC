#include <iostream>
#include <string>
#include <algorithm>

int main() {

    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(nullptr);

    int numTestCases;
    std::cin >> numTestCases;

    while(numTestCases > 0){

        int lenString;
        std::cin >> lenString;

        std::string meow;
        std::cin >> meow;

        for(auto& x : meow){
            x = tolower(x);
        }

        meow.erase(std::unique(meow.begin(), meow.end()), meow.end());

        if(meow != "meow"){
            std::cout << "NO" << '\n';
        }
        else{
            std::cout << "YES" << '\n';
        }


        numTestCases--;
    }
    return 0;
}
