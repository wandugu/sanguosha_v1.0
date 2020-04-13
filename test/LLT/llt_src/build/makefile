GTEST_DIR = gtest_lib

TARGER = $(MAKECMDGOALS)

SRC_FILE = OJ.cpp

SRC_INC = OJ.h
TEST_FILE = TestCase.cpp

SRC_OBJ = $(SRC_FILE:%.cpp=%.o)
TEST_OBJ = $(TEST_FILE:%.cpp=%.o)

$(TARGER):$(TEST_OBJ) $(SRC_OBJ)
g++ --std=c++11 -o $(TARGER) $(TEST_OBJ) $(SRC_OBJ) $(GTEST_DIR)/lib/libgtest.a -lpthread

$(TEST_OBJ):$(SRC_OBJ) $(SRC_INC)
g++ --std=c++11 -c -g -I $(GTEST_DIR)/include $(TEST_FILE) $(SRC_OBJ)

$(SRC_OBJ):$(SRC_FILE)
g++ --std=c++11 -c -g $(SRC_FILE)
cleanOBJ:
rm -f *.o
clean:
rm -f $(TARGER) *.o