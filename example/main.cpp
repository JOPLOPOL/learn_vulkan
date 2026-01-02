//
// Created by Administrator on 2025/12/27.
//

#include <iostream>
#include <stdexcept>
#include <cstdlib>
#include <HelloTriangleApplicaiton.h>

int main() {
    HelloTriangleApplicaiton app;

    try {
        app.run();
    } catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}
