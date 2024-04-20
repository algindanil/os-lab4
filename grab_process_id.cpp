#include <unistd.h>

#include <iostream>

char data[] = "Oh maaan I sure hope nobody intercepts this process' memory to read this message";

int main() {
    std::cout << getpid() << " " << (void *)data << " " << sizeof(data) << "\n";
    std::cin.get();

    return 0;
}