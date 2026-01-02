//
// Created by Administrator on 2025/12/27.
//

#include <iostream>
#include <stdexcept>
#include <cstdlib>
#include <HelloTriangleApplication.h>

int main() {
    try
    {
        HelloTriangleApplication app;
        app.run();
    } catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}
