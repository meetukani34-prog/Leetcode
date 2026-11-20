class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> s;
        int i =1;
        while(i <=n){
            if(i%15 ==0){
                s.push_back("FizzBuzz");
            }
            else if(i%3 == 0){
                s.push_back("Fizz");
            }
            else if(i%5 ==0){
                s.push_back("Buzz");
            }
            else{
                s.push_back(to_string(i));
            }
            i++;
        }
        return s;
    }
};