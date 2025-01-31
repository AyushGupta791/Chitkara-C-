#include <iostream>
#include <cstring>
using namespace std;
int main(){
    // string name = "Pablo";



// C-style string
    // char name[] = "pablo";
    // cout <<name<< endl;

    // char name[6] = {'p' , 'a' , 'b' , 'l' , 'o' , '\0'};
    // cout <<name<< endl; 
    // cout <<name[0]<< endl; 


    // cout <<strlen(name)<< endl;

    // for(int i=0;i<strlen(name);i++){
    //     cout <<name[i]<<" ";
    // }


    //C++ style

    // string str = "Cintu";
    // cout <<str<< endl;
    // str[0] = 'M';      // replacement/updation/reassignment
    // cout <<str<< endl;




    // const string str = "Cintu";
    // str[0] = 'M';   //can't reassign/change/update the value



    // string msg;
    // cout <<"Enter your msg here: ";
    // getline(cin,msg);
    // cout<<"your msg is: "<<msg<<endl;


    // string sentence;
    // cout <<"Enter your sentence here: ";
    // getline(cin,sentence);
    // int uppercase = 0;
    // int lowercase = 0;
    // for(int i=0;i<sentence.length();i++){
    //     if(sentence[i] >= 'a' && sentence[i]<='z' && sentence[i]!=' '){
    //         lowercase++;
    //     }else if(sentence[i] >= 'A' && sentence[i]<='Z' && sentence[i]!=' '){
    //         uppercase++;
    //     };
    //     }
    // cout << uppercase << endl;
    // cout << lowercase << endl;




    // string str = "hello";
    // int len=str.size();
    // for(int i=0;i<len;i++){
    //     cout<<char(str[i]-32);
    // }




    string str = "hello";
    str.append("World!");
    cout <<str<<endl;
    





    






}