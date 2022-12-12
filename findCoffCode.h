#ifndef findCoffCodeH
#define findCoffCodeH

#include <vector>

class FindCoff
{
public:
	FindCoff();
	int getX(std::vector<double>&);
        int imagineY();
	int getY(std::vector<double>&);
	double massSumm(std::vector<double>&);
	double massSummSquare(std::vector<double>&);
	double average(std::vector<double>&);
	double averageXY(std::vector<double>&, std::vector<double>&);
	double calcError();
	double calcBetta();
	int lnX();
	int lnY();
private:
	double betta_;
	double error_;
	std::vector<double> x_;
	std::vector<double> y_;
	std::vector<double> xLn_;
	std::vector<double> yLn_;

};
#endif // !findCoffCodeH
