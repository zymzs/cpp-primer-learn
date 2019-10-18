// 用for计算1到10的整数和
#include <iostream>

int main(){
    int sum = 0;
    // 当for循环体内语句为1时，大括号可选加入，但为了**规范**，任何时候都应加大括号
    for (int val = 1; val <= 10; ++val){
        sum += val;
    }
    std::cout << "Sum of 1 to 10 inclusive is " << sum << std::endl;
    return 0;
}