#!/bin/bash

CUR_PATH=${PWD}
CMAKE_PATH=${PWD}/cmake-build-debug
start_time=$(date "+%Y-%m-%d %H:%M:%S")
function check_return()
{
	if [ $? -ne "0" ]; then
		echo ================ make "$1" error =============================; 
		exit 1
	fi
}

if [[ $1 == "1" ]]; then
	cd ${CMAKE_PATH}
	rm -rf *
	cd -
fi

if [[ $1 == "12" ]]; then
	cd ${CMAKE_PATH}
	rm -rf *
	cmake ../
	make
	make install
	cd -
fi

if [[ $1 == "a7" ]]; then
	cmake -DCMAKE_TOOLCHAIN_FILE=../cmake/linux_a7_tool_chain.cmake -DBOARD_TYPE=a7 -DOS_TYPE=EMAP_LINUX -D"$1"=true ..
fi

end_time=$(date "+%Y-%m-%d %H:%M:%S")
echo "compile start time: ${start_time}"
echo "compile finish time: ${end_time}"

