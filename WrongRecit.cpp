#include<iostream>
#include<cstdio>
using namespace std;

int arr[10010];
int b[100010];
int n;
int first = 0;
int second = 0;
int mini = 100001;
int maxi = -1;

int main(){
    cin>>n;
    int d;
    int i = 0;

    while(scanf("%d",&d) != EOF){
        arr[++i] = d;
        b[ arr[i] ]++;
        if(b[arr[i]] >1){
            second = arr[i];
        }
        if(mini >= arr[i]){
            mini = arr[i];
        }
        if(maxi <= arr[i]){
            maxi = arr[i];
        }   
    }

    for(int i=mini;i<=maxi;i++){
        if(b[i] == 0){
            cout<<i<<" "<<second<<endl;
            return 0;
        }
    }
    return 0;
} 
