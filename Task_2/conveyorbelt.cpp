#include<iostream>
#include<algorithm>
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x1,y1,x2,y2;
        cin>>n>>x1>>y1>>x2>>y2;

        int layer1 = min({x1,y1,n-x1+1,n-y1+1});
        int layer2 = min({x2,y2,n-x2+1,n-y2+1});

        int sol = abs(layer1-layer2);
        cout<<sol<<endl;
    }

}