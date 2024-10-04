#include <vector>
#include <iostream>
using namespace std;


class Solution {
public:
    vector<double> convertTemperature(double celsius) {
       return {(celsius+273.15)*1.00000,(celsius*1.80+32.00)*1.00000}; 
    }
};