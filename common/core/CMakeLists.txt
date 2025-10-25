
add_library(core INTERFACE)

# target_link_libraries(core INTERFACE

#     motors


# )

target_link_libraries(core INTERFACE driver)

add_subdirectory(motors)

