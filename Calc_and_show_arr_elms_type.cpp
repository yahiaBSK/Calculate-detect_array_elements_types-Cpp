
#include <iostream>
#include <bits/stdc++.h>
using namespace std;



void name_check(string n){
    cout <<n<<endl;
    int n_len = n.length();
    cout <<"Name length is: "<<n_len<<endl;
    char *arr = new char[n_len];
    string name_asm;

    for (int i = 0; i < n_len; i++){
        arr[i] = n[i];
        name_asm += arr[i];
    };
    cout << "name asm =>>"<<name_asm<<endl;
    for (int j = 0; j < n_len; j++){
        cout << "Arr elm "<<j<<" => "<<arr[j];
        if (isalpha(name_asm[j])){
            cout << " ("<<"letter"<<") "<<isalpha(name_asm[j])<<endl;
        }
        else if (isdigit(name_asm[j])){
            cout << " ("<<"number"<<") "<<isdigit(name_asm[j])<<endl;
        }
        else if (ispunct(name_asm[j])){
            cout << " ("<<"symbol"<<") "<<ispunct(name_asm[j])<<endl;
        }
        else if (isspace(name_asm[j])){
            cout << " ("<<"white space"<<") "<<isspace(name_asm[j])<<endl;
        }else{
            cout <<" (Some thing else!) "<<endl;
        }
    };

    delete[]arr;
}


int main(){
    string name;
    cout << "Enter you name: ";
    getline(cin, name);

    name_check(name);














    /* 

    - var_addr = it holds the addr not the value (&...) || it points to the addr of the string var.
    - *var_addr = it holds the value of what addr it already holds.
    - note: we know that the * symbole means pointing to an addr (it can only hold an addr rather than any other data type!).
    so when you declare it it'll the memory address of that var (without *).
    and if you want to return the data that that pointer addresse holds you have to declare it again with * symbole.

    */
}