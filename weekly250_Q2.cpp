class Solution {
public:
    int addRungs(vector<int>& A , int k ) {
        int N = A.size() , l= 0 , cnt = 0 ; 
        for( int i = 0 ; i < N ; i++ )
        {
              int d = A[i] - l ;
              cnt += (d-1)/k ; 
              l = A[i] ;
        }
        return cnt ;
    }
};