#include <stdio.h>

#include "CAQ.h"
#include "File.h"
#include "Macros.h"

void usage();

int main(int argc, char* argv[])
{
	if (argc != 7)
	{
		usage();

		return	1;
	}

	CAQ::Ptr	pCAQ;
	
	pCAQ	= CAQ::create(argv[4]);

	if (nullptr == pCAQ)
	{
		return	1;
	}

	int	iLoadAddress	= std::atoi(argv[1]);
	int	iStartAddress	= std::atoi(argv[2]);

	if (false == pCAQ->save(argv[5], argv[6], iLoadAddress, iStartAddress))
	{
		return	1;
	}

	return	0;
}

void usage()
{
	printf("Usage: WriteCAQ LoadAddress StartAddress StackAddress Binary OutputFile OutputName\nCreates CAQ files for a binary file.\n");
}
