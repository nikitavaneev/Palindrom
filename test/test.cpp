#include <gtest/gtest.h>
#include "polindrom.h"

TEST(Palindrom,polindrom)
{
	CNode* help = 0;
	int a[5] = { 1,2,3,2,1 };
	for (int i = 0; i < 5; i++) {
		Add(&help, a[i]);
	}
	ASSERT_TRUE(Palindrom(help));
}

TEST(Palindrom,not_polindrom)
{
	CNode* help = 0;
	int a[5] = { 3,3,3,2,2 };
	for (int i = 0; i < 5; i++) {
		Add(&help, a[i]);
	}
	ASSERT_FALSE(Palindrom(help));
}

TEST(Palindrom, empty) {
	ASSERT_TRUE(Palindrom(0));
}

TEST(Palindrom, list) {
	CNode* node = 0;
	Add(&node, 3);
	ASSERT_TRUE(node);
}
int main(int ac, char* av[])
{
	testing::InitGoogleTest(&ac, av);
	return RUN_ALL_TESTS();
}