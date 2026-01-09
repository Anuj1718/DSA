    // Factorial of a number
    // (This solution is limited to small number of )
    
    #include<iostream>
    using namespace std;
    int main(){
    int num, fact = 1;
    cin>>num;
    for(int i = 2; i <= num; i++) {
        fact = fact * i;
    }
    cout<<fact;
}