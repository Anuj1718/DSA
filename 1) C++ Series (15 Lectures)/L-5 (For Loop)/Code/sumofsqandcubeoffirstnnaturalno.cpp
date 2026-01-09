   // Print Sum of square of first n natural number.
   
   #include<iostream>
     using namespace std;
     int main(){
    
    int sum = 0;
    int n;
    cout<<"Enter the number : ";
    cin>>n;

    for(int i = 1; i <= n; i++) {
        sum = sum + (i * i);
    }
    cout<<sum;

    // 6. Print Sum of cube of first n natural number
    int sum = 0;
    int n;
    cout<<"Enter the number : ";
    cin>>n;

    for(int i = 1; i <= n; i++) {
        sum = sum + (i * i * i);
    }
    cout<<sum;
     }