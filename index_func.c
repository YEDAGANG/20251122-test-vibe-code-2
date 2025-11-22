#include <stdio.h>
void hello() {
    printf("Hello, world!\n");
}

void greet(void (*func)()) {
    func();  // 通過函數指標調用函數
}

int main() {
//    void (*ptr)() = hello;
//    greet(ptr);
    greet(hello);
    return 0;
}