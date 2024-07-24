#include <iostream>
#include<cmath>
using namespace std;
void  evenNumbers();




int main()
{
 evenNumbers();

    return 0;
}


void evenNumbers() {
    int even =0;
    int n;
    cout<<"Enter the number of even numbers you want:\n";
    cin>>n;
    for(int i = 1;  i<=n; i++) {
        cout << i*2;
        if(i<n)
            cout<<" ";

    }




}