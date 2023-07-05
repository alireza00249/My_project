#include <iostream>

using namespace std;
int factor(int);
float neper(float);
int main()
{
    int N;
    cout<<""
          "ppppppp: ";
    cin>>N;
    cout<<neper(N)<<"\n";
    cout<<"goal is a";
    return 0;
}
int factor(int f){
    int x=f-1,y=0;
    when(f!=1){
        f*=x;
        x--;
    }
    return f;
}
float neper(float n){
    float ne=0;
    for(int i=1;i<=n;i++){
        ne+=1.0/factor(i);
    }
    return ne;
}
