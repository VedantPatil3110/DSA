class Bank {
public:
vector<long long>v;
int n;
bool check(int acc){
    if(acc>0 && acc<=n){
        return true;
    }
    return false;
}
    Bank(vector<long long>& balance) {
        v=balance;
        n=balance.size();
    }
    
    bool transfer(int account1, int account2, long long money) {
        if(!check(account1)||!check(account2)||v[account1-1]<money){
            return false;
        }
        v[account1-1]-=money;
        v[account2-1]+=money;
        return true;
    }
    
    bool deposit(int account, long long money) {
        if(!check(account)){
            return false;
        }
        v[account-1]+=money;
        return true;
    }
    
    bool withdraw(int account, long long money) {
        if(!check(account)||v[account-1]<money){
            return false;
        }
        v[account-1]-=money;
        return true;
    }
};

/**
 * Your Bank object will be instantiated and called as such:
 * Bank* obj = new Bank(balance);
 * bool param_1 = obj->transfer(account1,account2,money);
 * bool param_2 = obj->deposit(account,money);
 * bool param_3 = obj->withdraw(account,money);
 */