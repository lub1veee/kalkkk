#pragma once
using namespace std;

void Kalk(string n, int a)
{
	cout << n << " " << a << endl;
}

int sum(int a, int b)
{
	return a + b;
}
float del(double a, double b)
{
	if (b != 0) { return a / b; }
	else { return 0; }
}
int sub(int a, int b)
{
	return a - b;
}
int umn(int a, int b)
{
	return a * b;
}
int maxx(int a, int b)
{
	if (a > b) { return a; }
	else { return b; }
}
int minn(int a, int b)
{
	if (a < b) { return a; }
	else { return b; }
}
float sredznacch(double a, double b)
{
	return ((a + b) / 2);
}
int otriz(int a, int b)
{
	if (a < 0) { return a; }
	else { return b; }
}