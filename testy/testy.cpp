#include "pch.h"
#include <queue>

//1. Sprawdzic czy nowo utworzona kolejka jest pusta
//2. Sprawdzic czy jak dodamy kilka elementów (push) to size sie zmieni na prawidlowa wartosc
//3. Sprawdzic czy jak wywołamy pop na kolejce z elemntami to zmniejszy sie jej rozmiar
//4. Sprawdzic czy jak za pomoca push włożyły elementy o zadanych wartosciach to po wywołaniu pop odpowiednio będzie ustawiony front
//5. Sprawdzic czy jak wrzucimy 5 elementów i potem 5 razy wywołamy pop to kolejka bedzie pusta. (polecam uzyc petli for)
//5*. Swap

TEST(QueueTest, TestNewQueueIsEmpty)
{
	std::queue<int> testedQueue;
	EXPECT_TRUE(true);
}