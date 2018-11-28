#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

int inputNumbers(double[], int); // Returns the # of entries read in
double getMin(const double[], int);
double getMax(const double[], int);
double getSum(const double[], int);
double getStdDev(const double[], int);

#define SIZE 100000

int main(){
    double nums[SIZE];
    int N = 0;
    N =  inputNumbers(nums, N); // Returns the # of entries read in

    return 0;
}



int inputNumbers(double nums[], int N){ // Returns the # of entries read in
    int a = 0;
    while (cin >> nums[N]){
        if (N < SIZE - 1){
            ++ N;
        }
        else if (cin.fail()){
            cerr << "Error reading input" << endl;
            a = 1;
            break;
        }
        else{
            cerr << "Too many values input" << endl;
            a = 1;
            break;
        }
    }
    if (a == 0 ){
        
    
        double Min = getMin(nums,N);
        double Max = getMax(nums,N);
        double Sum = getSum(nums,N);
        double StdDev = getStdDev(nums,N);
    int width = 9;

    cout << left << setw(width) <<  "min"   << setw(width) <<"max" << setw(width) << "sum" << setw(width)<< "count"<< setw(width) << "mean"<< setw(width) << "stddev"<< endl;
    cout <<  setprecision(5) << setw(width)<< Min << setw(width)<< Max << setw(width)<< Sum << setw(width)<< N << setw(width)<< Sum/N << setw(width)<< StdDev << endl; 
    
    return N;
    }
    return 0;
}

double getMin(const double nums[], int N){
    double min = nums[0];
    for ( int i = 0; i < N; ++i){
        if (nums[i] < min){
            min = nums[i];
        }
    }
return min;
}

double getMax(const double nums[], int N){
    double max = nums[0];
    for ( int i = 0; i < N; ++i){
        if (nums[i] > max){
            max = nums[i];
        }
    }
return max;
}

double getSum(const double nums[], int N){
    double sum = nums[0];
    for ( int i = 0; i < N; ++i){
        sum += nums[i];
    }
return sum;   
}

double getStdDev(const double nums[], int N){
    double sum = getSum(nums, N);
    double std = 0;
    for ( int i = 0; i < N; ++i){
        std += pow((nums[i] - sum/N),2);
    }
std = sqrt(std/N);
return std;   
}

