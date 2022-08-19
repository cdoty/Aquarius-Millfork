#include <stdio.h>

#include "Aquarius.h"
#include "File.h"
#include "Macros.h"

void usage();

int main(int argc, char* argv[])
{
	if (argc != 3)
	{
		usage();

		return	1;
	}

	Aquarius::Ptr	pAquarius;
	
	pAquarius	= Aquarius::create(argv[1]);

	if (nullptr == pAquarius)
	{
		return	1;
	}

	if (false == pAquarius->save(argv[2]))
	{
		return	1;
	}

	return	0;
}

void usage()
{
	printf("Usage: TDToScreen MapPrefix SavePrefix\nConverts GBMB/GBTD files to Aquarius screen and color files.\n");
}
