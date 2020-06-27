#include "Logger.h"
int main()
{
	Logger logger = Logger();

	logger.Write("Download completed", "OK");
	logger.Write("Some little problems", "WA");
	logger.Write("This is a big error!!", "ER");

	logger.Color(3);
}