   // Check whether a number is prime or not
   
   #include<iostream>
    using namespace std;
    int main(){
        // Prime number
    int num;
    cin>>num;

    if(num < 2) {
        return 0; // so that program ends here, doesn't go to "Prime" print
    }
    else {
        for(int i = 2; i <= num - 1; i++) {
            if(num % i == 0){
                cout<<"Not Prime";
                return 0; //so that program ends here, doesn't go to "Prime" print
            }
        }
        cout<<"Prime";
    }
    return 0; //can write at the end of main function
}