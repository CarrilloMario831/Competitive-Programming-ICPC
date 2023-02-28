#include <iostream>
#include <string>

int main() {
    int numTestCases;
    std::cin >> numTestCases;
    while(numTestCases > 0){

        int lenString;
        std::cin >> lenString;

        char str[lenString];
        std::cin >> str;

        std::string str1 = "";

        for(long i = 1; i <= 10000; i++){
            if(i % 3 == 0 && i % 5 == 0){
                str1 += "FB";
            }
            else if(i % 5 == 0){
                str1 += "B";
            }
            else if(i % 3 == 0){
                str1 += "F";
            }
        }
        int start = 0;
        int end = lenString;
        std::string test = "";
        int i = 0;
        int flag = 0;
        while(i < str1.size() && flag != 1) {
            for (int i = start; i < end; i++) {
                test += str1[i];
            }
            if(test == str){
                std::cout << "YES" << std::endl;
                flag = 1;
            }
            test = "";
            start++;
            end++;
            i++;
        }
        if(flag == 0) {
            std::cout << "NO" << std::endl;
        }
        numTestCases--;
    }
    return 0;
}

