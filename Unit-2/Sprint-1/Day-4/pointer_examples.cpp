// #include <iostream>
// using namespace std;
// int findStringLength(char *str){
//     int count=0;
//     while(*str !='\0'){
//         count++;
//         *str++;
//     }
//     return count;   
// }
// int main(){
//     string name = "hello";
//     int size = findStringLength(&name[0]);
//     cout << size << endl;
// }



// #include <iostream>
// using namespace std;
// void reverseString(char *str){
//    char *end = str;
//    while(*end!='\0'){
//     end++;
//    }
//    end--;
//    while(str < end){
//     char temp = *str;
//     *str = *end;
//     *end = temp;
//     str++;
//     end--;
//    }  
// }
// int main(){
//     string name = "hello";
//     cout<<name<<endl;
//     reverseString(&name[0]);
//     cout<<name<<endl;
// }





// #include <iostream>
// using namespace std;
// bool checkPalindrome(char *str){
//     char *end = str;
//    while(*end!='\0'){
//     end++;
//    }
//    end--;
//    while(str < end){
//     if(*str!=*end){
//         return false;
//     } 
//     str++;
//     end--;
//    } 
//    return true;
// }
// int main(){
//     string name = "madam";
//     cout<<checkPalindrome(&name[0]);
// }




#include <iostream>
using namespace std;
void copyStringSourceToDestination(char *source, char*destination){
    while(*source != '\0'){
        *destination = *source;
        source++;
        destination++;
    }
    *destination = '\0';
}
int main(){
    char str1[] = "Chaman";
    char str2[20];
    cout<<str2<<endl;
    copyStringSourceToDestination(str1,str2);
    cout<<str2<<endl;
}