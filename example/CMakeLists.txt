add_executable(LearnVulkanExample main.cpp)

target_link_libraries(LearnVulkanExample PRIVATE LearnVulkanLib)

# --- Resources (assets/shaders/textures, etc.) ---
set(RES_DIR "${CMAKE_SOURCE_DIR}/resources")
if(EXISTS "${RES_DIR}")
    # Copy resources/ next to the built executable (works for multi-config + single-config)
    add_custom_command(TARGET LearnVulkanExample POST_BUILD
            COMMAND ${CMAKE_COMMAND} -E copy_directory
            "${RES_DIR}"
            "$<TARGET_FILE_DIR:LearnVulkanExample>/resources"
            COMMENT "Copying resources/ to $<TARGET_FILE_DIR:LearnVulkanExample>/resources"
    )

    # Install resources to <prefix>/resources
    install(DIRECTORY "${RES_DIR}/" DESTINATION "resources")
endif()

