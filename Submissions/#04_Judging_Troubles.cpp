#include <iostream>
#include <algorithm>
#include <string>
#include <unordered_map>
#include <vector>


int main() {

    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(nullptr);

    int n;
    std::cin >> n;

    std::string tmp;

    std::vector<std::string> arr;

    std::unordered_map<std::string, int> mapOne;
    std::unordered_map<std::string, int> mapTwo;
    
    int i = 0;

    while(i < n){
        std::cin >> tmp;

        if (mapOne.contains(tmp)) {
            mapOne[tmp] = mapOne[tmp] + 1;
        }
        else{
            mapOne.insert({tmp, 1});
            arr.push_back(tmp);
        }
        tmp = "";
        i++;
    }

    int j = i;

    while(j < n + n){
        std::cin >> tmp;
        if (mapTwo.contains(tmp)) {
            mapTwo[tmp] = mapTwo[tmp] + 1;
        }
        else{
            mapTwo.insert({tmp, 1});
        }
        tmp = "";
        j++;
    }

    int sum = 0;

    for(int a = 0; a < arr.size(); a++){
        sum += std::min(mapOne[arr[a]], mapTwo[arr[a]]);
    }
    
    std::cout << sum << '\n';

    return 0;
}
