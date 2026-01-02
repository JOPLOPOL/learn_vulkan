//
// Created by 25473 on 2026/1/2.
//
#pragma once
#include <volk.h>
#include <vector>

struct GLFWwindow;

class HelloTriangleApplication
{
public:
    void run();
private:
    GLFWwindow* window = nullptr;
    VkInstance instance;
    VkDebugUtilsMessengerEXT debugMessenger;

    void initWindow();
    void createInstance();
    void initVulkan();
    void mainLoop();
    void cleanup();
    bool checkValidationLayerSupport();
    std::vector<const char*> getRequiredExtensions();
    void setupDebugMessenger();
    void populateDebugMessengerCreateInfo(VkDebugUtilsMessengerCreateInfoEXT& createInfo);
    static VKAPI_ATTR VkBool32 VKAPI_CALL debugCallback(VkDebugUtilsMessageSeverityFlagBitsEXT messageSeverity, VkDebugUtilsMessageTypeFlagsEXT messageType, const VkDebugUtilsMessengerCallbackDataEXT* pCallbackData, void* pUserData);
};
