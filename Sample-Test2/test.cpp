#include "pch.h"
#include <queue>

//1. Sprawdzic czy nowo utworzona kolejka jest pusta
//2. Sprawdzic czy jak dodamy kilka elementów (push) to size sie zmieni na prawidlowa wartosc
//3. Sprawdzic czy jak wywołamy pop na kolejce z elemntami to zmniejszy sie jej rozmiar
//4. Sprawdzic czy jak za pomoca push włożyły elementy o zadanych wartosciach to po wywołaniu pop odpowiednio będzie ustawiony front
//5. Sprawdzic czy jak wrzucimy 5 elementów i potem 5 razy wywołamy pop to kolejka bedzie pusta. (polecam uzyc petli for)
//5*. Swap

TEST(TestCase, QueueIsEmpty) 
{
	std::queue<int> testedQueue;
    EXPECT_TRUE(testedQueue.empty());
}
TEST(TestCase, QueueSizePush)
{
	std::queue<int> testedQueue;
	int x = 2;
	for (int i = 1; i <= x; ++i)
	{
		testedQueue.push(x);
	}
	EXPECT_EQ(testedQueue.size(), x);
}
TEST(TestCase, QueueSizePop)
{
	std::queue<int> testedQueue;
	int x = 3;
	for (int i = 1; i <= x; ++i)
	{
		testedQueue.push(x);
	}
	std::queue<int>::size_type sizeBefore = testedQueue.size();
	testedQueue.pop();
	std::queue<int>::size_type sizeAfter = testedQueue.size();

	EXPECT_EQ(sizeBefore, sizeAfter+1);
}
//4. Sprawdzic czy jak za pomoca push włożyły elementy o zadanych wartosciach to po wywołaniu pop odpowiednio będzie ustawiony front
//TEST(TestCase, QueueSizePushandPop)
//{
//	std::queue<int> testedQueue;
//	int x = 2;
//	for (int i = 1; i <= x; ++i)
//	{
//		testedQueue.push(i);
//	}
//	testedQueue.pop();
//	EXPECT_EQ();
//}

class StdQueueTest : public ::testing::Test 
{
protected:
	std::queue<int> testedQueue;
	const size_t desiredQueueSize = 5;
public:
	StdQueueTest()
	{
		int x = 2;
		for (int i = 1; i <= desiredQueueSize; ++i)
		{
			testedQueue.push(i);
		}
	}
};
TEST_F(StdQueueTest, QueueSizePush_F)
{
	EXPECT_EQ(testedQueue.size(), desiredQueueSize);
}
TEST_F(StdQueueTest, TestRemovingElements)
{
	EXPECT_EQ(testedQueue.size(), desiredQueueSize);
	testedQueue.pop();
	EXPECT_EQ(testedQueue.size(), desiredQueueSize - 1);
}