class Solution {
public:
string ok(string x){
    string temp = "";
    for(char c : x){
        if(c=='0'){
            temp+='1';
        }else{
            temp+='0';
        }
    }
    reverse(begin(temp),end(temp));
    return temp;
}
    char findKthBit(int n, int k) {
        string s = "0";
        for(int i=2;i<=n;i++){
            string prev = s;
            string mid = "1";
            string last = ok(prev);
            s = prev+mid+last;
        }
        return s[k-1];
    }
};