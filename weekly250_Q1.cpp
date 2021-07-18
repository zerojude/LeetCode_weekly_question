class Solution {
public:
    int canBeTypedWords(string A , string B ) {
        unordered_set< char > st ;
        for( auto x : B )
            st.insert(x);
       
        string x ;
        stringstream ss(A);
        int cnt= 0 ; 
        while(ss>>x)
        {
            int f = 0 ; 
            for( auto i : x )
            if( st.find(i) != st.end() )
            f = 1 ;  
            if( f == 0 )cnt++;
        }
        return cnt ; 
    }
};