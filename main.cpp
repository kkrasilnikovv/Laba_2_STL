#include <iostream>
#include <vector>
#include <exception>
using namespace std;
bool isNumber(string str);
int main() {
    vector<int> array;
    vector<int> schet;
    vector<int> noSchet;
    vector<int> eleven;
    for(int i=0;i<100;i++){
        array.push_back(i+1);
    }
    for(int i : array){
        if(i%11==0) {
            eleven.push_back(i);
        }
        if(i%2==0){
            schet.push_back(i);
        } else{
            noSchet.push_back(i);
        }
    }
    while (true) {
        int input;
        string str;
        cout << "Что программа должна сделать?" << endl;
        cout << "1.Вывести все четные числа." << endl;
        cout << "2.Вывести все нечетные числа." << endl;
        cout << "3.Вывести все числа делящиеся на 11." << endl;
        cout << "4.Выход." << endl;
        cin>>str;
        try
        {
            if(!isNumber(str)) {
                throw exception();
            }
            input = stoi(str);
        }
        catch(const exception &ex)
        {
            cout << "Некорректная команда." << endl;
            continue;
        }

        switch (input) {
            case 1:
                for(int nums:schet){
                    cout << nums << endl;
                }
                break;
            case 2:
                for(int nums:noSchet){
                    cout << nums << endl;
                }
                break;
            case 3:
                for(int nums:eleven){
                    cout << nums << endl;
                }
                break;
            case 4:
                return 0;
        }
    }
}
bool isNumber(string str){
    int i=0;
    int k=0;
    while(str[i]){
        if (str[i]<'1' || str[i]>'4'){
            k=1;
            break;
        }
        i++;
    }
    if(k==0)
        return true;
    else
        return false;
}


