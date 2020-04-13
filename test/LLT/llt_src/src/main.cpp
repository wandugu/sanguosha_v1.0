#include "gtest/gtest.h"
#include "OJ.h"
#include
#include <stdlib.h>
#include <string.h>
#include <sys/time.h>
#include <time.h>

using namespace std;

class CExampleTest : public testing::Test
{
public:
void SetUp();
void TearDown();
};

int sec_start = 0;

void CExampleTest::SetUp()
{
struct timeval sttimev;
gettimeofday(&sttimev , NULL);
sec_start = sttimev.tv_sec*1000000+sttimev.tv_usec;
// sec_start = sttimev.tv_sec + ;
}

void CExampleTest::TearDown()
{
struct timeval sttimev;
gettimeofday(&sttimev , NULL);
int sec_dis = sttimev.tv_sec*1000000+sttimev.tv_usec - sec_start;
// int sec_dis = sttimev.tv_sec - sec_start;
cout<<" ======== Use ["<<sec_dis<<"] micro seconds ========"<<endl;
}

TEST_F(CExampleTest,TESTCase2)
{
char pIn = "Jkdi234klowe90a3";
char pOut[100];
char pCmp = "Jkdi234klowe90a3";

pOut[0] = '\0';
MarkNum(pIn, pOut);
cout << pIn << endl;
cout << pOut << endl;
ASSERT_EQ(0, strcmp(pOut, pCmp));
// ASSERT_EQ(0, memcmp(array, res, len));
}

int main(int argc, char * argv[])
{
testing::InitGoogleTest(&argc, argv);
return RUN_ALL_TESTS();
}