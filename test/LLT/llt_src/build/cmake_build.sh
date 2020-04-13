#!/bin/bash

function check_return()
{
	if [ $? -ne "0" ]; then
		echo ================ make "$1" error  =============================; exit 1
	fi
}

if [ -d ../cmake_build ];then
	rm -rf ../cmake_build 
	echo "dir exsit,delete"
fi

mkdir ../cmake_build

cd ../cmake_build

start_time=$(date "+%Y-%m-%d %H:%M:%S")

cmake -DCMAKE_TOOLCHAIN_FILE=../build_linux/linux_llt_tool_chain.cmake ..
# make VERBOSE=1 -j32
make -j32
make install
cd ..
rm -rf cmake_build
end_time=$(date "+%Y-%m-%d %H:%M:%S")
echo "compile start time: ${start_time}"
echo "compile finish time: ${end_time}"