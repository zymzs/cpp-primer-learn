// 打印输出1到10的和
#include <iostream>

int main(){
    int sum = 0, val = 1;
    // 当val小于等于10时，循环执行
    while (val <= 10) {
        sum += val; // 将 sum + val 赋值给 sum
        ++val;      // 等价于 val += 1, ++叫做“前缀递增运算符”
    }
    std:: cout << "Sum of 1 to 10 inclusive is " << sum << std::endl;
    return 0;
}