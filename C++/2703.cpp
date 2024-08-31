#include <iostream>
#include <string>

int main()
{
	int i;
	int t;
	std::string message;
	std::string pattern;
	
	std::cin >> t;
	
	std::cin.ignore();
	
	while (t--)
	{
		getline(std::cin, message);
		getline(std::cin, pattern);
		
		for (i = 0; i < message.length(); i++)
		{
			if (message[i] != 32)
			{
				message[i] = pattern[message[i] - 65];
			}
		}
		
		std::cout << message << '\n';
	}
	
	return 0;
}
