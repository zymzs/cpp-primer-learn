// 统计每个值连续出现了多少次
#include <iostream>

int main(){
    // currVal作为当前正在统计的数，val作为当前数
    int currVal = 0, val = 0;
    if (std::cin >> currVal) {
        int cnt = 1;
        while (std::cin >> val){
            if (val == currVal){
                ++cnt;
            }
            else{
                std::cout << currVal << " occurs " <<cnt << " times" << std::endl;
                currVal = val;
                cnt = 1;
            }
        }
        std::cout << currVal << " occurs " << cnt << " times " << std::endl;
    }
    return 0;
}