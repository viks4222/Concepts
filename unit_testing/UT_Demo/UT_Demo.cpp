#include "gtest/gtest.h"
#include "TestCode.h"

int main() {
	return 0;
}

TEST(TestCodeTest, addFuncTest) {
	EXPECT_EQ(10,add(5,5));
}