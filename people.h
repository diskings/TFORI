#include <iostream>
#include <string.h>
using namespace std;

class people
{
private:
	string name;
	int maxblood;//最大血量
	int currentblood;//当前血量
public:
	people(string n,int m,int c){name=n,maxblood=m,currentblood=c;}
	virtual void move();
};
