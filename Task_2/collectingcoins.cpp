#include<iostream>
#include<algorithm>
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
        long long a,b,c,n;
        cin>>a>>b>>c>>n;

        long long total = n+a+b+c;
        // if one of the sisters have more coins than the fair distrubuition before distributing 
        //then logically you can not distribute it equally 
        long long max_sis = max({a,b,c});

        if(total % 3 ==0 && max_sis <= total/3) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

}