
#include<bits/stdc++.h>
using namespace std;

string f_comma(string st){
    reverse(st.begin(), st.end());
    int ind = 0;
    string new_st = "";
    for(auto _:st){
        if(ind%3==0){new_st+=",";}
        new_st+=st[ind];
        ind+=1;
}
    reverse(new_st.begin(), new_st.end());
    regex pattern(",$");
    new_st = regex_replace(new_st, pattern, "");
    return new_st;
};

int main() {
  cout<<"Batmobil "<<f_comma("1000")<<endl;
  return 0;
}