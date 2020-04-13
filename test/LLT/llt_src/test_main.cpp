#include "gtest/gtest.h"
//#include <tchar.h>
using namespace testing; //使用gtest定义的testing命名空间

extern "C" int CTT_ServerInit(unsigned int iHostPort); //必须声明

int main(int argc, char* argv[])
{
CTT_ServerInit(1);
InitGoogleTest(&argc, argv); //注册测试用例
return RUN_ALL_TESTS();
}