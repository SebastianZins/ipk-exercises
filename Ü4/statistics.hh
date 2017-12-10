#ifndef STATISTICS_HH
#endif
#define STATISTICS_HH

#include <vector>

double mean(const std::vector<double>& v);

double median(const std::vector<double>& v);

double moment(const std::vector<double>& v, int k);

double standard_deviation(const std::vector<double> & v);