#include "Blockchain.h"

int main()
{
	Blockchain blockchain = Blockchain();
	int blocknums;
	cout << "How many blocks do you want to append: "<< endl;
	cin >> blocknums;

	for (int i = 0; i < blocknums; ++i)
	{
		int realcount = i + 1;
		std::string data = "";
		cout << "Mining block " << realcount << "..." << endl;
		cout << "Enter block " << realcount << " data: " << endl;
		cin >> data;
		blockchain.AddBlock(Block(realcount, data));
	}

	return 0;
}
