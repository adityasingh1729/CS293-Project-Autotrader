#ifndef MARKET_H
#define MARKET_H
class market
{
private:
	char** inputs;
public:
	market(int argc, char** argv);
	void start();
};
#endif
