#include<bits/stdc++.h>
using namespace std;
//   (((3)))((2))(1)  (((3)2)1)
int main(){
    int t;
    cin >>t;
    string s;
    for (int i=0;i<t;i++){ // ((2))
        cin>>s; // s = 2
        int l = s[0]-48; // 50 - 48 = 2 = l
        string s1;
        int m;
        if(s.size()==1){ // (( 2 ))
            s1 = string(l,'(')+s[0]+string(l,')');
        }   //  
        else{ //(((3)2)1)  l - m
            s1 = string(l,'(')+s[0];
            for(int j=1; j<s.size(); j++){
                m = s[j] - 48;
                if (l>m){
                    s1 +=  string(l-m,')')+s[j];
                    l = m;   // l        m
                }// 1 6 5 = ( 1 ((((( 6 ) 5 )))))
                else if(l<m){
                    s1 += string(m-l,'(')+s[j];
                    l = m;
                }
                else{ // 110
                    s1 += s[j];
                }
                
                
            }
            s1 += string(m,')');
        }
        cout<<"Case #"<<i+1<<": "<<s1<<endl;
        
    }
}
