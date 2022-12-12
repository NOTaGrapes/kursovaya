#include "findCoffCode.h"
#include <vector>
#include <cmath>
#include <math.h>
//------------------------------------------------------
FindCoff::FindCoff()
{
	betta_ = 0;
	error_ = 0;
}
int FindCoff::getX(std::vector<double>& inputVectorX)
{
	x_.reserve(inputVectorX.size());
        x_=inputVectorX;
	return 0;
}
int FindCoff::getY(std::vector<double>& inputVectorY)
{
	y_.reserve(inputVectorY.size());
	y_=inputVectorY;
	return 0;
}
int FindCoff::lnX()
{
	for (int i = 0; i != x_.size(); i++)
	{
		xLn_.push_back(log(x_[i]));
	}
	return 0;
}
int FindCoff::lnY()
{
	for (int i = 0; i != y_.size(); i++)
	{
		yLn_.push_back(log(y_[i]));
	}
	return 0;

}
double FindCoff::massSumm(std::vector<double>& inputVector)
{
	double result = 0;
	for (int i = 0; i != inputVector.size(); i++) {
		result += inputVector[i];
	}
	return result;
}
double FindCoff::massSummSquare(std::vector<double>& inputVector)
{
	double result = 0;
	for (int i = 0; i != inputVector.size(); i++) {
		result +=pow(inputVector[i],2);
	}
	return result;

}
double FindCoff::average(std::vector<double>& inputVector)
{
	return massSumm(inputVector) / inputVector.size();
}
double FindCoff::averageXY(std::vector<double>& inputVectorX, std::vector<double>& inputVectorY)
{
	double rezult = 0;
	for (int i = 0; i != inputVectorX.size(); i++) {
		rezult += inputVectorX[i]*inputVectorY[i];
	}
	return rezult / inputVectorX.size();
}
double FindCoff::calcBetta()
{
	return ((averageXY(xLn_, yLn_) - average(xLn_)* average(yLn_)) / (massSummSquare(xLn_) - pow(average(xLn_), 2)))*1000;
}
double FindCoff::calcError()
{
	double Sx = massSummSquare(xLn_) / x_.size();
	double Sy = massSummSquare(yLn_) / y_.size();
	return  2.6 * sqrt(((Sx / Sy) - pow(betta_, 2)) / x_.size() - 2);

}
int FindCoff::imagineY()
{
        y_.reserve(x_.size());
        y_.push_back(1);
        for (int i=1; i !=x_.size(); i++)
        {
                y_.push_back(i);
        }
        return 0;
}
