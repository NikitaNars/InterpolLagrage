#include <iostream>

using namespace std;


double lagrangeInterpolation(double x[], double y[], int n, double x0) {
    double result = 0.0;

    
    for (int i = 0; i < n; i++) {
        double term = y[i];
        for (int j = 0; j < n; j++) {
            if (j != i) {
                term *= (x0 - x[j]) / (x[i] - x[j]);
            }
        }
        result += term;
    }
    return result;
}

int main() {
    setlocale(LC_ALL, "ru");
    const int n = 5; 
    double x[n] = { 0.27, 0.93, 1.46, 2.11, 2.87 }; 
    double y[n] = { 2.6, 2.43, 2.06, 0.25, -2.60 }; 


    
    double x0 = 1.02;
    

    
    double result = lagrangeInterpolation(x, y, n, x0);
    
    cout << "«начение интерпол€ционного многочлена в точке " << x0 << " равно: " << result << endl;

    x0 = 0.65;
    result = lagrangeInterpolation(x, y, n, x0);
    
    cout << "«начение интерпол€ционного многочлена в точке " << x0 << " равно: " << result << endl;
    x0 = 1.28;
    result = lagrangeInterpolation(x, y, n, x0);
    
    cout << "«начение интерпол€ционного многочлена в точке " << x0 << " равно: " << result << endl;

    return 0;
}