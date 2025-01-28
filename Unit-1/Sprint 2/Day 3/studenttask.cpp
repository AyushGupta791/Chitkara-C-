#include<iostream>
using namespace std;
int main(){
    // int num = 12345;
    // while(num!=0){
    //     cout<<num%10;
    //     num = num/10;
    // }


    // int num;
    // cout<<"Emter your number";
    // cin>>num;
    

    // int sum = 0;
    // int n;
    // cin>>n;

    // int i=1;
    

    // for (int sp=1;sp<=10;sp++){
    //     if(sp%2==0){
    //         cout<<sp<<" ";
    //     }
    // }

//    int count = 1;
//     for (int sp=10;sp<=30;sp++){
//         if(sp%1==0){
//             count++;
//         }
//     }


// string ch = "hello" ; 
//     for(int i = 0 ; i<=10 ; i++){
//         cout << ch << " " ;
//     }
//     cout << endl ; 
//     string yo = "world" ; 
//     int a = 10  ;
//     while(a>=0){
//         cout << yo << " " ;
//         a-- ;   
//     }



// int num = 12345 ; 
//     int rev = 0 ; 
//     while (num>0){
//         int rem = num%10 ; 
//         rev = rev*10 + rem ; 
//         num = num/10 ; 
//     }
//     cout << rev ; 



//  int num = 2483 ; 
//     int sum = 0 ; 
//     int lenght = 0  ;
//     while (num!=0){
//         lenght++;
//         int rem = num%10 ; 
//         sum += rem ; 
//         num = num/10 ; 
//     }
//     cout << lenght << endl ; 
//     cout << sum ; 



    // int n = 10 ; 
    // int sum = 0 ; 
    // for(int i = 0 ; i<=n ; i++){
    //     if(i%2==0){
    //         sum += i ; 
    //     }
    // }
    // cout << sum ; 
    // int i = 0 ; 
    // do {
    //     if(i%2==0){
    //         sum += i ; 
    //     }
    //     i++; 

    // }
    // while(i<=n) ; 
    // cout << sum ; 



    //     for(int i =  1 ; i<=10 ; i++){
    //     if(i%2==0){
    //         cout << i << endl ; 
    //     }
    // }


    int a = 10;
    int b = 30;
    for(int i = a; i*i <= b; i++){
        int count = 0;
        for(int j = 1; j <= a; j++){
            if(a%j == 0){
                count++;
            }
        } if(count == 2){
            cout<<a;
        }
    }


        






    
}