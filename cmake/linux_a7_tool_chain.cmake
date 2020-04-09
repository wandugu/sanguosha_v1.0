set(CMAKE_SYSTEM_NAME Linux)

set(CMAKE_C_COMPILER arm-openstlinux_weston-linux-gnueabi-gcc CACHE PATH "gcc compiler")

set(CMAKE_CXX_COMPILER arm-openstlinux_weston-linux-gnueabi-g++ CACHE PATH "g++ compiler")

set(CMAKE_SKIP_BUILD_RPATH TRUE CACHE BOOL "" FORCE)

set(CMAKE_AR arm-openstlinux_weston-linux-gnueabi-ar CACHE PATH "archiver")

set(CMAKE_C_FLAGS "-fstack-protector-all -Werror -Wall -g -fPIC -ffunction-sections -fdata-sections -march=armv7ve -mthumb -mfpu=neon-vfpv4 -mfloat-abi=hard -mcpu=cortex-a7 --sysroot=/opt/st/SDK/sysroots/cortexa7t2hf-neon-vfpv4-openstlinux_weston-linux-gnueabi")

set(CMAKE_CXX_FLAGS "-fstack-protector-all -Werror -Wall -g -fPIC -ffunction-sections -fdata-sections -march=armv7ve -mthumb -mfpu=neon-vfpv4 -mfloat-abi=hard -mcpu=cortex-a7 --sysroot=/opt/st/SDK/sysroots/cortexa7t2hf-neon-vfpv4-openstlinux_weston-linux-gnueabi")

set(CMAKE_STATIC_LIBRARY_PREFIX "lib")

set(CMAKE_STATIC_LIBRARY_SUFFIX ".a")

set(CMAKE_C_ARCHIVE_CREATE "<CMAKE_AR> -cru ")
set(CMAKE_CXX_ARCHIVE_CREATE "<CMAKE_AR> -cru ")

set(CMAKE_C_COMPILER_WORKS 1)
set(CMAKE_CXX_COMPILER_WORKS 1)