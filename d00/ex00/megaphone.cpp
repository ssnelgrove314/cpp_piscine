#include <cctype>
#include <string>
#include <iostream>

int main(int argc, char *av[])
{
	if (argc > 1)
	{
		for (int i = 1; i < argc; i ++)
		{
			for (int j = 0; av[i][j] != 0; j++) {
				av[i][j] = toupper(av[i][j]);
			}
			std::cout << av[i];
		}
		std::cout << std::endl;
		return (0);
	}
	else
	{
		std::cout << "* LOUD AND UNBERABLE FEEDBACK NOISE *" << std::endl;
	}
	return 0;
}
