#include "Logger.h"
int Logger::m_logCnt;
void Logger::CurrentTime()
{
	time_t t;
	struct tm* t_m;
	t = time(NULL);
	t_m = localtime(&t);
	cout << t_m->tm_hour << ":" << t_m->tm_min << ":" << t_m->tm_sec << " ";
}
void Logger::Color(int ForgC = 0)
{
	WORD wColor = (ForgC & 0x0F);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), wColor);
}
void Logger::Write(string message, string important)
{
	string str1 = "OK";
	string str2 = "WA";
	string str3 = "ER";
	
	
	if (important == str1)
		Color(10);

	if (important == str2)
		Color(30);

	if (important == str3)
		Color(20);

	CurrentTime();
	cout << "[" << important << "] " << message << std::endl;
}