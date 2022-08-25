#ifndef __FinancialSamples__CashFlowCalculator__
#define __FinancialSamples__CashFlowCalculator__
#include<vector>

class CashFlowCalculator
{
public:
	CashFlowCalculator(double rate);
	CashFlowCalculator(const CashFlowCalculator& v);
	CashFlowCalculator& operator =(const CashFlowCalculator& v);
	~CashFlowCalculator();

	void addCashPayment(double value, int timePeriod);
	double presentValue();
private:
	std::vector<double>m_CashPayment;
	std::vector<int>m_timePeriods;
	double m_rate;
	double presentValue(double futureValue, int timeperiod);

}; 
#endif /*defined(__FinancialSamples__CashFlowCalculator__)*/


