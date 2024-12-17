#include <iostream>
using namespace std;
bool chek(int number)
{
    bool flag = false;
    int numbers[10]={0, 1 , 2, 3, 4,5,6,7,8,9};
    for(int i = 0 ; i< 10 ; i++){
        if (number==numbers[i]){
            flag = true;
            break;
        }
    }
    return flag;
}

int main()
{
    int number;
   cin>> number;
   if (chek(number)){cout<<}

    return 0;
}