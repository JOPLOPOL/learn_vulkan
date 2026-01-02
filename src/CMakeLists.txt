add_library(LearnVulkanLib
        HelloTriangleApplication.cpp
)

target_link_libraries(LearnVulkanLib PUBLIC LearnVulkanHeaders)

# 链接 Vulkan 和其他依赖
target_link_libraries(LearnVulkanLib PRIVATE
        glfw
        # VulkanMemoryAllocator
)
target_link_libraries(LearnVulkanLib PUBLIC
        volk::volk
)

