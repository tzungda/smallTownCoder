//
// Created by Josh Lu on 2022-07-16.
//
typedef int array2D[100][100];
#include <iostream>
#include <vector>
#include <array>
#include <cmath>

int test_data[9] = {2, 1, 2, 9, 8, 1, 1, 1, 1};
//int test_data[4] = {3,5,10,1};

//void quickSort(int* array,int start, int end){
//    if (start >= end) return;
//    int pivot = (start+end)/2;
//}

int min(const int array[], int low=1){
    int _min = INT_MAX;

    for (int i=0; i<int(sizeof(array)/sizeof(array[0])); i++){
        if (array[i] == low)
            return i;
        if (array[i]<_min)
        {
            _min=array[i];
        }

    }
    return _min;
}

void initMatrix(int Arr[], int N, array2D& M){
    for(int i=0; i<N; ++i)
        for(int j=0; j<N; ++j)
        {
            M[i][j] = 0;
            M[i][j] = Arr[i*N+j];

        }


}

class Solution{
public:
    int assignmentProblem(int Arr[], int N){
        array2D M = {0};
        initMatrix(Arr, N, M);

        return 0;
    }
};



int main(){
    int result = Solution().assignmentProblem(test_data, 3);
    std::cout<<"result: "<<result;
}