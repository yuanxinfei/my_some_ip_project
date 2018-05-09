cmake_minimum_required(VERSION 2.8)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -pthread -std=c++0x -g")

include_directories(
     src
     src-gen
     ../capicxx-core-runtime/include
     ../capicxx-someip-runtime/include
     ../vsomeip/interface
)

link_directories(
     ../../capicxx-core-runtime/build
     ../../capicxx-someip-runtime/build
     ../../vsomeip/build
)

add_executable(client
    src/E01HelloWorldClient.cpp
    src-gen/v0/commonapi/examples/E01HelloWorldSomeIPProxy.cpp
    src-gen/v0/commonapi/examples/E01HelloWorldSomeIPDeployment.cpp
)
target_link_libraries(client CommonAPI CommonAPI-SomeIP vsomeip)

add_executable(server
    src/E01HelloWorldService.cpp
    src/E01HelloWorldStubImpl.cpp
    src-gen/v0/commonapi/examples/E01HelloWorldSomeIPStubAdapter.cpp
    src-gen/v0/commonapi/examples/E01HelloWorldSomeIPDeployment.cpp
    src-gen/v0/commonapi/examples/E01HelloWorldStubDefault.cpp
)
target_link_libraries(server CommonAPI CommonAPI-SomeIP vsomeip) 

#add_library(mytime SHARED src/mytime.cpp)