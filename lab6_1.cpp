#include<iostream>
using namespace std;

int main(){
    int num,n=0,m=0;
    while (true){
    cout << "Enter an integer: ";
    cin >> num;
    if(num%2 == 0 && num != 0){
        n++;
    }
    else{
        if(num != 0){
        m++;
        }
    }
    if(num == 0){
        break;
    }
    }

    cout << "#Even numbers = "<<n<<endl;
    cout << "#Odd numbers = "<<m;
    return 0;
}
