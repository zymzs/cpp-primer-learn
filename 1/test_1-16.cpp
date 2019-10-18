// 从cin读取一组数，输出其和
#include <iostream>

int main(){
    int sum = 0, val = 0;
    while (std::cin >> val){
        sum += val;
    }
    std::cout << "Sum of these numbers inclusive is " << sum << std::endl;
    return 0;
}