#include <iostream>

using namespace std;

int main()
{
    int row, col;
    cin>>row>>col;
    for( int i = 1; i<=row; i++){
        for( int j = 1; j<=col; j++){
            if(i==1 || i==row){
                cout<<"*\n";
            }
            else if(j==1 || j==col){
                cout<<"*\n";
            }
            else{
                cout<<" ";
            }
            cout<<endl;
        }
    }
}
