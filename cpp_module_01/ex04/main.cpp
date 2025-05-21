#include <fstream>
#include <iostream>

int	main(int argc, char **argv)
{
	if (argc != 4)
		std::cout << "please enter valid number of arguments" << "\n";
	else
	{
		std::ifstream sourcefile(argv[1]);
		if (sourcefile.fail())
		{
			std::cerr << "Error - Failed to open infile " << argv[1] << std::endl;
			return (1);
		}
		std::string	newfile(argv[1]);
		newfile += ".replace";
		std::ofstream destfile(newfile.c_str());
		if (destfile.fail())
		{
			std::cerr << "Error - Failed to open outfile" << argv[1] << std::endl;
			return (1);
		}
		if (argv[2][0] == '\0')
		{
			std::cerr << "Error - Empty string " << "\n";
			return (1);
		}
		std::string s1(argv[2]);
		std::string s2(argv[3]);
		std::string	buffer;
		while(getline(sourcefile, buffer))
		{
			size_t	pos = 0;
			while (1)
			{
				pos = buffer.find (argv[2], pos);
				if ( pos == std::string::npos)
					break;
				buffer.erase( pos, s1.length());
				buffer.insert( pos, s2);
				pos += s2.length();
			}
			destfile << buffer << "\n";
		}
		sourcefile.close();
		destfile.close();
	}
	return (0);
}
