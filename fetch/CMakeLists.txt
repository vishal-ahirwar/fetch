add_executable(fetch src/main.cpp) # Add your Source Files here
#@add_target_link_libraries Warning: Do not remove this line
target_link_libraries(fetch PRIVATE fmt::fmt cpr::cpr)
target_link_libraries(fetch PRIVATE cpr::cpr)