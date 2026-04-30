//Stock Buy and Sell - Max one Transaction Allowed
// find the profit in a given array 
// price[6] = {7,1,5,3,6,4};
#include<iostream>
using namespace std;
int main (){
    int price[6] = {7,1,5,3,6,4};
    int n = 6;
    int maxProfit = 0;
    for (int i = 0; i< n ; i++){
        for ( int j = i + 1 ; j <n ; j++){
            int profit = price[j] - price[i];
            if(profit > maxProfit){
                maxProfit = profit;
            }
        }
    }
    cout<<"The maximum stock value is "<<maxProfit;
}