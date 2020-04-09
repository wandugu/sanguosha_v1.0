#!/bin/bash

CUR_PATH=${PWD}
CMAKE_PATH=${PWD}/cmake-build-debug

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
	# make install
	cd -
fi

