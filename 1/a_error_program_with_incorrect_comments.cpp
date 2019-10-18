#include <iostream>

int main(){
    /*
     * 这是一行注释
     * /*这是一行嵌套的注释*/
     */
    std::cout << "我要编译这个不正确的程序" << std::endl;
    return 0;
}

// 输出结果：
// a_error_program_with_incorrect_comments.cpp: In function 'int main()':
// a_error_program_with_incorrect_comments.cpp:7:7: error: expected primary-expression before '/' token
//       */