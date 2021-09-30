#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t,n,x,a,b;


    cin>>t;

    int g2[t];

    for(int j=0;j<t;j++){
        int b=0;
        int z=0;
        cin>>n>>x;

        int g1[n];

        for(int i=0;i<n;i++){
            cin>>g1[i];
        }

        sort(g1,g1+n);

        for(int i=0;i<n;i++){
            if(g1[i]<=x){
                b=b+g1[i];
                x=x-g1[i];
                z++;
            }
            else{
                g2[j]=z;
                break;
            }
        }
    }

    for(int i=0;i<t;i++){
        cout<<"Case #"<<i+1<<": "<<g2[0]<<endl;
    }

    return 0;

}
