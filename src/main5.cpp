#include <task5.h>
#include <iostream>

int main() {
    char *buff = "123,456,789";
    int n = 0;
    std::vector<std::string> res;
    char **result = nullptr;
    split(&result, &n, buff, ',');
    std::cout << result[0] << std::endl;
    std::cout << result[1] << std::endl;
    std::cout << result[2] << std::endl;
    return 0;
}
