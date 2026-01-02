add_library(LearnVulkanLib
    HelloTriangleApplicaiton.cpp
)

target_link_libraries(LearnVulkanLib PUBLIC LearnVulkanHeaders)

# 链接 Vulkan 和其他依赖
target_link_libraries(LearnVulkanLib PRIVATE
    Vulkan::Vulkan
    Vulkan::Headers
    # 如果用到 glfw/volk/vma，在这里添加
    # glfw
    # volk
    # VulkanMemoryAllocator
)

