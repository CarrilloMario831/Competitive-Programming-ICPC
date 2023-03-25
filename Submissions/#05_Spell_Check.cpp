    #include <iostream>
    #include <algorithm>
    #include <string>
    #include <unordered_map>
     
     
    int main() {
     
        std::ios::sync_with_stdio(false);
        std::cin.tie(0);
        std::cout.tie(nullptr);
     
        int numTestCases;
        std::cin >> numTestCases;
     
        while(numTestCases > 0){
     
            int flag = 0;
     
            int lenOfWord;
            std::cin >> lenOfWord;
     
            std::string word;
            std::cin >> word;
     
            std::unordered_map<char, int> map;
     
            if(lenOfWord != 5){
                std::cout << "NO" << '\n';
            }
            else {
                for (int i = 0; i < word.size(); i++) {
                    if (map.contains(word[i])) {
                        map[word[i]] = map[word[i]] + 1;
                    }
                    else{
                        map.insert({word[i], 1});
                    }
                }
                if(map['T'] == 1){
                    flag++;
                }
                if(map['i'] == 1){
                    flag++;
                }
                if(map['m'] == 1){
                    flag++;
                }
                if(map['u'] == 1){
                    flag++;
                }
                if(map['r'] == 1){
                    flag++;
                }
     
                if(flag == 5){
                    std::cout << "YES" << '\n';
                }
                else{
                    std::cout << "NO" << '\n';
                }
            }
            numTestCases--;
        }
     
     
        return 0;
    }
