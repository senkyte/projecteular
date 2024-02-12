#include<iostream>
using namespace std;
bool factor(int n){
    for(int i = 2; i < 21; i++){
        if(n % i != 0){
            return false;
        }
        }
    return true;
}
int main(){
    int num = 2;
    while(true){
        if(factor(num) == true){
            cout << num;
            break;
        }
        else{
            num += 2;
        }

    }

}
