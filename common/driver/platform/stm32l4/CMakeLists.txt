add_library(hal STATIC
    st_gpio.c
    st_pwm.c
)

target_include_directories(hal PUBLIC
    bus
    .
)
target_link_libraries(hal PUBLIC
    core
    st_l4_support
)
