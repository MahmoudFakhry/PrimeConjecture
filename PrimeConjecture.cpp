#include <iostream>

using namespace std;

bool isPrime(int num){
    bool flag=true;
    for(int i = 2; i <= num / 2; i++) {
       if(num % i == 0) {
          flag = false;
          break;
       }
    }
    return flag;
}

int main()
{
    long long max; 
    cout << "Enter the nth integer: " << endl;
    cin >> max;
    for (int amount = 0; amount < max; amount++) {
        if ((amount % 2) == 1) {
            continue;
        }
        int total;
        long long arr_num[amount];
        
        for (long long i = 0; i < amount; i++) {
            arr_num[i] = i + 1; 
            //cout << arr_num[i] << endl;
        }
        
        double tally = 0;
        for (int i = 0; i < amount / 2; i++) {
            long long first, second;
            first = arr_num[i] * arr_num[i];
            //cout << "first" << " and i is " << i << " " << first << endl;
            second = arr_num[amount - i - 1] * arr_num[amount - i - 1];
            //cout << "second" << " and i is " << i << " " << second << endl;
    
            total = first + second;
            if (isPrime(total)) {
                tally++;
                if (tally >= 2) {
                    continue;
                } 
            }
        }
                
                if (tally < 2) {
                    cout << "Exception for: " << amount << endl;
                }

    } 
    cout << "Done." << endl;
   
    return 0;
}
