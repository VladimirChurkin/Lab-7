#pragma once
#pragma warning(disable : 4996)
#include <string>
#include <iostream>
#include <ctime>
#include <Windows.h>
using namespace std;
class Logger
{
private:
	static int m_logCnt;
public:
	static void Write(string message, string important);
	static void CurrentTime();
	static void Color(int a);
};
