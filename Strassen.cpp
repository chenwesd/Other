#include<bits/stdc++.h>
using namespace std;
int Ma[2][2]= {1,2,3,4};
int Mb[2][2]= {5,6,7,8};
int Mc[2][2];
void strassen(int a[2][2],int b[2][2]) {
    int P1,P2,P3,P4,P5,P6,P7;
    P1=(a[0][0]+a[1][1])*(b[0][0]+b[1][1]);
    P2=(a[1][0]+a[1][1])*b[0][0];
    P3=a[0][0]*(b[0][1]-b[1][1]);
    P4=a[1][1]*(b[1][0]-b[0][0]);
    P5=(a[0][0]+a[0][1])*b[1][1];
    P6=(a[1][0]-a[0][0])*(b[0][0]+b[0][1]);
    P7=(a[0][1]-a[1][1])*(b[1][0]+b[1][1]);
    Mc[0][0]=P1+P4-P5+P7;
    Mc[0][1]=P3+P5;
    Mc[1][0]=P2+P4;
    Mc[1][1]=P1+P3-P2+P6;
}
int main() {
    strassen(Ma,Mb);
    for(int i=0; i<2; i++) {
        for(int j=0; j<2; j++)
            cout<<Mc[i][j]<<" ";
        cout<<"\n";
    }
}
