
## Steps to build
Make sure you have cloned the repository

### Building vsomeip
1. cd vsomeip/
2. mkdir build && cd build
3. cmake ..
4. make
5. cd ../../

### Building capicxx-core-runtime
1. cd capicxx-core-runtime/
2. mkdir build && cd build
3. cmake ..
4. make
5. cd ../../

### Building capicxx-someip-runtime
1. cd capicxx-someip-runtime/
2. mkdir build && cd build
3. cmake ..
4. make
5. cd ../../

### Building the main project
1. cd project/
2. mkdir build && cd build
3. cmake ..
4. make


## Steps to Run
1. cd project
2. cd build
3. ./server
4. ./client


## Note
1. https://github.com/GENIVI/capicxx-core-tools/releases/download/3.1.12.2/commonapi-generator.zip
2. https://github.com/GENIVI/capicxx-someip-tools/releases/download/3.1.12.1/commonapi_someip_generator.zip